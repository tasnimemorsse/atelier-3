#include<iostream>
using namespace std;
class com {             
public:
	int reel;
	int imaginaire;

public:
	com() {};                
	com(int r, int i) {      
		imaginaire = i;
		reel = r;


	};
	com operator +(com s2) {                       //surcharge d'operateur +

		int fre = reel + s2.reel;
		int fim = imaginaire + s2.imaginaire;
		com s4;
		s4.imaginaire = fim;
		s4.reel = fre;
		return s4;




	}
	com operator -(com s2) {                        //surcharge d'operateur -

		int fre = reel - s2.reel;
		int fim = imaginaire - s2.imaginaire;
		com s4;
		s4.imaginaire = fim;
		s4.reel = fre;
		return s4;




	}
	com operator *(com s2) {                        //surcharge d'operateur *

		int fre = reel * s2.reel;
		int fim = imaginaire * s2.imaginaire;
		com s4;
		s4.imaginaire = fim;
		s4.reel = fre;
		return s4;




	}
		com operator /(com s2) {                        //surcharge d'operateur /

		int fre = reel / s2.reel;
		int fim = imaginaire / s2.imaginaire;
		com s9;
		s9.imaginaire = fim;
		s9.reel = fre;
		return s9;




	}

};
int main() {                 
	int a;
	int b;
	int c;
	int d;
	string o;
	cout << "entrer la partie imaginaire1";
	cin >>a;
	cout << "entrer la partie imaginaire2";
	cin >>b;
	cout << "entrer la partie reel1";
	cin >>c;
	cout << "entrer la partie reele2";
	cin >> d;
	com s1(c, a);
	com s2(d, b);
	com s3 = s1 + s2;
	com s5 = s1 - s2;
	com s6 = s1 * s2;
	com s7 = s1/s2;
	cout << "quelle votre operation? (somme,soustraction , devisionn ou multiplication)"; 
	cin >> o;
	if(o=="somme"){                                      
	
	cout <<s3.reel<< "+ i" << s3.imaginaire << endl;
	}
	else if (o=="soustraction"){
	cout << s5.reel << "+ i" << s5.imaginaire << endl;
	}
		else if (o=="devision"){
	cout << s7.reel << "+ i" << s7.imaginaire << endl;
	}
	else{
	cout << s6.reel << "+ i" << s6.imaginaire << endl;
	}
	return 0;
}
