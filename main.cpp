#include<iostream>
#include<cmath>
#include<limits>
using namespace std;

int main(){
	int x,y;
	double d;
	do{
		try{
			cout<<"Enter 2 numbers: ";
			cin>>x>>y;

			if(cin.fail()){
				throw "Incorrect type entered";
			}

			if(abs(x)>1000 || abs(y)>1000){
				throw "Value out of range";
			}

			if(y==0){
				throw "Error divide by zero";
			}

			/* Normal Code */
			d=(double)x/y;
			cout<<"The result is "<<d<<"\n";
			break;
		}
		catch(const char* error){
			cout<<error<<"\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}while(true);

	return 0;
}
