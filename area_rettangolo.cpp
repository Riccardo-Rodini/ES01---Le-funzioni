/*****************************************************************************************
* \mainpage   Scrivere una funzione chiamata "area_rettangolo" che prende in input       *
*             la base e l'altezza di un rettangolo e restituisce l'area.                 *
*                                                                                        *
*                                                                                        *             
*  @brief    trovare l'area di un rettangolo                                             *
*                                                                                        *
*  @author    Rodini Riccardo                                                            *
*                                                                                        *
*  @date     11/01/2023                                                                  *
*                                                                                        *
*****************************************************************************************/

#include<stdio.h>

int area_rettangolo(int,int);

int main()
{
	int num1,num2,ris;
	printf("inserisci primo valore");
	scanf("%d",&num1);
	printf("inserisci secondo valore");
	scanf("%d",&num2);
	ris=area_rettangolo(num1,num2);
	printf("l'area del rettangolo e' %d",ris);
}
int area_rettangolo(int x,int y)
{
	int ris;
	ris= x * y;
	return ris;
}
