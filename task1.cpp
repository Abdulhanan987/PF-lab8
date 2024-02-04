#include<iostream>
using namespace std;
bool isTrue(int a, int b,int c, int w,int h);
main()
{
    cout<<"Enter heigth: ";
    int a;
    cin>>a;
    cout<<"Enter width:";
    int b;
    cin>>b;
    cout<<"Enter depth: ";
    int c;
    cin>>c;
   
    cout<<"Enter the width of hole: ";
     int w;
     cin>>w;
     cout<<"Enter the heigth of hole: ";
     int h;
     cin>>h;
     cout<<isTrue(a,b,c,w,h);
}
bool isTrue(int a, int b,int c, int w,int h)
{
 int d = a*b;
    int e = b*c;
    int f = a*c;
 int g = w*h;
     if(g==d||g==e||g==f)
     {
            return true;
     }
     else
     return false;
}