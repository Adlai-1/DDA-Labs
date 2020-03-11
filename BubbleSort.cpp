#include<iostream>
using namespace std;


int main(){
  int dave[]={12,20,4,7,10,2};
  
  for(int a =0;a < 6;a++){
  	
  	for(int b = 0;b<6;b++){
  		if(dave[b]>dave[b+1]){
  			int temp = dave[b];
  			dave[b] = dave[b+1];
  			dave[b+1]=temp;
		  }
	  }
  }	
	for(int c=0;c<6;c++){
		cout<<dave[c]<<""<<endl;
		
	}
	
	
	return 0;
}
