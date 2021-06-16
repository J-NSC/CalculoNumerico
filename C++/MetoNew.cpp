#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//x^3-9x+3;


float f(float x);
float df(float x);

int main(){
	
	float err, x0, *iter;
	int i , numIter;
	
	err = 0.0005;
	numIter = 10;
	x0 = 0.5;

//	printf("%f\n %d\n %f\n",err,numIter, x0);
	iter =(float *) malloc(sizeof(float) * numIter);
	
	
	
	
	
	iter[0] = x0;
	i = 0;
	
	
//	printf("inter %f", iter[i]);
//	printf("%f", err);
	while(abs(f(iter[i])) > err){
		
		
		if(i > numIter){
			printf("nao convergiu %d itera�oes\n", numIter);
		}
		
		iter[i+1]= iter[i] - f(iter[i])/df(iter[i]);
		i++;
		printf(" I %d\n",i);
	}
	
	
	printf("x~=%f\n",iter[i]);
	printf("\nForam feitas %d iteracoes .\n", i);

}





float f(float x){
	return pow(x,3) - 9*x +3;
}

float df(float x){
	return 3*pow(x,2) - 9;
}

