/**
*@author	: Muzaffer Arda Uslu | email-> usluarda58@gmail.com
*@date		: 30 Ekim 2019
*			Ye�ille yaz�l� yerler yorum sat�rlar�d�r. A��klama yapmak i�in eklenmi�tir, kodunuza bu k�s�mlar� yazman�za gerek yoktur.
*
*
*@brief		: �� i�e d�ng� kullanarak y�ld�zlardan i�i bo� ��gen �ekli bast�ran kod par�ac���.
			*
	-->		* *
			*  *
			* * *
*/
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j || j == 0 || i == 5)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	system("pause");
}