#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i;
	char src[100];
	FILE*fp;
	
	fp=fopen("sample.txt","w");
	
	for(i=0;i<3;i++){
		printf("input a word:");
		scanf("%s",&src);
			
		fprintf(fp,"%s\n",src);
	}
	
	fclose(fp);
	
	return 0;
}
