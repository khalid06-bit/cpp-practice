#include<iostream>
using namespace std;
  int main(){
	int SP;
	    cout<<"Enter Selling Price= ";
	    cin>>SP;
	 int CP;
	    cout<<"Enter Cost price= ";
	    cin>>CP;
	  if(SP>CP)
	    cout<<"PROFIT= "<<SP-CP;
	  else if(SP==CP)
	    cout<<"NO GAIN NO LOSS";
	  else
	    cout<<"LOSS= "<<CP-SP;
	                            
}
