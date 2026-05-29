// Problema: 1013 - O Maior | Resposta: Accepted
// Linguagem: Java 19 [+2s] | Tempo: 0.096s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static int maior(int a, int b) {
        return (a + b + Math.abs(a - b)) / 2;
    }

    public static void main(String[] args) throws IOException {

        BufferedReader in =
            new BufferedReader(new InputStreamReader(System.in));

        String[] linha = in.readLine().split(" ");
        int a = Integer.parseInt(linha[0]);
        int b = Integer.parseInt(linha[1]);
        int c = Integer.parseInt(linha[2]);

        int maior = maior(maior(a, b), c);

        System.out.printf("%d eh o maior%n", maior);
        
        in.close();
    }
}