restaurante.c

#include <stdio.h>



    int main(void) {
    int area;
    printf("Digite o numero de 1 a 3 para a sua area");
    scanf("%d", &area);
    switch (area) {
    
   case 1:
    printf("area vip\n");
   break;
   case 2:
    printf("area jardim\n");
   break;
    case 3 :
    printf ("area brinquedos\n");
    break;
  
}
    

    
    return 0;
    }