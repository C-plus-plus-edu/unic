#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	set<string> words;
	int fin;
	int n = 0;
	cin >> n;
	if (n == 0) {
		fin = 0;
	} else if (n == 1) {
		fin = 1;
	} else {
		for (int i = 0; i < n; ++i) {
			string word;
			cin >> word;
			words.insert(word);
		}
		fin = words.size();
	}
	cout << fin << endl;
	return 0;
}
