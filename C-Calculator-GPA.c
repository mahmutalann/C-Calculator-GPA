#include <stdio.h>
setlocale(LC_ALL,"Turkish");	

int main()
{
	int vize, final;
	float ortalama;
	float derece;
	printf("Vize notunuzu giriniz: ");
	scanf("%d",&vize);
	printf("Final notunuzu giriniz: ");
	scanf("%d",&final);
	printf("Derece notunuzu giriniz: ");
	scanf("%d",&derece);
	ortalama = ( vize * 3/10 + final * 7/10);
	if ( ortalama >=90 )
	{
		printf("Harf notunuz AA ve Ders ortalamaniz : %.2f", ortalama);
	}
	else if ( ortalama < 90 && ortalama >=85 )
	{
		printf("Harf notunuz BA ve Ders ortalamaniz : %.2f", ortalama);
	}
		else if ( ortalama < 85 && ortalama >=75 )
	{
		printf("Harf notunuz BB ve Ders ortalamaniz : %.2f", ortalama);
	}
		else if ( ortalama < 75 && ortalama >=65 )
	{
		printf("Harf notunuz BC ve Ders ortalamaniz : %.2f", ortalama);
	}
		else if ( ortalama < 65 && ortalama >=60 )
	{
		printf("Dersten bute kaldiniz. Harf notunuz DD ve Ders ortalamaniz : %.2f\n", ortalama);
		    if( derece < 2.5 )
		{
			printf("Dereceniz dusuk oldugu için gelecek yil tekrar almalisiniz... ");
		}
	}
		else if ( ortalama < 60 && ortalama >=55 )
	{
		printf("Derstem bute kaldiniz. Harf notunuz FF ve Ders ortalamanız : %.2f\n", ortalama);
	        if( derece < 2.5 )
		{
			printf("Dereceniz dusuk oldugu icin gelecek yil tekrar almalisiniz... ");
	    }
	}
	else
	{
		printf("Dersten kaldiniz!");
	}
	return 0;
}
