#include <iostream>
using namespace std;

int main()
{
    int a[6];

    
    for(int i = 0; i < 6; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> a[i];
    }

    
    int start = 0, end = 5;
    while(start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    
    cout << "\nReversed Array:\n";
    for(int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}