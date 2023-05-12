#include <iostream>
using namespace std;

void input(int& cari) {
	cout << "Masukan 1 nilai yang ingin anda cari: ";
	cin >> cari;
	cout << endl;
}

int binarySearch(const int yafi[115], int n, int cari) {
	int YAFI = 0;
	int ANDRIANSYAH = n - 1;

	while (YAFI <= ANDRIANSYAH){
		int mid = (YAFI + ANDRIANSYAH) / 2;
		if (yafi[mid] == cari) {
			cout << "FOUND" << endl;
			return 0;
		}
		else if (cari < yafi[mid]){
			ANDRIANSYAH = mid - 1;
		}
		else if(cari > yafi[mid]) {
			YAFI = mid + 1;
		}
	}
	cout << "NOT FOUND" << endl;
}

int main() {
	int yafi[] = { 1,2,7,8,9,11,12,45,67,89,90,100 };
	int n = sizeof(yafi) / sizeof(yafi[0]);

	int cari;
	input(cari);

	binarySearch(yafi, n, cari);
	return 0;
}