#include <stdio.h>
#include <stdlib.h>

///Eroare corectata la linia 6
///Nu iesea din functie
int function(int x){
      x=x-2;
    return x;
}

int main(){
	int a=30, i=0;

	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;
}

