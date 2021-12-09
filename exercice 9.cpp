#include<iostream>
using namespace std;
class Test {
public:
	static int count;
	void call() {
		
		count++;
	}
};
int Test::count = 0;
int main() {
	Test t1;
	t1.call();
	t1.call();

	cout << "elle a appele :" << t1.count << endl;
	return 0;
}
