#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "Enter a name: ";
    cin >> name;
    int length=name.length();
    int isPalindrome = 1;
    for(int i=0; i<length/2; ++i)
	{
        if(name[i]!=name[length-1-i])
		{
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome)
	{
        cout << "The input name is a palindrome." << endl;
    }
	else
	{
        cout << "The input name is not a palindrome." << endl;
    }
    return 0;
}
