# include<bits/stdc++.h>
using namespace std;
class calculator{
public :
    int add,sub,mul;
    float divide;
    calculator(int first,int second)
    {
        add=first+second;
        sub=first-second;
        mul=first*second;
        divide=first/second;

    }
};
calculator * c1(int first,int second)
{
    return new calculator(first,second);
}
int main()
{
    calculator * r1=c1(2,10);
    cout<<r1->add<<" "<<r1->sub<<" "<<r1->mul<<" "<<r1->divide<<endl;
}
