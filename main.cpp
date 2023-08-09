// Implementation of Majority Element in C++
#include < bits/stdc++.h>
using namespace std ;
int main()
{
  int n; //length of the array.
cin>>n;
int a[n]; //array of length n
for (int i=0, i<n; i++)
{
cin>>a[i];
}
int count1 = 0, count2 = 0;
int first = INT_MIN, second =INT_MIN;
for (int i= 0, i<n, i++)
  {
  if(a[i] == first)
  {
  count1++;
}
else if(a[i] == second)
{
count2++;}
else if (count1 == 0)
{
count1++;
  first = a[a];
}
else if (count2 == 0) 
  {count2++;
second =a[i];
  }
else
{ 
count1--; 
count2;
}
}
count1=0; 
count2 = 0;
for (int i=0; i<n; i++)
  {
    if(a[i] == first)
    {
      count1++;
    }
    else if (a[i] ==second)
    {count2++;}}
    if (count1 >n/3)
    {
      cout <<first<<" ";
    }
else if (count2>n/3)
{
  cout << second<< "\n";
}
  cout<<endl;
else {
  cout << -1;} //No majority element
int flag =0; //checking if any measure or not.
if (count1 > n/3)
{
  cout<< first <<endl;
  flag1;
}
if( count2 > n/3)
{
  cout << second<< endl;
  flag1;
}
if (flag == 0)
{
  cout << -1 << endl;
}
return 0;   
}
