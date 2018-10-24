#include<iostream>
int add(int first, int second)
{
	
	std::cout << "in add(),recieved " << first << " and " << second << "\n";
	return(first + second);
}
int main()
{
	int a, b, c;
	using std::cout;
	using std::cin;
	cout << "enter two numbers:\n";
	cin >> a;
	cin >> b;
	c = add(a, b);
	cout << "the sum =\n"<<c<<"\n";
	
	system("pause");
	return 0;
}
