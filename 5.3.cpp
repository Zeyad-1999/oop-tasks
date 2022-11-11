#include <bits/stdc++.h>
using namespace std;

class A {
private:
public:
	A() {
		cout<<"A Constructor\n";
	}
	~A() {
		cout<<"A Destructor\n";
	}
};

class B {
private:
public:
	B() {
		cout<<"B Constructor\n";
	}
	~B() {
		cout<<"B Destructor\n";
	}
};

class C {
private:
public:
	C() {
		cout<<"C Constructor\n";
	}
	~C() {
		cout<<"C Destructor\n";
	}
};

class D {
private:
	A aa;
	B bb;
	C cc;

public:
	D(const A &a, const B &b, const C &c) : aa(a), bb(b), cc(c){
		//faster and use the same memory whitout creat new one
	}
};

int main() {

	return 0;
}
