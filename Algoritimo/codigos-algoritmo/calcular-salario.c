#include <stdio.h>

int main(int argc, char const *argv[]){

    float sal_bruto, inss, ir, sal_liquido;


    
    printf("Informe o salario bruto: ");
    scanf("%f", &sal_bruto);
    if (sal_bruto <= 1693.72)
    {
        inss = sal_bruto * 0.08;
    }
    else
    if(sal_bruto >= 1693.73 && sal_bruto <= 28122.90)
    {
        inss = sal_bruto * 0.09;
    }
    else
    if(sal_bruto >= 2822.90 && sal_bruto <= 5646.80)
    {
        inss = sal_bruto * 0.11;
    }

    

    sal_liquido= inss - sal_bruto;

    printf("\n Desconto INSS: %f", inss);
    printf("\n Salario liquido: %2.f", sal_liquido);

    return 0;
    
    
}