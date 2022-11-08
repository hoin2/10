#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char c;
	FILE*fp=NULL;
	
	fp=fopen("sample.txt","r");
	
	if(fp==NULL)
		printf("파일을 못열음\n");
	
	c=fgetc(fp);
	
	while((c=fgetc(fp))!=EOF)
		putchar(c);
		
	fclose(fp);
	
	return 0;
}
