#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

void pause(void)
{
    string s;
    //cout << "\nPress the Enter key show correct answer....\n";
    cin >> s;
} 

int main(void)
{
	setlocale(LC_ALL, "russian");
	time_t timet;
	srand((unsigned) time(&timet));

	const int cnt = 30;

	string words[cnt][2] = {
		{"amount", "количество"},
		{"announce", "объявлять, заявлять"},
		{"combine", "сочетать(ся), комбинировать(ся), объединять(ся)"},
		{"combined with", "в сочетании с"},
		{"combustion", "горение"},
		{"complicated", "сложный"},
		{"conventional", " обычный, стандартный"},
		{"currently", "в настоящее время"},
		{"disadvantage", "недостаток"},
		{"measure", "мера"},
		{"noise", ", шум"},
		{"overall", "полный, общий"},
		{"overcome", "преодолевать"},
		{"resistance", "сопротивление"},
		{"stress", ", напряжение"},
		{"efficiency", "производительность, КПД, эффективность"},
		{"e.g. (for example)", "например"},
		{"expect", "ожидать"},
		{"extreme", ", крайний, чрезвычайный"},
		{"friction", "трение"},
		{"fuel", "топливо"},
		{"heat", "нагревать(ся)"},
		{"inject", "впрыскивать, вводить"},
		{"mainly", "главным образом"},
		{"structure", "конструкция, структура"},
		{"substitute", "заменять, подставлять"},
		{"vaporize", "испарять(ся)"},
		{"velocity", "скорость"},
		{"apart from", "помимо, кроме"},
		{"way out", "выход"}
	};
	//cout << words[0][1] << endl;
	int numold = -1;
	while (true) {
		int num;
		do {
			num = rand() % cnt;
		} while (num == numold);
		cout << "-----------------------" << endl;
		cout << words[num][1] << endl;
		pause();
		cout << words[num][0] << endl << endl;
		numold = num;
	} 
	return 0;
}