#include <stdio.h>
float impostoSobreSalario(float salario, float salario_total)
{
  
  if ( salario <= 5000)
  {
    return salario_total = salario;
  }
  
  else if ( salario <= 7500)
  {
    salario_total = salario - (salario * 0.12);
  }
  
  else if ( salario <= 10000)
  {
    salario_total = salario - (salario * 0.19);
  }
  
  else if ( salario <= 15000)
  {
    salario_total = salario - (salario * 0.24);
  }
  
}

int main ()
{
  
  float salarioA, salario_totalA;


  printf("Digite seu salario: ");
  scanf("%f", &salarioA);

  if (impostoSobreSalario(salarioA, salario_totalA))
  {
    printf("Salario Final %.2f",impostoSobreSalario(salarioA, salario_totalA));
  }
  
  else 
  {
    printf("Valor Excedente");
  }

  return 0;
}
