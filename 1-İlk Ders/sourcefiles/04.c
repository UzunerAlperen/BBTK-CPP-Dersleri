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
	int x = 10;//int'e tan�ml� de�i�kenleri, haf�zada tam say� olarak tutar.
	float y = 8.98;//float'a tan�ml� de�i�kenleri, haf�zada kesirli say� olarak tutar.
	double z = 2.58;/*doubla'a tan�ml� de�i�kenleri, haf�zada kesirli say� olarak tutar. Float'tan fark� virg�lden sonra daha b�y�k say�lar� tutabilir.
					RAM'i �i�irmemek amac�yla ihtiya� duyuldu�unda kullan�lmas� �nerilir.*/	
	char t = 'A';//char'a tan�ml� de�i�kenleri, haf�zada B�R KARAKTER olarak tutar.
	printf("%d, %f, %f, %c\n", x, y, z, t);//Ekrana BEN�M �STED���M SIRAYA ba�l� kalarak x, y, z ve t de�erlerini bast�r�r.

	system("pause");
}