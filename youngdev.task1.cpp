#include <iostream>
using namespace std;
int get_area(int length, int width)
{
    return length * width;
}
int main()
{
    int length, width;
    cout << "Enter the length of rectangle: ";
    cin >> length;
    cout  << "Enter the width of rectangle: ";
    cin >> width;
    int area = get_area(length, width);
    cout << "Area of the rectangle is: " << area;
    return 0;
}
