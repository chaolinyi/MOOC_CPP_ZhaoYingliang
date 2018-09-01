#include <iostream>

using namespace std;

int main()
{
	char name1[100];
	char name2[100];
	cin.getline(&name1[0], 99, '\n');
	cin.getline(&name2[0], 99, '\n');
	
	cout << "#################################################" << endl;
	cout << name1 << endl;
	cout << endl;
	cout << "  Happy birthday to you!"<< endl;
	cout << endl;
	cout << "      sincerely yours "<< name2 << endl;
	cout << "#################################################" << endl;
	
	return 0;
}



