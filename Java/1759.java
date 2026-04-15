// Problema: 1759 - Ho Ho Ho | Resposta: Accepted
// Linguagem: Java 19 [+2s]  | Tempo: 0.062s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        int rep = Integer.parseInt(
            new BufferedReader(
                new InputStreamReader(System.in)
            ).readLine()
        );

        System.out.println("Ho ".repeat(rep - 1) + "Ho!");
    }
}
