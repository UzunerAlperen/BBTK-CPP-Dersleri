#include<stdio.h>
//4'e tam b�l�nen y�llar art�k y�ld�r.
//100'e tam b�l�nen y�llar art�k y�l de�ildir.
//400'e tam b�l�nen y�llar art�k y�ld�r.
main() {
	int yil;
	printf("Yil girin: ");
	scanf_s("%d", &yil);
	if (yil % 400 == 0)
	{
		printf("%d artik yildir.", yil);
	}
	else if (yil % 100 == 0)
	{
		printf("%d artik yil degildir.", yil);
	}
	else if (yil % 4 == 0) 
	{
		printf("%d artik yildir.", yil);
	}
	else
	{
		printf("%d artik yil degildir.", yil);
	}
	system("pause");
}