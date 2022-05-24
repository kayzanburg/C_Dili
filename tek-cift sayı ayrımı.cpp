#include<stdio.h>

int main (){
	
	int sayi1;
	char islem;
	int sonuc=0;
	
	printf("Bir sayi giriniz = ");
	scanf("%d",&sayi1);
	
	sonuc=sayi1%2;
	
	if (sonuc==0){
		printf("sayiniz cifttir.");
		
	}
	
	else if(sonuc==1){
		printf("sayiniz tektir.");
		
	}
	
	
	
	return 0;
	
}
