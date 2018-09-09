/*！
* 计算机程序设计C++ MOOC_OJ
* 题目链接：
*     https://www.icourse163.org/learn/XJTU-46006#/learn/ojhw?id=1004107179
*/

#ifdef OJ_1
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
#endif

#ifdef OJ_2
#include <iostream>

using namespace std;

int main()
{
    cout << "慈母手中线" << endl;
	cout << "游子身上衣" << endl;
	cout << "临行密密缝" << endl;
	cout << "意恐迟迟归" << endl;
	cout << "谁言寸草心" << endl;
	cout << "报得三春晖" << endl;
    return 0;
}
#endif

#ifdef OJ_3
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	cin>>name;
    cout << "This program is coded by " << name << "." << endl;
    return 0;
}
#endif

#ifdef OJ_4

/*!
* 参考链接：https://msdn.microsoft.com/zh-cn/library/x5507bd0.aspx#basic_istream:: getline
*/
#include <iostream>

using namespace std;

int main()
{
	char ch[51];
	
	cin.getline(&ch[0], 50, '\n');
	
    cout << "This program is coded by " << ch << "." << endl;
	
    return 0;
}
#endif

#ifdef OJ_5
#include <iostream>

using namespace std;

int main()
{
	int high, len;
	cin>>high>>len;
    cout << 2*(high+len) << endl;
    return 0;
}
#endif

#ifdef OJ_6

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a, b;
	cin>>a>>b;
    cout << sqrt(a*a+b*b) << endl;
    return 0;
}
#endif

#ifdef OJ_2_1

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x1, y1, x2, y2;
	cin>>x1>>y1;
    cin>>x2>>y2;
	cout << (y1-y2)/(x1-x2) << endl;
    return 0;
}
#endif

#ifdef OJ_2_2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1, x2, y2;
	cin>>x1>>y1;
    cin>>x2>>y2;
	cout << sqrt((y1-y2)*(y1-y2) + (x1-x2)*(x1-x2)) << endl;
    return 0;
}
#endif

#ifdef OJ_2_3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char Ch;
	cin>>Ch;
    //cout << Ch << endl;
	cout << !(Ch>='a'&&Ch<='z') << endl;
    return 0;
}
#endif


#ifdef OJ_2_4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char Ch;
	cin>>Ch;
    //cout << Ch << endl;
	cout << (Ch>='0'&&Ch<='9') << endl;
    return 0;
}
#endif


#ifdef OJ_2_5

#include <iostream>
#include <cmath>

using namespace std;

/* 闰年的计算方法:
公元纪年的年数可以被四整除，即为闰年;
被100整除而不能被400整除为平年;
被100整除也可被400整除的为闰年。*/
int main()
{
	int year;
	cin>>year;
    
	cout << ((  ((0 == year%4)&&(0 != year%100)) ||(0 == year %400) ) ? "IsLeapYear" : "NotLeapYear") << endl;
    return 0;
}
#endif

#ifdef OJ_2_6

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int beichushu, chushu;
	cin>>beichushu>>chushu;
    
	cout << beichushu/chushu << " " << beichushu%chushu << endl;
    return 0;
}
#endif

#ifdef OJ_2_7

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x1,x2,x3,x4,x5,x6,x7;
	cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7;
    
	cout << (int)(0.5+(x1+x2+x3+x4+x5+x6+x7)/7.0) << endl;
    return 0;
}
#endif

#ifdef OJ_2_8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// d=|Ax+By+C|/sqrt(A*A+B*B)
	double A, B, C, x, y; 
	double d;
	
	cin>>A>>B>>C;
	cin>>x>>y;
    
	d=abs(A*x+B*y+C)/sqrt(A*A+B*B);
	d=int(d*100+0.5)/100.00;
	
	cout << d << endl;
    return 0;
}
#endif

#ifdef OJ_2_9

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char Ch;
	
	cin>>Ch;
	
	cout << (int)Ch << endl;
    return 0;
}
#endif

#ifdef OJ_2_10

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int Int;
	
	cin>>Int;
	
	cout << (char)Int << endl;
    return 0;
}
#endif

#ifdef OJ_2_11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int Int;
	
	cin>>Int;
	
	cout << hex << Int << endl;
    return 0;
}
#endif

#ifdef OJ_2_12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int Int;
	
	cin>>Int;
	
    (Int >= 0) ? 
	(cout << Int << " " << hex << Int << " " << oct << Int) 
	: 
	(cout << Int << " -" << hex << abs(Int) << " -" << oct << abs(Int) );
	cout << endl;
	
    return 0;
}
#endif