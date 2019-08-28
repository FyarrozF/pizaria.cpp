#include <iostream>

using namespace std;

int main() {

	FILE *arquivos;

	arquivo = fopen("CadastroFuncionarios.txt", "wt"); //Grava 


	if (arquivo == NULL) {
		cout << ("arquivo nao encontrado");
		exit(0);
	}

	fclose(arquivo);




	system("pause");
	return(0);
}