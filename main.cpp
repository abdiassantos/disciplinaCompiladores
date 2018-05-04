#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

	char* cadeia = (char*)malloc(10*sizeof(char));
	int cont = 0;
	int estado = 0;

	std::cout << "Insira aqui sua Cadeia de Caracteres a ser Compiladas" << endl;
	scanf("%[^\n]", cadeia);

	//AUTOMATO NÚMEROS
	if(isdigit(cadeia[0]) == 1){
		estado = 1;

		for(int i=0; i<strlen(cadeia); i++){
			switch (estado) {
				case 1:
					if (isdigit(cadeia[i]) == 1) {
						estado = 2;
						if(i == strlen(cadeia)){
							 std::cout << "É um Dígito!" << '\n';
						}
					}
					else if(cadeia[i] == '-'){
						estado = 1;
					}
					break;

				case 2:
					if (isdigit(cadeia[i]) == 1) {
						estado = 3;
					}
					break;

				case 3:
					if (cadeia[i] == ',') {
						estado = 4;
					}
					else if (isdigit(cadeia[i]) == 1) {
						estado = 3;
					}
					break;

				case 4:
					if(isdigit(cadeia[i]) == 1){
						if(i == strlen(cadeia)){
							 std::cout << "É um Dígito!" << '\n';
						}
						else if (isdigit(cadeia[i]) == 1) {
							estado = 4;
						}
					break;
					}
			}
		}
	}

	//PALAVRAS RESERVADAS
	if(strlen(cadeia) >= 2 && isalpha(cadeia[0]) == 1 && isalpha(cadeia[1]) == 1){
		estado = 1;

		for(int i=0; i<strlen(cadeia); i++){
			switch (estado) {
				case 1:
					if (isalpha(cadeia[i]) == 1) {
						estado = 2 ;
					}
					break;

				case 2:
					if(isalpha(cadeia[i]) == 1){
						estado = 3;
					}
					break;

				case 3:
					if(isalpha(cadeia[i]) == 1){
						estado = 3;
					}
					else if (i == strlen(cadeia)) {
						std::cout << "É uma Palavra Reservada!" << '\n';
					}
			 }
		}
	}

	//IDENTIFICADORES
	if (strlen(cadeia) >= 1 && isalpha(cadeia[1]) == 1)
		estado = 1;

		if(i == strlen(cadeia)){
			 std::cout << "É um Identificador!" << '\n';
			 break;
		}

		for (int i = 0; i < strlen(cadeia); i++) {
				switch(estado){
					case 1:
						if (cadeia[i] == '_') {
							estado = 2;
						}
						else if(isalnum(cadeia) == 1){
							estado = 3;
						}
						break;

					case 2:
						if(isalnum(cadeia) == 1){
							estado = 3;
						}
						break;

					case 3:
						if(i == strlen(cadeia)){
						 	std::cout << "É um Identificador!" << '\n';
						 	break;
						}
						else if(isalnum(cadeia) == 1){
							estado = 3;
						}
						break;
				}
			}
	}

	//COMENTÁRIOS
	if (cadeia[0] == '@' && cadeia[1] == '@') {
		std::cout << "É um Comentário de uma única linha!" << '\n';
	}
	else if(cadeia[0] == '/' && cadeia[1] == '/'){
		if (cadeia[strlen(cadeia) - 2] == '/' && cadeia[strlen(cadeia) - 3]) {
			std::cout << "É um Comentário de mais de uma linha!" << '\n';
		}

		//SIMBOLOS ESPECIAIS
		else if () {

		}
	}

	return 0;
}
