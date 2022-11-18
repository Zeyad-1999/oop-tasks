#include <bits/stdc++.h>
using namespace std;


class A {
private:
	int *x = nullptr;
public:
	A() {
		cout<<"A constructor\n";
		x = new int;
		*x = 10;
	}
	~A() {
		cout<<"A destructor\n";
		delete x;
		x=nullptr;
	}

};

int main() {
	A *a = new A();
    delete a;

	return 0;
}
