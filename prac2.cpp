#include <iostream>
#include <string>
#include <cmath>

int main(){
	float a,b,n,m;
	std::cout<<"Input a,b: \n";
	std::cin>>a>>b;
	if (a>=b) n = pow(a-b,1/3);
	else n = a*a - (a-b)/sin(a*b);
	if (n<b) m = (n+a)/(-1*b) + sqrt(sin(a)*sin(a) - cos(n));
	else if (n>b) m = b*b*b + n*a*a;
	else m = b*b*b + tan(n*a);
	std::cout<<"n is equal to "<<n<<" m is equal to "<<m;
}