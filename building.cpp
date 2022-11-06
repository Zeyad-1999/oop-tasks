#include <bits/stdc++.h>
using namespace std;
class room {
private:
	int width;
	int height;
	string color;

public:


	 SetColor(string col) {
	color = col;
	}
	 string GetColor() {
		return color;
	}
	int GetHeight() {
		return height;
	}

	void SetHeight(int height) {
		this->height = height;
	}

	int GetWidth() {
		return width;
	}

	void SetWidth(int wid) {
		width = wid;
	}
};

class elevator
{
    int weight;
    int height;
    int max_weight;
    int max_height;
public:
   void set_max_weight(int x)
    {
        max_weight=x;
    }
    void set_max_height(int x)
    {
        max_weight=x;
    }
    void set_weight(int x)
    {
        height=x;
    }
    void set_height(int x)
    {
        height=x;
    }
    bool check (){
        if(weight<=max_weight && (height<=max_height))
                    return  true;
        else return 0;
    }

};
class appartment
{
int num_of_rooms=5 ;
int appar_num;
int floor_num;
vector<room>rooms();
string couler_of_kitchen;
string couler_of_bathroom;
int area_of_bathroom;
int area_of_kitchen;

public:
    set_kitchen(string s, int x){
    couler_of_kitchen=s;
    area_of_kitchen=x;
    }
    set_bathroom(string s, int x){
    couler_of_bathroom=s;
    area_of_bathroom=x;
    }
    get part(){
    } // return all data members
};
int main()
{

    return 0;
}
