// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int horas=0;
     int minutos=0;
   
    printf("quantas horas foram trabalhadas? ");
     scanf("%d", &horas);
  
    printf("quantos minutos foram trabalhados?");
      scanf("%d", &minutos);
    float conta= (horas*60)+minutos;
    if( conta >= 480) {
    int resto = (conta - 480);
      float divisao = (resto / 60);
    float divisao2 = (resto % 60);
    printf("Adicionamos %.0f horas e %.0f minutos no seu banco de horas", divisao, divisao2);
    }else{
        int resto = (conta - 480);
        float divisao = (resto / 60)*(-1);
        float divisao2 = (resto % 60)*(-1);
        printf("Removemos %.0f horas e %.0f minutos no seu banco de horas", divisao, divisao2);
    }
}