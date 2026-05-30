// Problema: 1019 - Conversão de Tempo | Resposta: Accepted
// Linguagem: Java 19 [+2s]            | Tempo: 0.096s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	public static int[] divisor(int valor, int divisor) {
		int n = (valor / divisor),
			r = valor % divisor;
		return new int[] { n, r };
	}

    public static void main(String[] args) throws IOException {
	    BufferedReader in = 
	    	new BufferedReader(new InputStreamReader(System.in));
	    
	    int h, m, s = Integer.parseInt(in.readLine());
	    int[] ret;
	    
	    ret = divisor(s, 60*60);
	    h = ret[0]; s = ret[1];
	    ret = divisor(s, 60);
	    m = ret[0]; s = ret[1];
	    
	    System.out.printf("%d:%d:%d\n", h, m, s);
    }
}