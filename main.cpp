/*
    191
    recursionIntro 
    main
    pjirele
*/

#include <iostream>
#include <string>
using namespace std;

void hailstone(int n)
{
    if (n != 1)
    {
        if (n % 2 == 0)
        {
            cout << n / 2 << " ";
            hailstone(n / 2);
        }
        else
        {
            cout << 3 * n + 1 << " ";
            hailstone(3 * n + 1);
        }
    }
}// end hailstone



int fibonacci(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
} // end fibonacci



int sumDigits(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + sumDigits(n / 10);   
} // end sumDigits



int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
} // end sum



bool isPalindrome(string s)
{
    for (int x = 0; x < s.length(); x++)
    {
        s[x] = tolower(s[x]);
    }
    if (s.length() == 1)
        return true;
    if (s[0] != s[s.length() - 1])
        return false;
    else
        return isPalindrome(s.substr(s.length() - 1, 1));
} // end isPalindrome



int main()
{
    cout << "hailstone(50)" << endl;
    hailstone(50);
    cout << endl << endl;
    
    cout << "fibonacci(10)" << endl;
    cout << fibonacci(10) << endl << endl;
    
    cout << "sumDigits(88497)" << endl;
    cout << sumDigits(88497) << endl << endl;
    
    cout << "sum(0)" << endl;
    cout << sum(0) << endl;
    cout << "sum(1)" << endl;
    cout << sum(1) << endl << endl;
    cout << "sum(5)" << endl;
    cout << sum(5) << endl << endl;
    
    cout << boolalpha;
    cout << "isPalindrome(\"mom\")" << endl;
    cout << isPalindrome("mom") << endl;
    cout << "isPalindrome(\"momxmom\")" << endl;
    cout << isPalindrome("momxmom") << endl;
    cout << "isPalindrome(\"baker\")" << endl;
    cout << isPalindrome("baker") << endl;
    cout << "isPalindrome(\"bakkaB\")" << endl;
    cout << isPalindrome("bakkaB") << endl;
} // end main