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
		{"aim", "стремиться, целиться"},
		{"alloy", "сплав"},
		{"approach", "приближаться, подходить"},
		{"certain", "определённый"},
		{"condition", "условие"},
		{"create", "создавать"},
		{"consequently", "следовательно"},
		{"data", "данные"},
		{"density", "плотность"},
		{"differ from", "отличаться от"},
		{"difference", "различие, разница"},
		{"estimate", "оценивать"},
		{"except", "кроме, за исключением"},
		{"i.e. [that is]", "то есть"},
		{"include", "включать"},
		{"launch", "запуск"},
		{"liquid", "жидкость, жидкий"},
		{"manned", "пилотируемый (с человеком на борту)"},
		{"movement", "движение"},
		{"numerous", "многочисленный"},
		{"obtain", "получать"},
		{"possess", "обладать, владеть"},
		{"thus", "так, таким образом"},
		{"valuable", "ценный"},
		{"prove", "доказывать"},
		{"substance", "вещество"},
		{"surface", "поверхность"},
		{"vehicle", "транспортное средство, космический летательный аппарат"},
		{"weight", "вес"}
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