#include<iostream>
using namespace std;
class media {
public:
	string titre;



	string id(string a) {
		titre = a;
		return titre;
	}
	virtual void imprimer() {
		cout << "lid est : " << titre << endl;
	}

};
	
class livre :public media {
public:
	string nom;
public:
	string fon_nom(string n)  {
		nom = n;
		return n;
	}
	 void imprimer() {
		cout << "le nom de livre "<<nom<<endl;
	}

};
class audio :public media {
public:
	string duree;

	string fonc_d(string de) {
		duree = de;
		return de;
	}
	void imprimer() {
		cout << "la duree d'audio " <<duree<<endl;
	}

};
class cd :public audio {
public:
	string c;

	string fonc_c(string b){
		c = b;
			return b;

	}
	void imprimer() {
		cout << "le nom de cd " << c<<endl;
	}

};
class cassete :public audio {
public:
	string cas;

	string func_cas(string ca) {
		cas = ca;
		return ca;
	}
	void imprimer() {
		cout << "le nom de cassette " << cas << endl;
	}

};
class disque :public audio {
public:
	string name;

	string fonc_dis(string na) {
		name = na;
		return name;
	}
	void imprimer() {
		cout << "le nom de disque " << name<<endl;
	}

};
class press :public media {
public:
	string type;
public:
	string fonc_type(string t) {
		type = t;
		return t;

	}
	void imprimer() {
		cout << "le type de presse est " << type<<endl;
	}

};
class magazine : public press {
public:
	int num;
public:
	int fonc_num(int nm){
	num = nm;
	return nm;
}
	void imprimer() {
		cout << "le numero de magazine est  " << num<<endl;
	}
};
class journal :public press {
public:
	string nomj;
public:
	string fonc_nomj(string j) {
		nomj = j;
		return nomj;
	}
	void imprimer() {
		cout << "le nom de journal est  " << nomj<<endl;
	}
};
class revue :public press {
public:
	string nomr;
public:
	string fonc_nomr(string r) {
		nomr = r;
		return nomr;
	}
	void imprimer() {
		cout << "le nom de revue est  " << nomr<<endl;
	}
};

int main() {
	media me1;
	me1.id("me1234");
	me1.imprimer();
	livre li1;
	li1.fon_nom("le stage ");
	li1.imprimer();
	audio au1;
	au1.fonc_d("3min");
	au1.imprimer();
	cd c1;
	c1.fonc_c("cd 1");
	c1.imprimer();
	disque di1;
	di1.fonc_dis("disque1");
	di1.imprimer();
	press pr1;
	pr1.fonc_type("journal");
	pr1.imprimer();
	magazine ma1;
	ma1.fonc_num(44);
	ma1.imprimer();
	revue re1;
	re1.fonc_nomr("le soire");
	re1.imprimer();
	journal jou1;
	jou1.fonc_nomj("akhebar");
	jou1.imprimer();
	cassete ca1;
	ca1.func_cas("cassete 1");
	ca1.imprimer();
	return 0;

}

