#include <iostream>
using namespace std ;
 class calc
{
    public:
 
    float add(float a, float b)
    {
        return a + b;
    }
    float sub(float a,float b)
    {
        return a - b;
    }
    float mult(float a, float b)
    {
        return a * b;
    }
    float div(float a, float b)
    {
        return a / b;
    }
};
int main()
{
    float a, b;
    char op, ch;
    calc cl = calc();
    ch = 'y';
    while (ch == 'y')
    {
        cin >> a;
        cin >> op;
        cin >> b;
        switch (op)
        {
        case '+':
            cout << cl.add(a, b);
            break;
        case '-':
            cout  << cl.sub(a, b);
            break;
        case '*':
            cout  << cl.mult(a, b);
            break;
        case '/':
            cout  << cl.div(a, b);
            break;
        }
        cout << "\ncontinue \'y/n\': ";
        cin >> ch;
    }
}