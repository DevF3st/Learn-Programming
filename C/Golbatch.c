#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#define M_E 2.7182818284

short int funcPrime(int NUM);
int funcGoldbach(int num);

void main(){
	int varA;
	printf("|  Type a number to execute Goldbach function. |\n");
    scanf("%d", &varA);
    funcGoldbach(varA);
}

short int funcPrime(int NUM){
	int i, raiz = sqrt(NUM) + 1;
		if(NUM%2 == 0 && NUM != 2 || NUM == 1)
			return 0;
		else
		for (i = 3; i<raiz; i+=2){
			if (NUM%i == 0)
			return 0;
		}
		return 1;
}

int funcGoldbach(int num){
	int i,aux;
	if (num > 1000)
		return 0;
	system("cls");
	printf("|==========================================================================|\n");
	printf("| Current number: %4d                                                       |\n", num);
	if (num <=1000)
		for(i = 1; i < num/2 +1; i+=1)
			if(funcPrime(i))
				for(aux = 2; aux<num; aux+=1)
					if(funcPrime(aux))
						if(i + aux == num){
					    	printf("| %3d + %3d = %4d                                                         |\n",i, aux, num);
						}
	printf("|==========================================================================|\n");
	system("pause");			
	return funcGoldbach(num + 2);	
}