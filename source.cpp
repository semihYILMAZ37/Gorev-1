#include <iostream>
#define G 9.80665

int main(){
	double t;
	double x;
	std::cout<<"input time in terms of seconds";
	std::cin>>t;
	x = 0.5*G*t*t;
	std::cout<<x;
}
