// Problema: 1015 - Distância Entre Dois Pontos | Resposta: Accepted
// Linguagem: Java 19 [+2s]                     | Tempo: 0.104s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	
	public static class Ponto {
		public float x;
		public float y;
		
		public Ponto(String x, String y) {
			this.x = Float.parseFloat(x);
			this.y = Float.parseFloat(y);
		}
	}
	
	public static Ponto getPonto(BufferedReader in) throws IOException {
		String[] linha = in.readLine().split(" ");
		return new Ponto(linha[0], linha[1]);
	}

    public static void main(String[] args) throws IOException {
    	InputStreamReader ir = new InputStreamReader(System.in);
	    BufferedReader in = new BufferedReader(ir);
	    
		Ponto 
			P1 = getPonto(in),
			P2 = getPonto(in);
		
		float distancia = (float) Math.sqrt(
			Math.pow(P2.x - P1.x, 2) + Math.pow(P2.y - P1.y, 2)
		);
		
		System.out.printf("%.4f\n", distancia);
        
        in.close();
        ir.close();
    }
}