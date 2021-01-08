#include<iostream>
using namespace std;

namespace MySpace
{
int a;
int f1();
class A {
public:
	void fun1();
};
}
int MySpace::f1()
{
	cout << "Function f1 is called:)\n";
	return 0;
}
void MySpace::A::fun1()
{
	cout << "Function fun1 is called:)\n";
}
using namespace MySpace;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	a = 5;
	f1();
	A obj;
	obj.fun1();
}