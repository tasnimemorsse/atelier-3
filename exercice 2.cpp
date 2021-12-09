#include<iostream>
using namespace std;
class shape {                   
public:
	float largeur;
	float hauteur;
public:
	shape(float l, float h) {       
		largeur = l;
		hauteur = h;
		
	}

};
class rectangle : public shape  {       
public:
	rectangle(float l, float h) : shape(l, h) {  
	}
	float area() {                    
		return(largeur * hauteur);
	}

};
class triangle : public shape {          
public:
	triangle(float l, float h) : shape( l ,h){}  
	float area() {                              
		return (largeur * hauteur / 2);
	}

};
int main() {
	float a;                            
	float b;
	cout << "la largeur est :";
cin >> a;
cout << "la hauteur est :";
cin >> b;
triangle s1(a, b);                
rectangle s2(a, b);   
cout << "l aire de triangle est :" << s1.area() << endl;
cout << "l aire de rectangle est :" << s2.area() << endl;
return 0;

}
