#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fx(float x){
	
	return  pow(x,3) - 9 * x +3;
}

float bissec(float a, float b ,float tol){
	
	float c, fa, fb, fc ;
	fa = fx(a);
	fb = fx(b);
	while(fabs(b - a) > tol){
		c = (a +b) / 2;
		fc = fx(c);
		
		if(fa * fc < 0){
			b =c;
			fb = fc;
		}else {
			a =c;
			fa = fc;
		}
	
	}
	c = (a+b) /2;
		
	return c;
}

int main (){
	float a,b,tol,c;
	
	printf("Entre com o A e B");
	scanf("%f%f",&a, &b);
	printf("Entre com o erro");
	scanf("%f", &tol);
	
	if(fx(a) * fx(b) > 0){
		printf("O intervalo nao é aplicavel\n");
	}
	
	c = bissec(a,b,tol);
	printf("Raiz ~= %f",c);
}


