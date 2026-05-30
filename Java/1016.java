// Problema: 1016 - Distância | Resposta: Accepted
// Linguagem: Java 19 [+2s]   | Tempo: 0.101s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
    	InputStreamReader ir = new InputStreamReader(System.in);
	    BufferedReader in = new BufferedReader(ir);

        System.out.printf("%d minutos\n", 2 * Integer.parseInt(in.readLine()));
        
        in.close();
        ir.close();
    }
}