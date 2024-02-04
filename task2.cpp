#include<iostream>
using namespace std;
float calculateDamage(string a, string b, float c, float d);
main()
{
    cout<<"Enter your type: ";
    string ytype;
    cin>>ytype;
    cout<<"Enter opponenet type: ";
    string otype;
    cin>>otype;
    cout<<"Enter attack power: ";
    float attack;
    cin>>attack;
    cout<<"Enter the defense: ";
    float defense;
    cin>>defense;
    cout<<calculateDamage(ytype,otype,attack,defense);
}
float calculateDamage(string a, string b, float c, float d )
{      float effectiveness;
    if (a=="fire"&&b=="grass")
    {
         effectiveness=2;
    }
    if(a=="grass"&&b=="fire")
       effectiveness = 0.5;
   if(a=="water"&&b=="fire")
     effectiveness = 2;
    if(a=="fire"&&b=="water")
    effectiveness = 0.5;
    if(a=="fire"&&b =="electric")
    effectiveness = 1;
    if(a=="electric"&&b =="fire")
    effectiveness = 1;
    if(a=="water"&&b=="grass")
    effectiveness = 0.5;
    if(a=="grass"&&b=="water")
    effectiveness = 2;
    if(a=="water"&&b=="electric")
    effectiveness = 0.5;
    if(a=="electric"&&b=="water")
    effectiveness = 2;
    if(a=="grass"&&b=="electric")
    effectiveness = 1;
    if(a=="electric"&&b=="grass")
    effectiveness = 1;
    float damage = 50*(c/d)*effectiveness;
    return damage;
}