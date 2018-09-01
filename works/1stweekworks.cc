#ifdef W1_1
#include <iostream>

using namespace std;

int main()
{
	cout << "Hello C++." << endl;
	cout << "I like programming." << endl;
	return 0;
}
#endif

#ifdef W1_2
#include <iostream>

using namespace std;

int main()
{
	char name[100];
	cin.getline(&name[0], 100);
	
	cout << "Hello " << name << "." << endl;
	return 0;
}
#endif

#ifdef W1_3
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, y;
	
	cin >> x >> y;
	
	cout << x*y << endl;
	
	return 0;
}
#endif

#ifdef W1_4
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double inch;
	
	cin >> inch;
	
	cout << inch << "inch="<< inch*2.54 << "cm" << endl;
	
	return 0;
}
#endif

#ifdef W1_5
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double number;
	
	cin >> number;
	
	cout << sqrt(number) << endl;
	
	return 0;
}
#endif