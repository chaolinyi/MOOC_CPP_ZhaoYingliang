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