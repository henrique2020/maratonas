# Problema: 1109 - Burlando a Maratona | Resposta: Accepted
# Linguagem: Python 3.11 [+1s]         | Tempo: 0.256s

import sys

edges = []      # edges[state][char] = bitmask
eps = []        # eps[state] = bitmask

prec = {'|': 1, '.': 2, '*': 3}

def new_state():
    edges.append([0] * 26)
    eps.append(0)
    return len(edges) - 1

def lit(c):
    a = new_state()
    b = new_state()
    edges[a][ord(c) - 97] |= (1 << b)
    return a, b

def cat(a, b):
    eps[a[1]] |= (1 << b[0])
    return a[0], b[1]

def uni(a, b):
    s = new_state()
    e = new_state()
    eps[s] |= (1 << a[0]) | (1 << b[0])
    eps[a[1]] |= (1 << e)
    eps[b[1]] |= (1 << e)
    return s, e

def star(a):
    s = new_state()
    e = new_state()
    eps[s] |= (1 << a[0]) | (1 << e)
    eps[a[1]] |= (1 << a[0]) | (1 << e)
    return s, e

def postfix(r):
    out, st = [], []
    for c in r:
        if c.isalnum():
            out.append(c)
        elif c == '(':
            st.append(c)
        elif c == ')':
            while st[-1] != '(':
                out.append(st.pop())
            st.pop()
        else:
            while st and st[-1] != '(' and prec[st[-1]] >= prec[c]:
                out.append(st.pop())
            st.append(c)
    return out + st[::-1]

def build(pf):
    st = []
    for c in pf:
        if c.isalnum():
            st.append(lit(c))
        elif c == '.':
            b, a = st.pop(), st.pop()
            st.append(cat(a, b))
        elif c == '|':
            b, a = st.pop(), st.pop()
            st.append(uni(a, b))
        else:
            st.append(star(st.pop()))
    return st[0]

def eclose(mask):
    stack = [i for i in range(len(edges)) if (mask >> i) & 1]
    seen = mask

    while stack:
        s = stack.pop()
        nxt = eps[s]
        new = nxt & ~seen
        while new:
            i = (new & -new).bit_length() - 1
            seen |= (1 << i)
            stack.append(i)
            new ^= (1 << i)

    return seen

def run(start, end, s):
    cur = eclose(1 << start)

    for ch in s:
        c = ord(ch) - 97
        nxt = 0

        m = cur
        while m:
            i = (m & -m).bit_length() - 1
            nxt |= edges[i][c]
            m ^= (1 << i)

        cur = eclose(nxt)
        if not cur:
            return False

    return (cur >> end) & 1


data = sys.stdin.read().splitlines()
i, n = 0, len(data)
out = []
while i < n:
    edges.clear()
    eps.clear()

    start, end = build(postfix(data[i]))
    i += 1

    k = int(data[i]); i += 1

    for j in range(i, i + k):
        out.append("Y" if run(start, end, data[j]) else "N")

    i += k
    out.append('')
    
out.append('')
sys.stdout.write("\n".join(out))
