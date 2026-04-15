// Problema: 1759 - Ho Ho Ho | Resposta: Accepted
// Linguagem: Java 19 [+2s]  | Tempo: 2.039s

import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        String ho = "Ho";
        int rep = sc.nextInt();

        for (int i = 1; i < rep; i++) {
            System.out.print(ho + " ");
        }
        
        System.out.println(ho + "!");

        sc.close();
    }
}
