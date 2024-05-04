#include <iostream>
#include <string>
using namespace std;
int main()
{
	int size=5;
	string name[size];
	cout << "Enter " << size << " names:" << endl;
	for(int i=1; i<=size; i++)
	{
		cout << i << ". "; 
		cin >> name[i];
	}
	cout << "In reverse order: " << endl;
	for(int i=size; i>=0; --i)
	{
		cout << name[i] << endl;
	}
	return 0;
}