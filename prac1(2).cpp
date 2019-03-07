#include <iostream>
#include <string>

int main(){
	float x,y,result;
	char c;
	unsigned short flag = 1;
	std::cout<<"Input your expression in format 'x @ y' (x,y - varaibales, @ - operator)\n";
	std::cin>>x>>c>>y;
	if (c == '+') result = x + y;
	else {
		if (c == '-') result = x -y;
		else flag = 0;
	}
	if (flag == 1) std::cout<<"Result is: "<<result;
	else std::cout<<"Wrong operator!";
}