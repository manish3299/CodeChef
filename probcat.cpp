#include <iostream>
using namespace std;

int main() {
	int x,t;
	cin>>t;
	while(t--)
	{
	    cin>>x;
	    if(x>=1 && x<100)
	    {
	      cout<<"Easy"<<endl;  
	    }
	    else if(x>=100 && x<200)
	    {
	       cout<<"Medium"<<endl;   
	    }
	    else
	    {
	       cout<<"Hard"<<endl;   
	    }
	}
	
}
