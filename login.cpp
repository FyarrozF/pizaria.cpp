#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{

	string password1 = "password";
	string password;

	cout << "digite sua senha";
	cin >> password;

	if (password == password1)
	{
		cout << "bem vindo\n";
		system("pause");
		return (EXIT_SUCCESS);
	}
	else
	{
		cout << "senha incorreta por favor tente novamente\n";
	}

	system("pause");
	return (EXIT_SUCCESS);

}