#include <iostream>

using namespace std;

struct Unit {
	int lvl;
	char* name;
	int hp;
	int att;
	int def;
	int dHp;
	int dAtt;
	int dDef;
};
/*
 1-Воин
 2-Берсеркер
 3-Гладиатор
 */
void printUnit(Unit *u){
	cout<<"Имя: "<<u->name<<"\n";
	cout<<"Уровень: "<<u->lvl<<"\n";
	cout<<"Здоровье: "<<u->hp<<"\n";
	cout<<"Атака: "<<u->att<<"\n";
	cout<<"Броня: "<<u->def<<"\n";

}
void createHero(Unit *h, char* n, int t) {
	//h=new Unit;
	h->lvl = 1;
	h->name = n;
	if (t == 1) {
		h->hp = 12;
		h->att = 7;
		h->def = 4;

		h->dHp = 2;
		h->dAtt = 2;
		h->def = 2;

		cout<<"Воин создан!\n";
	} else if (t == 2) {
		h->hp = 9;
		h->att = 12;
		h->def = 4;

		h->dHp = 1;
		h->dAtt = 3;
		h->def = 1;
		cout<<"Берсеркер создан!\n";
	} else if (t == 3) {
		h->hp = 12;
		h->att = 6;
		h->def = 5;

		h->dHp = 3;
		h->dAtt = 1;
		h->def = 3;
		cout<<"Гладиатор создан!\n";
	}
}

int main(int argc, char **argv) {
	setlocale(LC_ALL,"Russian");
	Unit hero;
	createHero(&hero,"Честер",2);
	printUnit(&hero);
	//cout<<heroe.name<<endl;
	cout<<"Done"<<endl;
	return 0;
}

