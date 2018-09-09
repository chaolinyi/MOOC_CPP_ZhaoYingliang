#ifdef W2_1

#include <iostream>

using namespace std;

int main()
{
	double F;
	double C;
	cin >> F;
	C=5.0/9.0*(F-32.0);
	cout << C << endl;
	return 0;
}

#endif

#ifdef W2_2

#include <iostream>
#include <cmath>

using namespace std;

// y=sin(x*x)/(1-cos(x))

int main()
{
	double x;
	double y;
	cin >> x;
	y=sin(x*x)/(1-cos(x));
	cout << y << endl;
	return 0;
}

#endif


#ifdef W2_3

#include <iostream>
#include <cmath>

using namespace std;

// y=sin(x*x)/(1-cos(x))

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	cout << (x+y+z) << endl;
	cout << (x+y+z)/3.0 << endl;
	cout << int((x+y+z)/3.0 + 0.5) << endl;
	return 0;
}

#endif


#ifdef W2_4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int array[5] = {50, 20, 10, 5, 1};
	int x;
	int tmp, i;
	int flag = 0;
	
	cin >> x;
	
	for (tmp = x, i = 0; tmp > 0; i++)
	{
		if (flag)
			cout << " ";
		cout << tmp / array[i];
		tmp = tmp - tmp / array[i] * array[i];
		flag = 1;
	}
	
	for (; i < 5; i++)
	{
		if (!flag)
		{
			cout << 0;
			flag = 1;
			continue;
		}
		cout << " " << 0;
	}
	cout << endl;
	
	return 0;
}

#endif

#ifdef W2_5

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char Ch;
	cin >> Ch;
	cout << char((Ch>='a'&&Ch<='z')?(Ch-'a'+'A'):Ch) << endl;
	return 0;
}

#endif