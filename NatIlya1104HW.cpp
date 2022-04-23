#include <iostream>
#include <fstream>
using namespace std;
char user_field[10][10];

void print() {
	
	ifstream user_field_input("UBF.txt");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			user_field_input >> user_field[i][j];
			cout << user_field[i][j];
		}
		cout << '\n';
	}
}




int main()
{
    print();
}
