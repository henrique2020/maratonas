// Problema: 1017 - Gasto de Combustível | Resposta: Accepted
// Linguagem: Java 19 [+2s]              | Tempo: 0.089s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	static int pegaInt(BufferedReader in) throws IOException {
		return Integer.parseInt(in.readLine());
	}
	
	static double consumo = 12.0;

    public static void main(String[] args) throws IOException {
    	InputStreamReader ir = new InputStreamReader(System.in);
	    BufferedReader in = new BufferedReader(ir);
	    
	    int 
	    	tempo = pegaInt(in),
	    	velocidade = pegaInt(in);

        System.out.printf("%.3f\n", (tempo*velocidade)/consumo);
        
        in.close();
        ir.close();
    }
}