#include <stdio.h>


int main(){
	
	int sayi1;
	int sonuc=0;
	char islem;


printf("karenin bir kenarinin uzunlugunu giriniz\n");
scanf(" %d",&sayi1);
printf("neyi bulmak istersiniz\n");
printf("alan(A)\tcevre(C)\n");

/* SCANF DE YAZARKEN '%' NÝN BAÞINA BÝR BOÞLUK VERMEK GEREKÝYOR AKSÝ TAKTÝRDE ÇALIÞMAZ.*/

	if(scanf(" %c",&islem);){
		sonuc=sayi1*sayi1;
		printf("alaniniz = %d", sonuc);
	}
	
	
	else if (islem=='C'){
		sonuc=sayi1*4;
		printf("cevreniz = %d",sonuc);
	
	}
	
	
	
	return 0;	
	
}
