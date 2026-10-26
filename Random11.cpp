#include<iostream>
#include<random>
using namespace std;
int main(){
 	random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int>range(1,11);
        int randomm=range(gen);
        cout<<"our random number is:" "";
        cout<<randomm<<endl;
	switch(randomm){
		case 0:
			cout<<"your subscription has expired!!\n";
			break;

		case 1:
			cout<<"your subscription will expire soon.Renew now!!\n";
			cout<<"Renew now and save 20%\n";
			break;

		case 2:
		case 3:
		case 4:
		case 5:
			cout<<"your subscription expires in"<<" "<<randomm<<" "<<"days"<<endl;
			cout<<"Renew now and save 10%\n";
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		
			cout<<"your subscription expires in"<<" "<<randomm<<" "<<" "<<"days"<<endl;
			cout<<"Renew now and save 10%\n";
			break;

		dafualt:
			cout<<"you have an active subscription\n";
			break;

	}
        return 0; 
}