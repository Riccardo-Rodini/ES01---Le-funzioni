/*****************************************************************************************
* \mainpage    Scrivere una funzione chiamata "mcd" che prende in input due numeri       * 
*              interi e restituisce il loro massimo comune divisore                      *
*              utilizzando l'algoritmo di Euclide.                                       *
*                                                                                        *
*  @brief    trovare l'mcd dei due numeri                                                *
*                                                                                        *
*  @author    Rodini Riccardo                                                            *
*                                                                                        *
*  @date     11/01/2023                                                                  *
*                                                                                        *
*****************************************************************************************/

#include<stdio.h>


int mcd(int,int);


int main()

{
	int r,num1,num2;
	
	printf("inserisci valore primo intero\t");
	scanf("%d",&num1);
	printf("inserisci valore secondo intero\t");
	scanf("%d",&num2);
	
	r=mcd(num1,num2);
	
	printf("il massimo comune divisore e' %d",r);
	
}

int mcd(int a,int b)
{
	int resto;
	
	while(b!=0)
	{
		resto=a%b;
		a=b;
		b=resto;
	}
	return a;
}
