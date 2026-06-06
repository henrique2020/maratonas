// Problema: 1037 - Intervalo | Resposta: Accepted
// Linguagem: Java 19 [+2s]   | Tempo: 0.017

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String mensagem = "";
        float num = Float.parseFloat(br.readLine());
        if(num < 0 || num > 100) mensagem = "Fora de intervalo";
        else if(num <= 25) mensagem = "Intervalo [0,25]";
        else if(num <= 50) mensagem = "Intervalo (25,50]";
        else if(num <= 75) mensagem = "Intervalo (50,75]";
        else mensagem = "Intervalo (75,100]";
        
        System.out.println(mensagem);
    }
}