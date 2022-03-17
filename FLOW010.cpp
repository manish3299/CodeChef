#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	while(n--)
	{
	      char a;
	      cin >> a;
	      if(a == 'b' || a == 'B')
	      {
	            cout<<"BattleShip"<<endl;
	      }
	      else if(a == 'c' || a == 'C')
	      {
	            cout<<"Cruiser"<<endl;
	      }
	      else if(a == 'd' || a == 'D')
	      {
	            cout<<"Destroyer"<<endl;
	      }
	      else 
	      {
	            cout<<"Frigate"<<endl;
	      }
	      
	}
	
	
	return 0;
}
