#include <iostream>
int main(){
	using namespace std;
	cout << "Side = \n";
	int side;
	cin >> side;
	
	int square_P = side * 4;
	int square_S = side * side;
	
	cout << "P = " << square_P << endl;
	cout << "S = " << square_S << endl;
	
	return 0;
}
