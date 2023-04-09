#include <stdio.h>
#include <string.h>

int len(char *str);

int main(int argc, char **argv) {
	// Check for length too
	if (argc == 1) {
		printf(":(\n");
		return 0;
	}
	// Precheck
	if (argc>1) {
		if (strcmp(*(argv+1), "--help") == 0 || strcmp(*(argv+1), "-?") == 0) {
			printf("DINOSAY!\nWrite anything after typing dinosay and it will print that for you :)\nLike - \ndinosay \"Hi, I am a dinosaur\"\n");
			return 0;
		}
	}
	
	char *dino[] = {
"                        . - ~ ~ ~ - .",
"      ..     _      .-~               ~-.",
"     //|     \\ `..~                      `.",
"    || |      }  }              /       \\  \\",
"(\\   \\\\ \\~^..'                 |         }  \\",
" \\`.-~  o      /       }       |        /    \\",
" (__          |       /        |       /      `.",
"  `- - ~ ~ -._|      /_ - ~ ~ ^|      /- _      `.",
"              |     /          |     /     ~-.     ~- _",
"              |_____|          |_____|         ~ - . _ _~_-_"};
	
	// For printing upper lines of message
	printf("   ");
	for (int i = 1;i<argc;i++) {
		for (int h = 0;h<len(*(argv+i));h++) {
			printf("-");
		}
		printf("-");
	}
	printf("\n");
	// then printing user text
	printf(" < ");
	for (int i = 1;i<argc;i++) {
		printf("%s ", *(argv+i));
	}
	// then print below lines
	printf(" >\n   ");
	for (int i = 1;i<argc;i++) {
		for (int h = 0;h<len(*(argv+i));h++) {
			printf("-");
		}
		printf("-");
	}
	// For printing dinosaur
	for (int i = 0;i<10;i++) {
		if (i==0) {
			printf("\n       \\ ");
			printf("%s\n", dino[i]);
		}
		else if (i==1) {
			printf("        \\");
			printf("%s\n", dino[i]);
		}
		else {
			printf("       %s\n", dino[i]);
		}
	}
	return 0;
}
int len(char *str) {
	int x = 0;
	for (;*(str+x)!='\0';x++);
	return x;
}
