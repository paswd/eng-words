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
		{"appear", "появляться"},
		{"artifical", "искусственный"},
		{"compare", "сравнивать"},
		{"contain", "содержать"},
		{"continuous", "непрерывный"},
		{"convenient", "удобный"},
		{"direct", "прямой"},
		{"during", "в течение"},
		{"equipment", "оборудование"},
		{"essentially", "по существу"},
		{"etc (etcetera)", "и так далее"},
		{"exist", "существовать"},
		{"few", "мало"},
		{"a few", "несколько"},
		{"influence", "влияние"},
		{"means", "средство"},
		{"nowadays", "сейчас"},
		{"occur", "происходить"},
		{"rapidly", "быстро"},
		{"research", "исследование"},
		{"simultaneously", "одновременно"},
		{"state", "утверждать"},
		{"switch on", "включать"},
		{"time", "время"},
		{"transmit", "передавать"},
		{"watch", "наблюдать"},
		{"weigh", "весить"},
		{"within", "в пределах"},
		{"a lot of", "много"},
		{"to be able to", "мочь, быть в состоянии"}
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