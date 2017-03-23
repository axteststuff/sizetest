// Win32Con.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <time.h>
#include <sys/stat.h>

int main(int argc, char* argv[])
{

	printf("sizeof(long int) = %d\n", sizeof(long int));
	printf("sizeof(long long int) = %d\n", sizeof(long long int));
	printf("sizeof(short int) = %d\n", sizeof(short int));

	return 0;
}

