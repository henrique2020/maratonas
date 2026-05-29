// Problema: 1013 - O Maior | Resposta: Accepted
// Linguagem: Java 19 [+2s] | Tempo: 0.302s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	public static int calculo(int n1, int n2) {
		return (n1 + n2 + Math.abs(n1-n2));
	}

    public static void main(String[] args) throws IOException {
    	InputStreamReader ir = new InputStreamReader(System.in);
	    BufferedReader in = new BufferedReader(ir);
	    
	    String[] linha = in.readLine().split(" ");
		int 
			a = Integer.parseInt(linha[0]),
			b = Integer.parseInt(linha[1]),
			c = Integer.parseInt(linha[2]),
			maior;
		
		maior = (int) (calculo(a, b) / 2);
		maior = (int) (calculo(maior, c) / 2);
		
		System.out.printf("%d eh o maior\n", maior);
        
        in.close();
        ir.close();
    }
}