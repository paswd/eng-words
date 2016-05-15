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

	const int cnt = 29;

	string words[cnt][2] = {
		{"advantage", "преимущество"},
		{"appearence", "появление"},
		{"application", "применение"},
		{"completely", "полностью"},
		{"consumption", "потребление"},
		{"cover", "охватить"},
		{"design", "конструировать, проектировать"},
		{"device", "прибор, устройство"},
		{"double", "удваивать"},
		{"efficient", "эффективный"},
		{"generate", "вырабатывать, производить"},
		{"imagine", "представлять"},
		{"invent", "изобретать"},
		{"power", "энергия, мощность"},
		{"property", "свойство"},
		{"recent", "недавний"},
		{"reduce", "уменьшать"},
		{"replace", "заменять"},
		{"set up", "воздвигать"},
		{"source", "источник"},
		{"state", "положение"},
		{"such as", "такой как"},
		{"transform", "преобразовывать"},
		{"turn", "поворачиваться"},
		{"wide", "широкий"},
		{"without", "без"},
		{"whole", "весь, целый"},
		{"in the case of", "в случае"},
		{"to be based on", "основываться, быть основанным на"}
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