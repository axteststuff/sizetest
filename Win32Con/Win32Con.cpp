// Win32Con.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>


int main(int argc, char* argv[])
{

	printf("sizeof(int) = %ld\n", sizeof(int));  // 8 on Linux 4 on Windows
	printf("sizeof(int32_t) = %ld\n", sizeof(int32_t));  // 4 on Linux 4 on Windows
	printf("sizeof(long int) = %ld\n", sizeof(long int));  // 8 on Linux 4 on Windows
	printf("sizeof(long long int) = %ld\n", sizeof(long long int)); // 8 on Linux 8 on Windows
	printf("sizeof(int64_t) = %ld\n", sizeof(int64_t)); // 8 on Linux 8 on Windows
	printf("sizeof(short int) = %ld\n", sizeof(short int)); // 2 on Linux 2 on Windows
	printf("hex is 0x%X\n", 07777);
	printf("oct is 0o%o\n", 07777);
	printf("dec is %d\n", 07777);

	struct stat st;
	if (stat("./a.out", &st) == 0)
	{
		mode_t m = st.st_mode;
		printf("hex is 0x%X\n", m & ~S_IFMT & 07777);
		printf("oct is 0o%o\n", m & ~S_IFMT & 07777);
		printf("dec is %d\n", m & ~S_IFMT & 07777);
		printf("hex is 0x%lX\n", m & ~S_IFMT);
		printf("oct is 0o%lo\n", m & ~S_IFMT);
		printf("dec is %ld\n", m & ~S_IFMT);
	}
	return 0;
}

