#include <stdio.h>
#include <math.h>



float fX(float x){
	return pow(x,3) - 9 * x + 3;
}

float Sec(float x1, float x2){
	return (x1*fX(x2) - x2 * fX(x1)) /(fX(x2)- fX(x1));
}

int main (){
	float EPSILON = 0.0005;
	
	int maxIter, i =1;
	float x1,x2,x;
	
	printf("Entre com o valor de X1 e X2\n");
	scanf("%f%f", &x1,&x2);
	printf("Entre com o MaxInter");
	scanf("%d", &maxIter);
	
	x = Sec(x1,x2);
	
	do {
		x1 = x2;
		x2 = x;
		
		printf("iter=%d raiz=%f\n", i,x);
		x = Sec(x1,x2);
		
		if(fabs(x-x2) < EPSILON){
			printf("Raiz Final = %f \n Total Iter=%d", x,i+1);
			return 0;
		}
		
		i++;
	}while(i <=maxIter);
	printf("Raiz final = %f", x);
}
