#include <stdio.h>
int f_x();

int f_i();

void main()
{
    int x, i, aux;
    
    x = f_x();
    
    i = f_i();
    
    aux = x;
    
    x = i;
    
    i = aux;
    
    printf("Aquest són els valors intercaviats %d, %d", x , i);
    
}

int f_x()
{
    int x;
    
    printf("Introdueix un nombre: \n");
    
    scanf("%d", &x);
    
    return x;
}

int f_i()
{
    int i;

    printf("Introdueix un altre valor: \n");
    
    scanf("%d", &i);
    
    return i;
}
