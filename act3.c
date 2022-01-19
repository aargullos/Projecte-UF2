#include <stdio.h>

int bin();

void main(){

    int i;

    i = bin();
    
    printf("Aquest es el numero en binari: %d",i);


}

int bin(){

	int aux = 1, x = 1,bin = 0, num;
	
    printf("Introdueix un nombre : ");
    
    scanf("%d",&num);
	
	while(num != 0){
	    
		aux = aux % 2;
		
		num = num / 2;
		
		bin = bin + aux * x;
		
		x = x * 10;
		
	}
	
	return bin;

}
