#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char *argv[1])
{
	char buffer[1024];
	int nread;
	nread = readlink(argv[1], buffer, 1024);
	if(nread > 0){
		write(1, buffer, nread);
		exit(0);
	}
	else{
		fprintf(stderr, "오류 : 해당링크 없음\n");
		exit(1);
	}
}

