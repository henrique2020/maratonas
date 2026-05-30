// Problema: 1011 - Volume da Esfera | Resposta: Accepted
// Linguagem: Java 19 [+2s]          | Tempo: 0.091s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
		
	static double PI = 3.14159;

    public static void main(String[] args) throws IOException {
    	InputStreamReader ir = new InputStreamReader(System.in);
	    BufferedReader in = new BufferedReader(ir);
	    
	    double raio = Double.parseDouble(in.readLine());
        System.out.printf("VOLUME = %.3f\n", (4/3.0) * PI * Math.pow(raio, 3));
        
        in.close();
        ir.close();
    }
}