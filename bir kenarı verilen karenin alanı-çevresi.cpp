#include <stdio.h>


int main(){
	
	int sayi1;
	int sonuc=0;
	char islem;


printf("karenin bir kenarinin uzunlugunu giriniz\n");
scanf(" %d",&sayi1);
printf("neyi bulmak istersiniz\n");
printf("alan(A)\tcevre(C)\n");

/* SCANF DE YAZARKEN '%' N�N BA�INA B�R BO�LUK VERMEK GEREK�YOR AKS� TAKT�RDE �ALI�MAZ.*/

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
