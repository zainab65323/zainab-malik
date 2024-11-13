#include<iostream>
using namespace std;
int main()
{
int rows,cols;
int sum=0;
cout<<"enter the number of rows:";
cin>>rows;
cout<<"enter the number of columns:";
cin>>cols;
//declare 2D array
int array[rows][cols];
cout<<"enter elements of the array:\n";
for(int i=0; i<rows; i++)
{
for(int j=0; j<cols; j++)
{
cout<<"element["<< i << "]["<< j << "]: ";
cin>> array[i][j];
}
}
cout<<"\nThe 2D array is:\n";
for(int i=0; i<rows; i++){

for(int j= 0; j<cols; j++)

{
	
	cout<< array [i][j]<<" ";
	
}	cout<< endl;
}



return 0;
}
