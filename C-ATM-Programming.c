
#include <stdio.h>
int main()
{
	int islem, tutar, bakiye = 1000;
	printf("ISLEMLER\n1:Para Cekme\n2:Para Yatirma\n3:Havale\n4:Bakiyenizi Ogrenin\n5:Kart Iade\n\n\n"); 
	printf("Isleminizi Giriniz: ");
	scanf("%d",&islem);
	switch ( islem )
	{
		case 1 :
		printf("Cekilecek Para Tutarini giriniz: ");
		scanf("%d", &tutar);
		if ( tutar > 1000)
		{
			printf("Yetersiz Bakiye");
		}
		bakiye -= tutar;
		printf("Guncel Bakiyeniz : %d", bakiye);
		break;
		
		case 2 :
		printf("Yatirilicak Para Tutarini giriniz: ");
		scanf("%d", &tutar);
		bakiye += tutar;
		printf("Guncel Bakiyeniz : %d", bakiye);
		break;
		
		case 3 :
		printf("Havale Edilecek Para Tutarini giriniz: ");
		scanf("%d", &tutar);
		if ( tutar > 1000)
		{
			printf("Yetersiz Bakiye");
		}
		bakiye -= tutar;
		printf("Guncel Bakiyeniz : %d", bakiye);
		break;	
		
		case 4 :
		printf("Guncel Bakiyeniz %d", bakiye);
		break;	
			
		case 5 :
		printf("Kartiniz Iade Islemi Yapilmaktadir. Lutfen Bekleyiniz\n Kart Iadesi Basarili Bir Sekilde Gerceklesmistir....");
		break;
		
		default : 
		printf("Hatali Bir Islem Gerceklestirdiniz... NOT 404 FOUUND");
		break;
	}
		return 0;					
	}