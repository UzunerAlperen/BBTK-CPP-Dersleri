/**
*@author	: Muzaffer Arda Uslu | email-> usluarda58@gmail.com
*@date		: 23 Ekim 2019
*			Ye�ille yaz�l� yerler yorum sat�rlar�d�r. A��klama yapmak i�in eklenmi�tir, kodunuza bu k�s�mlar� yazman�za gerek yoktur.
*/
/*
		x + y -> toplama i�lemi.
		x - y -> ��karma i�lemi.
		x / y -> b�lme i�lemi.
		x * y -> �arpma i�lemi.
		x % y -> mod�l i�lemi.
*/
#include<stdio.h>
int main()
{
	int x = 5, y = 6, z = 7, t = 8, sonuc;

	sonuc = x + y;//Sa�da yap�lan i�lem soldaki sonuc de�i�kenine atand�.
	printf("%d\n", sonuc);

	sonuc = y - z;//Sa�da yap�lan i�lem soldaki sonuc de�i�kenine atand�.
	printf("%d\n", sonuc);

	sonuc = t / 2;//Sa�da yap�lan i�lem soldaki sonuc de�i�kenine atand�.
	printf("%d\n", sonuc);

	sonuc = z * t;//Sa�da yap�lan i�lem soldaki sonuc de�i�kenine atand�.
	printf("%d\n", sonuc);

	sonuc = t % y;//Sa�da yap�lan i�lem soldaki sonuc de�i�kenine atand�. En son haf�zada, program �al��t��� s�rece, t % y (yani 2) kald�.
	printf("%d\n", sonuc);

	system("pause");
}