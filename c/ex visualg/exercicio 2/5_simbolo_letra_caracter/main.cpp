#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	char l;
	
	printf("Letra ou caracter ou número***\n\n");
	
	printf("Informe um caracter:\n");
	scanf("%c",&l);
	
	if((l == 'a') or (l == 'e') or (l == 'i') or (l == 'o') or (l == 'u')){	
	printf("\nO caracter %c é uma vogal\n",l); 
	}
	if((l == 'b') or (l == 'c') or (l == 'd') or (l == 'f') or (l == 'g') or (l == 'h') or (l == 'j') or (l == 'k') or (l == 'l') or (l == 'm') or (l == 'n') or (l == 'p') or (l == 'q') or (l == 'r') or (l == 's') or (l == 't') or (l == 'v') or (l == 'w') or (l == 'x') or (l == 'y') or (l == 'z')){	
	printf("\nO caracter %c é uma consoante\n",l); 
	}
	if((l == 'A') or (l == 'E') or (l == 'I') or (l == 'O') or (l == 'U')){	
	printf("\nO caracter %c é uma vogal\n",l); 
	}
	if((l == 'B') or (l == 'C') or (l == 'D') or (l == 'F') or (l == 'G') or (l == 'H') or (l == 'J') or (l == 'K') or (l == 'L') or (l == 'M') or (l == 'N') or (l == 'P') or (l == 'Q') or (l == 'R') or (l == 'S') or (l == 'T') or (l == 'V') or (l == 'W') or (l == 'X') or (l == 'Y') or (l == 'Z')){	
	printf("\nO caracter %c é uma consoante\n",l); 
	}
	if((l == '0') or (l == '1') or (l == '2') or (l == '3') or (l == '4') or (l == '5') or (l == '6') or (l == '7') or (l == '8') or (l == '9')){	
	printf("\nO caracter %c é um número\n",l); 
	}
	if((l == '"') or (l == '!') or (l == '@') or (l == '#') or (l == '$') or (l == '%') or (l == '¨') or (l == '&') or (l == '*') or (l == '(') or (l == '-') or (l == '_') or (l == '=') or (l == '+') or (l == '´') or (l == '[') or (l == '~') or (l == '^') or (l == ';')){	
	printf("\nO caracter %c é um simbolo\n",l); 
	}
	

	system("pause");
	return 0;
}
