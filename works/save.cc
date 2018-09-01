#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double money=1, rate=0.1, years=2;
	
	cout << pow(money*(1.0+rate), years) << endl;
	
	return 0;
}



