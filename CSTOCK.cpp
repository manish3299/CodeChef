#include <iostream>
using namespace std;
//#define ll long long int

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	      
	      int s,a,b;
	      int c;
	      cin>>s>>a>>b>>c;
	  
	      float k=(c*s/100.0);
         
	      
	      if( (s+k>=a)&&(s+k<=b) )
	      {
	             cout<<"YES"<<endl;
	      }
	      else
	      {
	             cout<<"NO"<<endl;
	      }
	      
	      
	}
	return 0;
}
