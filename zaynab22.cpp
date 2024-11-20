#include<iostream>
using namespace std;
//function defination
int passByvalue(int num)	
{
	num = num + 10; //modifying the value
	cout<<"inside function (pass by value):"<< num<<endl;
}
void mult(int mul)
{
	mul = mul * 10; //modify the value
	cout<<"inside function (pass by value):"<<mul<<endl;
}
void subt(int sub)
{
sub = sub - 10;//modifying the value
cout<<"inside function(pass by value):"<<sub<<endl;
}
int main()
{
	int number=5,multiply=4,subtraction=5;
	cout<<"before funnction call:"<<number<<endl;
	passByvalue(number);//passing the value
	cout<<"after function call: "<< number << endl;
	cout<<"before function call:"<<multiply<<endl;
	mult(multiply);//passing the value
	cout<<"before function call:"<<subtraction<<endl;
	subt(subtraction);//passing by value
	cout<<"after function call:"<<subtraction<<endl;
return 0;
}