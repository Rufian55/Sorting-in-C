/*************************************************************************
* quarternarySearch.cpp searchs a sorted int array in Theta(log[base4](n))
* Adapted from an article by Taranjit Khokhar
* September 2016 | IJIRT | Volume 3 Issue 4 | ISSN: 2349-6002
* IJIRT 143908 INTERNATIONAL JOURNAL OF INNOVATIVE RESEARCH IN TECHNOLOGY
* At present, requires sorted ascending or descending array data entry.
**************************************************************************/
#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

int main() {
	int f, n, flag = 0, arr[10000];
	string here = "Search int found: ";
	cout << "ENTER THE NUMBER OF ELEMENTS: ";
	cin >> n;

	cout << "ENTER THE ELEMENTS OF THE ARRAY: ";
	for (int m = 0; m < n; m++) {
		cin >> arr[m];
	}

	int h = n - 1;
	int l = 0;
	
	cout << "ENTER NUMBER TO BE SEARCHED: ";
	cin >> f;
	
	while (h >= l){
		int j = ((3 * l) + h) / 4;
		int m = (h + l) / 2;
		int k = ((3 * l) + h) / 4;
		if (arr[j] == f) {
			cout << here << arr[j] << "\n";
			flag = 1;
			l = h + 1;
		}
		else if (arr[m] == f) {
			cout << here << arr[m] << "\n";
			flag = 1;
			l = h + 1;
		}
		else if (arr[k] == f) {
			cout << here << arr[k] << "\n";
			flag = 1;
			l = h + 1;
		}
		else if (f < arr[j]) {
			h = j - 1;
		}
		else if (f < arr[m]) {
			l = j + 1;
			h = m - 1;
		}
		else if (f < arr[k]) {
			l = m + 1;
			h = k - 1;
		}
		else {
			l = k + 1;
		}
	}
	cin.get();
	if(!flag)
		cout << "Searched for integer not found!\n";
}