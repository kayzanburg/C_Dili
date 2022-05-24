#include <stdio.h>

int main(){
int r;
char islem;
int sonuc=0;

printf("dairenin yaricapini giriniz.\n");
scanf(" %d",&r);
printf("asagidaki islemlerden hangisi bulmak istersiniz\t\tpi degeri = '3' alinmistir.\n");
printf("alan(A)\tcevre(C)\n");
scanf(" %c",&islem);
	
	if (islem=='A'){
		sonuc=3*r*r;
		
		printf("alaniniz= %d",sonuc);
			
	}
	else if (islem=='C'){
		sonuc=2*3*r;
		
		printf("cevreniz = %d",sonuc);
		
	
	}
	
	
	
	
	
	
	
	return 0;
	
}








