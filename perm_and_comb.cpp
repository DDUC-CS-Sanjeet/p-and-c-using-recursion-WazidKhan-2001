#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if(r>0)
	return n*permutation(n-1,r-1);
	else
	return 1;
}

int combination(int n, int r)
{
	if(r>0)
	   return (n)*combination(n-1,r-1)/r;
    else
       return 1;
}

int main()
{
	int x,y;
	cout<<"Enter Number of Objects From which Permutation and Combination is Formed :";
	cin>>x;
	cout<<"Enter Number of Selected Objects To Formed Permutation and Combination : ";
	cin>>y;
	try
	{
		if(x<0||y<0)
		throw(100);
		
		else
		{
		  cout<< "The Number of Permutations of "<< x<<" Objects Taken "<<y<<" At a Time is "<<"P("<<x<<","<<y<<") = "<<permutation(x,y);
       	  cout<< "\nThe Number of Combination of "<< x<<" Objects Taken "<<y<<" At a Time is "<<"C("<<x<<","<<y<<") = "<<combination(x,y);
		}
	}
	catch(int a)
	{
		cout<<"You Entered A Negative Number :) ";
	}
	
    return 0;
}
