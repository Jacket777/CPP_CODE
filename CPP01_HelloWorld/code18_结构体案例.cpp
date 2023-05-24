#include<iostream>
#include<string>
using namespace std;

struct Hero {
	string name;
	int age;
	string sex;
};


void bubbbleSortHero(Hero heroArray[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArray[j].age > heroArray[j + 1].age) {
				Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}


void printHeroArray(Hero heroArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << " name: " << heroArray[i].name << " age:" << heroArray[i].age << " sex: " << heroArray[i].sex << endl;
	}
}

int main() {
	struct Hero heroArray[5] = {
		{"Áõ±¸",23,"ÄÐ"},
		{"¹ØÓð",22,"ÄÐ"},
		{"ÕÅ·É",20,"ÄÐ"},
		{"ÕÔÔÆ",21,"ÄÐ"},
		{"õõ²õ",19,"Å®"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++) {
		cout << " name: " << heroArray[i].name << " age:" << heroArray[i].age << " sex: " << heroArray[i].sex << endl;

	}
	cout << "  " << endl;

	bubbbleSortHero(heroArray, len);
	printHeroArray(heroArray, len);

	system("pause");
	return 0;
}