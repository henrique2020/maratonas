// Problema: 1014 - Consumo | Resposta: Accepted
// Linguagem: Java 19 [+2s] | Tempo: 0.105s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	static float pegaFloat(BufferedReader in) throws IOException {
		return Float.parseFloat(in.readLine());
	}

    public static void main(String[] args) throws IOException {
    	InputStreamReader ir = new InputStreamReader(System.in);
	    BufferedReader in = new BufferedReader(ir);
	    
	    float 
	    	distancia = pegaFloat(in),
	    	combustivel = pegaFloat(in);

        System.out.printf("%.3f km/l\n", distancia/combustivel);
        
        in.close();
        ir.close();
    }
}