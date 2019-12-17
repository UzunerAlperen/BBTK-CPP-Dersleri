/**
*@author	: Muzaffer Arda Uslu | email-> usluarda58@gmail.com
*@date		: 23 Ekim 2019
*			Ye�ille yaz�l� yerler yorum sat�rlar�d�r. A��klama yapmak i�in eklenmi�tir, kodunuza bu k�s�mlar� yazman�za gerek yoktur.
*/
/*
	Bu kodda ilk farkl�l�k olarak math.h k�t�phanesi eklendi.
				K�T�PHANE ���NDEK� FONKS�YONLAR
			---------------------------------------
				pow() -> herhangi bir say�n�n istedi�imiz de�erdeki �ss�n� almam�z� sa�lar. ��ine iki parametre al�r.
				sqrt() -> herhangi bir say�n�n karek�k�n� almam�z� sa�lar. Tek parametre al�r, ayn� i�lem pow ile de sa�lanabilir.
				abs() -> herhangi bir say�n�n mutlak de�erini almam�z� sa�lar. Tek parametre al�r.
				ceil() -> herhangi bir kesirli say�y� bir K���K tam say�s�na yuvarlar. Tek parametre al�r.
				floor() -> herhangi bir kesirli say�y� bir B�Y�K tam say�s�na yuvarlar. Tek parametre al�r.
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x = 5, y = 3, z = -7, t = 16, sonuc;
	float q = 2.85;

	sonuc = pow(3, 4);// 3 �ss� 4'�n g�sterimidir.
	printf("%d\n", sonuc);//��kt� olarak 81 verir.

	sonuc = pow(x, 2);// x �ss� 2'nin g�sterimidir.
	printf("%d\n", sonuc);//��kt� olarak 25 verir.

	sonuc = pow(x, y);// x �ss� y'nin g�sterimidir.
	printf("%d\n", sonuc);//��kt� olarak 125 verir.

	sonuc = sqrt(64);// k�k 64'�n g�sterimidir.
	printf("%d\n", sonuc);//��kt� olarak 8 verir.

	sonuc = sqrt(t);// k�k t'nin g�sterimidir.
	printf("%d\n", sonuc);//��kt� olarak 4 verir.

	sonuc = abs(z);// |z|'nin g�sterimidir.
	printf("%d\n", sonuc);//��kt� olarak 7 verir.

	sonuc = ceil(q);// q say�s�n� bir b�y�k tam say�s�na yuvarlar.
	printf("%d\n", sonuc);//��kt� olarak 3 verir

	sonuc = floor(q);// q say�s�n� bir k���k tam say�s�na yuvarlar.
	printf("%d\n", sonuc);//��kt� olarak 2 verir


	system("pause");
}