// Problema: 1290 - Caixas Muito Especiais | Resposta: Accepted
// Linguagem: Java 19 [+2s]                | Tempo: 0.798s

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class Main {
    
    // O record gera equals() e hashCode() automaticamente, essencial para usar no HashMap
    record Caixa(int x, int y, int z) {
        
        public Caixa(int x, int y, int z) {
            int[] dim = {x, y, z};
            Arrays.sort(dim);
            this.x = dim[0];
            this.y = dim[1];
            this.z = dim[2];
        }

        public boolean cabe(Caixa item) {
            return item.x <= this.x && item.y <= this.y && item.z <= this.z;
        }

        public int volume() {
            return x * y * z;
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String linha;

        while ((linha = br.readLine()) != null) {
            if (linha.trim().isEmpty()) continue;
            
            StringTokenizer st = new StringTokenizer(linha);
            int n = Integer.parseInt(st.nextToken());
            int m = Integer.parseInt(st.nextToken());

            if (n == 0) break;

            st = new StringTokenizer(br.readLine());
            Caixa item = new Caixa(
                Integer.parseInt(st.nextToken()),
                Integer.parseInt(st.nextToken()),
                Integer.parseInt(st.nextToken())
            );
            
            int volumeItem = item.volume();
            
            Map<Caixa, Integer> estoque = new HashMap<>();
            for (int i = 0; i < m; i++) {
                st = new StringTokenizer(br.readLine());
                Caixa c = new Caixa(
                    Integer.parseInt(st.nextToken()),
                    Integer.parseInt(st.nextToken()),
                    Integer.parseInt(st.nextToken())
                );

                // Só adicionamos ao estoque se o item couber nela
                if (c.cabe(item)) {
                    estoque.put(c, estoque.getOrDefault(c, 0) + 1);
                }
            }

            int menorEspacoVazio = Integer.MAX_VALUE;
            boolean encontrou = false;

            for (Map.Entry<Caixa, Integer> entry : estoque.entrySet()) {
                if (entry.getValue() >= n) {
                    int espacoVazio = entry.getKey().volume() - volumeItem;
                    if (espacoVazio < menorEspacoVazio) {
                        menorEspacoVazio = espacoVazio;
                        encontrou = true;
                    }
                }
            }

            if (encontrou) {
                System.out.println(menorEspacoVazio);
            } else {
                System.out.println("impossible");
            }
        }
    }
}
