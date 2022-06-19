#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

char* fprintname(char *name)
{
	return name;
}
int fprintline(char *name)
{

	FILE *fp;
	char buffer[1025];
	int lineCnt = 0;
	char c;
	if ((fp = fopen(name,  "rb")) != NULL)
	{
		while((c = fgetc(fp)) > 0)
		{	
			if (c == '\n')
			lineCnt++;
		}
	}

	fclose(fp);
	return lineCnt;
}
char* fprintstring(char *name, char* s, char* buffers)
{
	FILE *fp;
	char buffer[1025];
	int lineCnt = 0;
	char c;
	if ((fp = fopen(name,  "rb")) != NULL)
	{
		while(fgets(buffer, 1024, fp) > 0){
			
			char* str = strtok(buffer, s);
			//str = strtok(0, s);
			if(str != 0)
			{
				printf("%s", str);

				strcpy(buffers, str);
				printf("%s", str);
				break;
			}
		}
	}
}
int main(void)
{
	FILE *fp;
	char filename[1025];
	char filestr[1025];
	char buffer[1025];
	int lineres=0;
	char strres[1025];
	char nameres[1025];
	printf("파일 이름: 찾을 문자열: \n");
	fgets(filename, 1025, stdin);
	//printf("%s", filename);
	fgets(filestr, 1025, stdin);
	filename[strlen(filename) - 1] = 0;
	filestr[strlen(filestr) - 1] = 0;
	fp = fopen(filename, "r");
	if(fp != 0)
	{
		lineres=fprintline(filename);
		fprintstring(filename, filestr, buffer);
		printf("파일 이름 : %s , 라인 수 : %d, 찾은 문자열: %s \n", filename, lineres, buffer);
	}
	else
	{
		printf("파일을 찾을 수 없습니다.");
	}
}
