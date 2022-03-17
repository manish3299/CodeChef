#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	      int x,c=0;
	      scanf("%d",&x);
	      int arr[x];
	      
	      for (int i = 0; i < x; i++) 
	      {
	        
	        std::cin >> arr[i];
	      }
	      
	      int cur = arr[0];
	      
	       for(int i=0;i<x;i++)
	      {
	        if( cur >= arr[i] )
	        {
	           
	           c++;
	           cur=arr[i];
	        }
	      }
	    printf("%d\n", c);
	    
	      
	      
	      
	}
	return 0;
}
