// Problema: 2423 - Receita de Bolo | Resposta: Accepted
// Linguagem: Java 19 [+2s]         | Tempo: 0.035s

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
	
	static int converteInt(String arg) {
		return Integer.parseInt(arg);
	}
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] linha = br.readLine().split(" ");
        
        int[] quantidades = {2, 3, 5};
        int min = -1, temp;
        for(int i = 0; i < 3; i++) {
        	temp = converteInt(linha[i]) / quantidades[i];
        	if(min > temp || min == -1) { min = temp; }
        }
     
       System.out.println(min);
    }
}