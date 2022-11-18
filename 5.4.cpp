#include <bits/stdc++.h>
using namespace std;

class OurPrice {
private:
	int price;

public:
	OurPrice(int price){
		SetPrice(price);
	}

	int GetPrice() const {
		return price;
	}

	void SetPrice(int price) {
		if (price < 10)
			price = 0;
		this->price = price;
	}

	int SomeFun() {
		int price = 10;
		int price2 = 20;
		int price3 = 20;


		return price + price2 + price3;
	}
};

int main() {
	return 0;
}
