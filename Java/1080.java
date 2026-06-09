// Problema: 1080 - Maior e Posição | Resposta: Accepted
// Linguagem: Java 19 [+2s]         | Tempo: 0.115s

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int num, maior = -1, pos = 0;
        for(int i = 0; i < 100; i++) {
        	num = Integer.parseInt(br.readLine());
        	if(num > maior) {
        		maior = num;
        		pos = i;
        	}
        }
        
        pos++;
        System.out.println(maior);
        System.out.println(pos);
    }
}