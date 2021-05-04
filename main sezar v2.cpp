#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	
	char Text[29]=("meet me after the toga party") , EncryptText[29] , DecryptText[28];
	int Key=0 , i=0;
	char c;
/*	
	int a= strlen(Text);
		printf("strlen: %d",a);

*/	
	printf("Please Enter Key: ");
	scanf("%d", &Key);
	
	while(i < strlen(Text)){
		
		c = Text[i];
		EncryptText[i]=(char)(((int)c)+Key);
		
		i++;		
	}
	//DECODE:tüm anahtar deðerlerini girerek olasý tüm sonuçlarý bize vericek(bu kýsým pek düzgün çalýþmadý)

	 while(i < strlen(Text)){
	 	
	 c = Text[i]; 	
	 DecryptText[i]=(char)(((int)c)+Key);	
	 	
	 printf("þifresi çözülmüþ metin: %s ",DecryptText);
	 
	 
	 i++;	
	 
}
	    printf("sifreli metin: %s",EncryptText);
        
        return 0;	
	
}

