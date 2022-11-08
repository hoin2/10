#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i=0;
	char src[100];
	FILE*fp;
	
	do{
		printf("input a word:");
		gets(src);
		
		fp=fopen("sample.txt","a");	
		fprintf(fp,"%s\n",src);
		fclose(fp);
		i++;
	}
	while(i<3);
	
	printf("\n");
	
	return 0;
}
