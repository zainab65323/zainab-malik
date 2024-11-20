#include<iostream>
using namespace std;
//function defination
void passByvalue(int num)	
{
	num = num + 10; //modifying the value
	cout<<"inside function (pass by value):"<< num<<endl;
}
int main()
{
	int number=5;
	cout<<"before funnction call:"<<number<<endl;
	passByvalue(number);//passing the value
	cout<<"after function call: "<< number << endl;
return 0;
}