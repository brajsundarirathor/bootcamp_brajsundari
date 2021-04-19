// ASSIGNMENT 1

// 1. Area of Rectangle
/*
#include<iostream>
using namespace std;
int main(){
int a, b;
cout<<"Enter the length & breath of Rectanlge:";
cin>>a>>b;
cout<<"Area of Rectangle:"<<a*b;
return 0;
}*/

// 2. Area of Circle
/*
#include<iostream>
#include<math.h>
using namespace std;
int  main(){
float pi=3.14; int  r=4;
cout<<"Area of circle:"<<pi* pow(r,2);
return 0;
}*/

// 3. To Convert Celsious to Fahrenhiet
/*
#include<iostream>
using namespace std;
int main(){
float f, c;
cout<<"Enter the temprature in degree celsious:";
cin>>c;
f= (c*1.8)+32;
cout<<"Temperature converted into Fahrenhiet:"<<f;
return 0;
}*/

// 4. Print Family Memebers Name 
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
char f_n[25]="Pawan kumar Rathor", m_n[25]="Rajkumari Rathor", b_n[25]="Abhinav Rathor";
cout<<f_n;cout<<"\n"; cout<< m_n ; cout<<"\n"; cout<< b_n;
return 0;
}*/

// 5. Add, Subtract, Multiply, Division
#include<iostream>
#include<string>
using namespace std;
int main(){
	int a,b;
	float c;
	cin>>a>>b;
	c=a+b;
	cout<<"Addition of two numbers:" <<c;
	cout<<"\n";
	c=a-b;
	cout<<"Subtraction of two numbers:" <<c;
	cout<<"\n";
	c=a*b;
	cout<<"Multiplication of two numbers:" <<c;
	cout<<"\n";
	c=a/b;
	cout<<"Dividation of numbers:" <<c;
	cout<<"\n";

return 0;
}

