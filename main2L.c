#include <stdio.h>
#include <stdlib.h>


int main() {
	int n,y=1,i,j,k,x;
	printf("Entrer a nombre : ");
	scanf("%d",&n);
	if (n<=0){
        printf("Invalid number!!");
	}else {
	x=n-1;
	for(i=0;i<n;i++){
		for(j=0;j<x;j++){
			printf(" ");
		}
		for(k=0;k<y;k++){
			printf("*");
		}
		printf("\n");
		x--;
		y+=2;
	}
	}
	return 0;
}
