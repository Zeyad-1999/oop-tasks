#include <bits/stdc++.h>
using namespace std;

class Time {
private:
	int hours, minutes, seconds;

public:
	Time(int hours, int minutes, int seconds) {
			SetTime(hours, minutes, seconds);
	}
	void SetTime(int hours, int minutes, int seconds) {

		this->hours = hours;
		this->minutes = minutes;
		this->seconds = seconds;
	}
	int GetTotalSeconds() {
		return hours * 60 * 60 + minutes * 60 + seconds;
	}
	int GetTotalMinutes() {
		return hours * 60 + minutes;
	}
	void PrintHHMMSS() {
		cout << hours << ":" << minutes << ":" << seconds << "\n";
	}
	string ToSring(string seperator = "-") {
		ostringstream oss;
		oss << hours << seperator << minutes << seperator << seconds;
		return oss.str();
	}
	int GetHours() {
		return hours;
	}
	Time& SetHours(int hours) {
		this->hours = hours;
	}
	int GetMinutes() {
		return minutes;
	}
	Time& SetMinutes(int minutes) {
		if (minutes < 0)
			minutes = 0;
		this->minutes = minutes;
	}
	int GetSeconds() {
		return seconds;
	}
	Time& SetSeconds(int seconds) {
		if (seconds < 0)
			seconds = 0;
		this->seconds = seconds;
	}
};

int main() {
	Time t(0, 120, 120);
cout<<t.GetTotalSeconds();
	return 0;
}
