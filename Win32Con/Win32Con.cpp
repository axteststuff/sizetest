// Win32Con.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <sys/stat.h>

int main(int argc, char* argv[])
{

	printf("sizeof(int) = %ld\n", sizeof(int));  // 8 on Linux 4 on Windows
	printf("sizeof(int32_t) = %ld\n", sizeof(int32_t));  // 4 on Linux 4 on Windows
	printf("sizeof(long int) = %ld\n", sizeof(long int));  // 8 on Linux 4 on Windows
	printf("sizeof(long long int) = %ld\n", sizeof(long long int)); // 8 on Linux 8 on Windows
	printf("sizeof(int64_t) = %ld\n", sizeof(int64_t)); // 8 on Linux 8 on Windows
	printf("sizeof(short int) = %ld\n", sizeof(short int)); // 2 on Linux 2 on Windows

	return 0;
}

