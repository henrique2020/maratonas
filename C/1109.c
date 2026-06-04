// Problema: 1109 - Burlando a Maratona | Resposta: Accepted
// Linguagem: C99 [+0s]                 | Tempo: 0.057s

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ACEITA 1
#define REJEITA 0
#define PARENTESES 0
#define UNIAO 1
#define CONCATENACAO 2
#define ESTRELA 3
#define MAX_STATES 5000 // Maximum number of states

typedef struct Transicao {
    char simbolo;
    struct Estado * estado;
} Transicao;

typedef struct Estado {
    struct Transicao * transicoes;
    int numero_transicao;
    int index;
} Estado;

typedef struct Automato {
    struct Estado * estadoInicial;
    struct Estado * estadoFinal;
} Automato;

// Global variables to track state generation
int cont = 0;
Estado* all_states[MAX_STATES];

// Helper function to create states and track them globally
Estado* criarEstado() {
    Estado* e = (Estado*) malloc(sizeof(Estado));
    e->index = ++cont;
    e->transicoes = NULL;
    e->numero_transicao = 0;
    all_states[e->index] = e;
    return e;
}

Automato * alfabeto(char simbolo) {
    Automato * automato = (Automato *) malloc(sizeof(Automato));
    Estado * q1 = criarEstado();
    Estado * q2 = criarEstado();
    Transicao * q1_q2 = (Transicao *) malloc(sizeof(Transicao));
    
    q1_q2->simbolo = simbolo;
    q1_q2->estado = q2;
    q1->transicoes = q1_q2;
    q1->numero_transicao = 1;
    
    automato->estadoInicial = q1;
    automato->estadoFinal = q2;
    return automato;
}

Automato * concatenacao(Automato * m1, Automato * m2) {
    Automato * automato = (Automato *) malloc(sizeof(Automato));
    Transicao * m1_m2 = (Transicao *) malloc(sizeof(Transicao));
    
    m1_m2->simbolo = '&'; // Epsilon transition
    m1_m2->estado = m2->estadoInicial;
    m1->estadoFinal->transicoes = m1_m2;
    m1->estadoFinal->numero_transicao = 1;
    
    automato->estadoInicial = m1->estadoInicial;
    automato->estadoFinal = m2->estadoFinal;
    return automato;
}

Automato * uniao(Automato * m1, Automato * m2) {
    Automato * automato = (Automato *) malloc(sizeof(Automato));
    Estado * q1 = criarEstado();
    Estado * q2 = criarEstado();
    Transicao * q1_ini = (Transicao *) malloc(sizeof(Transicao) * 2);
    Transicao * fn_q2 = (Transicao *) malloc(sizeof(Transicao));
    
    q1_ini[0].simbolo = '&';
    q1_ini[0].estado = m1->estadoInicial;
    q1_ini[1].simbolo = '&';
    q1_ini[1].estado = m2->estadoInicial;
    
    fn_q2->simbolo = '&';
    fn_q2->estado = q2;
    
    q1->transicoes = q1_ini;
    q1->numero_transicao = 2;
    
    m1->estadoFinal->transicoes = fn_q2;
    m1->estadoFinal->numero_transicao = 1;
    m2->estadoFinal->transicoes = (Transicao *) malloc(sizeof(Transicao));
    m2->estadoFinal->transicoes[0] = *fn_q2; // Copy transition for m2
    m2->estadoFinal->numero_transicao = 1;
    
    automato->estadoInicial = q1;
    automato->estadoFinal = q2;
    return automato;
}

Automato * estrela(Automato * m1) {
    Automato * automato = (Automato *) malloc(sizeof(Automato));
    Estado * q1 = criarEstado();
    Estado * q2 = criarEstado();
    Transicao * fn_ini = (Transicao *) malloc(sizeof(Transicao) * 2);
    Transicao * q1_ini = (Transicao *) malloc(sizeof(Transicao) * 2);
    
    fn_ini[0].simbolo = '&';
    fn_ini[0].estado = m1->estadoInicial;
    fn_ini[1].simbolo = '&';
    fn_ini[1].estado = q2;
    
    q1_ini[0].simbolo = '&';
    q1_ini[0].estado = m1->estadoInicial;
    q1_ini[1].simbolo = '&';
    q1_ini[1].estado = q2;
    
    q1->transicoes = q1_ini;
    q1->numero_transicao = 2;
    
    m1->estadoFinal->transicoes = fn_ini;
    m1->estadoFinal->numero_transicao = 2;
    
    automato->estadoInicial = q1;
    automato->estadoFinal = q2;
    return automato;
}

