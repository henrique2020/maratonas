// Problema: 1012 - Área    | Resposta: Accepted
// Linguagem: Java 19 [+2s] | Tempo: 0.092s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    static double PI = 3.14159;

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

        String[] valores = in.readLine().split(" ");
        double a = Double.parseDouble(valores[0]);
        double b = Double.parseDouble(valores[1]);
        double c = Double.parseDouble(valores[2]);

        System.out.printf("TRIANGULO: %.3f\n", ((a * c) / 2));
        System.out.printf("CIRCULO: %.3f\n", (PI * c * c));
        System.out.printf("TRAPEZIO: %.3f\n", (((a + b) * c) / 2));
        System.out.printf("QUADRADO: %.3f\n", (b * b));
        System.out.printf("RETANGULO: %.3f\n", (a * b));
    }
}