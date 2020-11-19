#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char filename[20];
	char target[20];
	char str[80];
	char *res;
	FILE *fp;
	int n;
	
	printf("original file name : ");
	scanf("%s", filename);
	printf("word to find : ");
	scanf("%s", target);
	
	fp = fopen(filename, "r");
	n = strlen(target);
	
	while (1) {
		res = fgets(str, sizeof(str), fp);
		if (res == NULL) {
			break;
		}
		else if (strncmp(res, target, n) == 0) {
			printf("Find a word \"%s\"\n", target);
			printf("Search done!\n");
			break;
		}
	}
	
	fclose(fp);	
	
	return 0;
}
