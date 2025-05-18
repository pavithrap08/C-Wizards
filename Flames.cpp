
#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
string sc;

void uncommon(string a,string b)
{
    for(int i=0;i<a.length();i++)
    {
        int f=0;
        for(int j=0;j<b.length();j++)
        {
            if(a[i]==b[j])
            {
                f=1;
                break;
            }
        }
        if(f==0) sc+=a[i];
    }
}


int main()
{
 cout<<"Hi and Welcome to Flames where Relationship finds it's Reality.\nTo start  type 'b' to enter the game ";
 char begin;
 cin>>begin;
 if(!(begin=='b' || begin=='B'))
 {
     cout<<"Bye!!";
    return 0;
 }
string s1;
string s2;
cout<<"ENTER NAME 1:\n";
cin>>s1;
cout<<"ENTER NAME 2:\n";
cin>>s2;
uncommon(s1,s2);
uncommon(s2,s1);
cout<<"Uncommon letters are "<<sc<<"and its length is ";

int count=(sc.length());
cout<<count<<endl;
count=count%6;
vector<string>arr={"Friends","Lover","Affection","Marraige","Enemy","Siblings"};

cout<<"Their Relationship is "<<arr[count];

    return 0;
}
