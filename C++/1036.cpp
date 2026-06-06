// Problema: 1036 - Fórmula de Bhaskara | Resposta: Accepted
// Linguagem: C20++ [+0s]               | Tempo: 0.000s

#include <iostream>
#include <cmath>

int main() {
  double a, b, c, r1, r2;
  std::cin >> a >> b >> c;

  double delta = (b*b)-(4*a*c);
  if(a == 0 || delta < 0){
    std::cout << "Impossivel calcular" << std::endl;
  }
  else{
    delta = std::sqrt(delta);
    r1 = (-b+delta)/(2*a);
    r2 = (-b-delta)/(2*a);
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
  }

  return 0;
}