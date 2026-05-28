// Problema: 1018 - Cédulas | Resposta: Accepted
// Linguagem: Java 19 [+2s] | Tempo: 0.097s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	public static int[] resto(int valor, int nota) {
		int 
			n = (valor / nota),
			r = valor % nota;
		return new int[] { n, r };
	}
	
	static int[] cedulas = {100, 50, 20, 10, 5, 2, 1};

    public static void main(String[] args) throws IOException {
    	InputStreamReader ir = new InputStreamReader(System.in);
	    BufferedReader in = new BufferedReader(ir);
	    
	    int valor = Integer.parseInt(in.readLine());
	    System.out.println(valor);
	    for(int cedula : cedulas) {
	    	int[] resultado = resto(valor, cedula);
	    	valor = resultado[1];
	    	System.out.printf("%d nota(s) de R$ %d,00\n", resultado[0], cedula);
	    }
        
        in.close();
        ir.close();
    }
}