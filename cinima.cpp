#include <iostream>
using namespace std;
int main(){
    char s[10][10]; 
    int r,c,x,y;
     char a='y';
     cout<<"Enter rows"<<endl;
    cin>>r;
    cout<<"Enter columns"<<endl; 
    cin>>c;
    cout<<"Please select seat which you want"<<endl;
    for(int i=0;i<r;i++)
    {
     for(int j=0;j<c;j++) 
    s[i][j]='F';}
    while(a=='y'||a=='Y')
    {
        for(int i=0;i<r;i++)
        {for(int j=0;j<c;j++) 
            cout<<"("<<i+1<<"-"<<j+1<<" "<<s[i][j]<<") "; 
            cout<<endl;}
            cout<<"Enter row"<<endl;
        cin>>x;
        cout<<"Enter column"<<endl;
        cin>>y; 
        s[x-1][y-1]='R';
        
        cout<<"Your seat is Reserved"<<endl;
        cout<<"You want to reserve more seats \n1:Enter y for yes\n2:Enter N for No"<<endl;
        cin>>a;
        

    }
    cout<<"Thank you for booking"<<endl;
    return 0;
}