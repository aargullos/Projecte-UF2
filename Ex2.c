#include <stdio.h>

int conv();

void main(){
    
     int i;

    i = conv();

}

int conv(){


    int s, min, h, aux;
    
    printf("Introdueix un numero de segons: \n");
    
    scanf("%d",&s);
    
        aux = s;
        
        aux = aux % 60;
        
        h = s/3600;
        
        min = s/60;
        
    printf("Horas = %d\n",h);
    
    printf("Minuts = %d\n",min);
    
    printf("Segons = %d\n",s);
    
    return aux,h,min;

}
