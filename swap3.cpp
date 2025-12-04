#include <iostream>
using namespace std;

int main()
{
    int a[6];

    
    for(int i = 0; i < 6; i++)
    {
        cout << "Enter number " << i+1 << endl;
        cin >> a[i];
    }


    
    
        for(int j = 5; j >= 0; j--)
        { 
            {
                cout << a[j] << " ";
            }
        }
    

    cout << endl;
    return 0;
}