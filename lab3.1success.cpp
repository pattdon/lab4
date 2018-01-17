#include<iostream>
#include<string>
using namespace std;

double finddivisor(int x){
	int max ,y=2;
	if(x>=y){
		max=y;
	}else{
		max=y+1;
	}
	
    int i =max;
    while(i>0){
	  if(x%i==0){
		return i;
	  }else{
		i++;
	  }
}
}

int main(){
	int a;
	cout <<"X:";
	cin >>a;
	cout <<finddivisor(a);	
}
