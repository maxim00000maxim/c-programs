// bot.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <math.h>
int p = 0;
using namespace std;

float t = 0;
float u = 0;
float r = 0;
char opereshn = 0;

string how;
string login;
int main() {

	cout << "who are you? \n";
	getline(cin, login);

	cout << "How are you? \n";
	getline(cin, how);
	if (how != "normal" && how != "nice")
	{
		cout << "Is there something wrong?" << "\n";
		getline(cin, how);;
		p = how.find("die");
		if (p != -1) {
			cout << "very sorry!" << "\n";
		}
		else
		{
			cout << "It's a pity" << "\n";


		}
		}getline(cin, how);


		while (how != "goodbye")

		{
			

			if (how == "calculate") {
				cout << "opereshn " << "\n";
				cin >> opereshn;
				cout << "firth number " << "\n";
				cin >> t;
				cout << "second number " << "\n";
				cin >> u;
				if (opereshn == '+') {
					r = t + u;

					cout << "Answer is" << r << "\n";
				};

				if (opereshn == '-') {
					r = t - u;

					cout << "Answer is" << r << "\n";
				};

				if (opereshn == '*') {
					r = t * u;

					cout << "Answer is" << r << "\n";
				};

				if (opereshn == '/') {
					r = t / u;
					r = r;
					cout << "Answer is" << r << "\n";
				};

				if (opereshn == '^') {
					r = pow((t), (u));

					cout << "Answer is" << r << "\n";
				};

				if (opereshn == '@') {
					r = pow(t, 1 / u);

					cout << "Answer is \n" << r << "\n";
				}



			}




			if (how == "said my name") {

				cout << login << "\n";

			}
			getline(cin, how);
		}
		exit(0);
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
