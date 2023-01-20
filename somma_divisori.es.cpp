/*****************************************************************************************
* \mainpage    Scrivere una funzione chiamata "somma_divisori" che prende in input un    *
*              numero intero e restituisce la somma dei suoi divisori.                   *
*                                                                                        *
*                                                                                        *             
*  @brief    trovare la somma dei divisori                                               *
*                                                                                        *
*  @author    Rodini Riccardo                                                            *
*                                                                                        *
*  @date     11/01/2023                                                                  *
*                                                                                        *
*****************************************************************************************/

#include<stdio.h>

int somma_divisori(int);

int main()
{
    int num1,ris;
    printf("inserisci il numero da cui verranno sommati i divisori ");
    scanf("%d",&num1);
    ris=somma_divisori(num1);
    printf("la somma e %d",ris);
    return 0;
}
int somma_divisori(int x)
{
	int somma,cont;
	for(cont=1;cont<=x;cont++)
	    if(x%cont==0)
	    somma=somma+cont;
	    return somma;
}
