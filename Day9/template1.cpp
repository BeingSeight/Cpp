#include <iostream>
using namespace std;

template<class T1,class T2>

class Test 
{
T1 a;
T2 b;

public:
Test(T1 x,T2 y)
{
    a=x;
    b=y;
}
void show()
{
    cout<<a<<" and "<<b<<"\n";
}

};
int main()
{
Test<float,int> test1(1.0f, 100);
Test<int,char> test2(100,'W');
test1.show();
test2.show();
return 0;
}