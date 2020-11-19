#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	char str[80];
	int i;
	
	fp = fopen("sample.txt", "w");
	if (fp == NULL) {
		printf("파일을 열지 못했습니다.\n");
		return 1;
	}
	else {
		printf("파일 열기에 성공하였습니다.\n");
	}
	
	for (i=0; i<3; i++) {
		printf("input a word : ");
		scanf("%s", str);
		fprintf(fp, "%s\n", str);
	}
	
	fclose(fp);
	return 0;
}
