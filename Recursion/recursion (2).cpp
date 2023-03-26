#include <iostream>
using namespace std;

int recursion(int n)
{
    if (n <= 5)
    return n;
    return n + recursion(n-5); 
}


    int main()
    {
        int n = 100;
        cout<< recursion (n);
        return 0;

    }
