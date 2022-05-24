#include <stdio.h>
#include <unistd.h>

int main(){
	int sayi1;
	int sayi5;
	float sonuc=0;
	char islem;
 printf("hosgeldiniz\n");
 printf("birinci sayi giriniz:");
 scanf("%d",&sayi1);
 printf("ikinci sayiyi giriniz:");
 scanf("%d",&sayi5);
 printf("hangi islemi yapmak istersiniz\n");
 printf("+\t-\t*\t/\nislem:");
 scanf(" %c",&islem);
	 if(islem=='+'){
	 	sonuc= sayi1 + sayi5;
	 }
 	 else if(islem=='-'){
 		sonuc=sayi1-sayi5;
	 } 
	 else if(islem=='*'){		
	   sonuc=sayi1*sayi5;
	 }
	 else if(islem=='/'){
	   sonuc=(float)sayi1/sayi5;	
	 }
	 sleep(1);
     printf("sonuc= %.5f",sonuc);	
 

	return 0;
	
}
   
