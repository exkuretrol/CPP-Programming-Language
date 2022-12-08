#include <iostream>
#include <string>
using namespace std;

int main() {
	string w[] = {"日", "一", "二", "三", "四", "五", "六"};
	int l = sizeof(w) / sizeof(w[0]);

	int d;
	string first_day_week = "二";
	int first_day_week_ind;
	cin >> first_day_week;
	d = 31;
	
	for (int i = 0; i < 7; i++) {
		if (first_day_week == w[i]) first_day_week_ind = i;
		cout << "\t" << w[i];
	}
	cout << endl;

	for (int j = 0; j < first_day_week_ind; j++) {
		cout << "\t ";
	}

	for (int k = 1; k <= 31; k++) {
		if ((k + first_day_week_ind - 1) % 7 == 0) cout << endl;
		printf("\t%2d", k);
	}

	cout << endl << "index: " << first_day_week_ind << endl;
}