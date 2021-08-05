/*
Wrong Subtraction
Algorithm:-
if the last digit of the number is non-zero, she decreases the number by one;
if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
*/

#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>k>>n;
	for(int i=0;i<n;i++)
	{
		if(k%10 == 0)
		{
			k = k/10;
		} else {
			k--;
		}
	}
	cout<<k;
}
