#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char c;
	FILE*fp=NULL;
	char str[30];
	
	fp=fopen("sample.txt","r");
	
	while(fgets(str,30,fp)!=NULL)
		printf("%s",str);
		
	fclose(fp);
	
	return 0;
}
