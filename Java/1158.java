// Problema: 1158 - Soma de Ímpares Consecutivos III | Resposta: Accepted
// Linguagem: Java 19 [+2s]                          | Tempo: 0.206s

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
	
	static int[] pegaArrayInt(BufferedReader br) throws IOException {
		String[] str = br.readLine().split(" ");
		int n1 = Integer.parseInt(str[0]),
			n2 = Integer.parseInt(str[1]);
		
		return new int[] {n1, n2};
	}
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int rep = Integer.parseInt(br.readLine());

        while(rep-- > 0) {
        	int soma = 0;
        	int[] entrada = pegaArrayInt(br);
        	int ini = entrada[0],
        		qtde = entrada[1];
        	
        	if(ini%2 == 0) ini++;
        	for(int i = 0; i < qtde; ini+=2, i++) soma += ini; 
        	
        	System.out.println(soma);
        }
    }
}