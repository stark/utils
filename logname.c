#include <unistd.h>
#include <stdio.h>


int
main(int argc, char **argv) {
	puts(getlogin());

	return 0;
}

