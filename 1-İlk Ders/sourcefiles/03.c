/**
*@author	: Muzaffer Arda Uslu | email-> usluarda58@gmail.com
*@date		: 23 Ekim 2019
*			Ye�ille yaz�l� yerler yorum sat�rlar�d�r. A��klama yapmak i�in eklenmi�tir, kodunuza bu k�s�mlar� yazman�za gerek yoktur.
*/
/*
		printf()	 scanf_s()||scanf()
	   -----------  --------------------
   int	->  %d				%d	
   float->	%f				%f
   double-> %f				%lf
*/
#include<stdio.h>
int main()
{
	int x;
	printf("x degerini giriniz: ");
	scanf_s("%d", &x);//Scanf() fonksiyonu kullan�c�dan girdi(input) almam�z� sa�lar.
	printf("x degeri -> %d\n", x);/*x de�erini ekrana yazzd�rmak i�in printf() fonksiyonuna virg�l yard�m�yla 
								bir parametre daha ekleriz. */
	system("pause");
}