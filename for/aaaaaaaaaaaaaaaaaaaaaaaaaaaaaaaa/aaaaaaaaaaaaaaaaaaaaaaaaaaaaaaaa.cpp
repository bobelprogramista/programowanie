#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 5; i++) //a
	{
		cout << i << endl;
	}

	for (int o = 0; o < 9999999999999; o++)
	{
		cout << o << endl;
		for (int i = 0; i < 5; i++) //a
		{
			cout << i << endl;
		}
	}

}