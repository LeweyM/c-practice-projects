#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	char *line;
	char *file_name = argv[1];

	//printf("%s", file_name);
        fp = fopen(file_name, "r");

	size_t linecap = 0;
	ssize_t linelen;
	while((linelen = getline(&line, &linecap, fp)) > 0) {
		printf("%s", line);
	}
}
