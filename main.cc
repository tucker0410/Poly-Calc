#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int multiply(int a, int b);
int subtract(int a, int b);
int add(int a, int b);
//class poly{};

int main(){
	//getting a handful of errors from this, maybe a 2D vector with the same setup of polynomials would work 
	//stack <poly> stax; //this will be the stack that we can push our shiz onto

	while (true){
		cout << "This is a menu" << endl;
		cout << "These are options to choose from a b c d" << endl;
		string x;
		cin >> x;
	


	}
	

	cin.ignore();
	return 0;
}

/* So to explain this class poly, I think it would be easy to classify every number as a "poly"
for example 6x^2 can be used as 6,2 (the comma is arbitrary, we can pass or represent however we want
4x^5 + 5x^4 + x^2 + 3x + 8    :     4,5 + 5,4 + 1,2 + 3,1 + 8,0*/
class poly { 
private:
	int cof;
	int pow;

public:
	poly();
	poly(int c, int p); 
	int getcof() { return cof; }
	int getpow() { return pow; }
	void setcof(int a) { cof = a; };
	void setpow(int a) { pow = a; };

};

poly::poly() {
	setcof(0);
	setpow(0);
}

poly::poly(int c, int p) {
	setcof(c);
	setpow(p);
}

int multiply(int a, int b) {
	return (a * b);
}

int subtract(int a, int b) {
	return (a - b);
}

int add(int a, int b) {
	return (a + b);
}
penis 
