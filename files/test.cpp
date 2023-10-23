// 答题
#include <iostream> 
// #include <stdio.h> 
using namespace std; 
void staticLocalVar() 
{
    static int a=3;
    // printf("a=%d\n",a);
    cout<<"a="<<a<<endl; 
    ++a;

}

int main() 
{
    staticLocalVar(); 
    staticLocalVar(); 

    int i=5,k;
    k=(+i)+(+i)+(i++);
    cout<<"k="<<k<<endl;
    cout<<"i="<<i<<endl; 
    return 0;
}
