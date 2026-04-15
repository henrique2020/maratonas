// Problema: 1759 - Ho Ho Ho | Resposta: Accepted
// Linguagem: Java 19 [+2s]  | Tempo: 0.066s

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int rep = Integer.parseInt(br.readLine());

        StringBuilder sb = new StringBuilder();
        for (int i = 1; i < rep; i++) { sb.append("Ho "); }
        sb.append("Ho!");

        System.out.println(sb.toString());
        
        br.close();
    }
}
