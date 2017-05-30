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
		{"adjust", "регулировать"},
		{"angle", "угол"},
		{"apply", "применять"},
		{"avoid", "избегать"},
		{"axis", "ось"},
		{"current", "современный, текущий"},
		{"destination", "пункт назначения"},
		{"detect", "обнаруживать"},
		{"directly", "прямо, непосредственно"},
		{"engine", "двигатель"},
		{"ensure", "обеспечивать, гарантировать"},
		{"equip", "оборудовать"},
		{"exceed", "превышать"},
		{"exhaust", "выхлоп"},
		{"guidance", "управление, наведение"},
		{"ignition", "зажигание"},
		{"indicate", "указывать, показывать"},
		{"make", "делать, заставлять"},
		{"mount", "монтировать, устанавливать"},
		{"only", "единственный, только"},
		{"place", "помещать"},
		{"select", "выбирать"},
		{"size", "размер"},
		{"sophisticated", "сложный"},
		{"valve", "клапан"},
		{"warn", "предупреждать"},
		{"withstand", "выдерживать"},
		{"in many respects", "во многих отношениях"},
		{"to look like", "быть похожим"},
		{"to turn on/off", "включать/выключать"}
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