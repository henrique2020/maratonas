// Problema: 2413 - Busca na Internet | Resposta: Accepted
// Linguagem: Java 19 [+2s]           | Tempo: 0.032s

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println(Integer.parseInt(br.readLine()) * 4);
    }
}