Automato * criarAutomato(char * expressao, int inicio, int precedencia) {
    Automato * automato = (Automato *) malloc(sizeof(Automato));
    automato->estadoInicial = NULL;
    automato->estadoFinal = NULL;
    int parenteses = 0;
    
    while(expressao[inicio] != '\0') {
        if(expressao[inicio] == '(') {
            parenteses = 1;
            automato = criarAutomato(expressao, inicio + 1, PARENTESES);
        }
        else if(expressao[inicio] == ')') {
            if(!parenteses) break;
            parenteses = 0;
        }
        else if(expressao[inicio] == '|') {
            if(precedencia < UNIAO)
                automato = uniao(automato, criarAutomato(expressao, inicio + 1, UNIAO));
            else break;
        }
        else if(expressao[inicio] == '.') {
            if(precedencia < CONCATENACAO)
                automato = concatenacao(automato, criarAutomato(expressao, inicio + 1, CONCATENACAO));
            else break;
        }
        else if(expressao[inicio] == '*') {
            automato = estrela(automato);
        }
        else if(automato->estadoInicial == NULL && automato->estadoFinal == NULL) {
            automato = alfabeto(expressao[inicio]);
        }
        
        expressao[inicio] = '&'; // Mark as processed
        inicio++;
    }
    return automato;
}

// --- DETERMINISTIC EXECUTION LOGIC ---

// Computes the epsilon-closure of a set of states (all states reachable without consuming a character)
void epsilon_closure(int* current_set) {
    int changed = 1;
    while(changed) {
        changed = 0;
        for(int i = 1; i <= cont; i++) {
            if(current_set[i]) {
                Estado* q = all_states[i];
                for(int t = 0; t < q->numero_transicao; t++) {
                    // If transition is epsilon ('&') and we haven't added the target state yet
                    if(q->transicoes[t].simbolo == '&') {
                        int dest_idx = q->transicoes[t].estado->index;
                        if(!current_set[dest_idx]) {
                            current_set[dest_idx] = 1;
                            changed = 1; // Keep looping until no new states are found
                        }
                    }
                }
            }
        }
    }
}

// Simulates a DFA on-the-fly using Subset Construction
int executarDFA(Automato* nfa, char* palavra) {
    // Array acting as a boolean set of currently active states
    int current_set[MAX_STATES] = {0}; 
    
    // 1. Initialize the start state
    current_set[nfa->estadoInicial->index] = 1;
    epsilon_closure(current_set);
    
    // 2. Process each character in the string
    for(int p = 0; palavra[p] != '\0'; p++) {
        char c = palavra[p];
        int next_set[MAX_STATES] = {0};
        
        // Find all valid transitions for character 'c' from the current set of states
        for(int i = 1; i <= cont; i++) {
            if(current_set[i]) {
                Estado* q = all_states[i];
                for(int t = 0; t < q->numero_transicao; t++) {
                    if(q->transicoes[t].simbolo == c) {
                        next_set[q->transicoes[t].estado->index] = 1;
                    }
                }
            }
        }
        
        // Compute epsilon closure for the next step and update our current states
        epsilon_closure(next_set);
        memcpy(current_set, next_set, sizeof(int) * MAX_STATES);
    }
    
    // 3. If our final active state set contains the NFA's acceptance state, we accept.
    if(current_set[nfa->estadoFinal->index]) {
        return ACEITA;
    }
    return REJEITA;
}

int main() {
    Automato * automato;
    char expressao[200], palavra[1000];
    int p, i;
    
    while (fgets(expressao, 200, stdin) != NULL) {
        int j;
        for (j = 0; expressao[j]; j++) {
            if (expressao[j] == '\n') expressao[j] = '\0';
        }
        
        cont = 0;
        memset(all_states, 0, sizeof(all_states)); // Reset global states
        automato = criarAutomato(expressao, 0, PARENTESES);
        
        char linha[100];
        if(!fgets(linha, 200, stdin)) break;
        sscanf(linha, "%d\n", &p);
        
        for(i = 0; i < p; i++) {
            if(!fgets(palavra, 200, stdin)) break;
            for (j = 0; palavra[j]; j++) {
                if (palavra[j] == '\n') palavra[j] = '\0';
            }
            
            // Execute using the new deterministic subset simulator
            if(executarDFA(automato, palavra) == ACEITA) {
                printf("Y\n");
            } else {
                printf("N\n");
            }
        }
        printf("\n");
    }
    return 0;
}