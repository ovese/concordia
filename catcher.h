#ifndef CATCHER_H
#define CATCHER_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string>
//#include <except.h>
#include <stdexcept>
#include <cctype>
#include <vector>
#include <iomanip> // used to set the precision
#include <regex>
using namespace std;


class Catcher
{
public:
    Catcher();
    ~Catcher();
    string problemOne();
    double problemTwo(double, double);
    double problemTwoo(double&, double&);
    vector<double> problemTwovec(vector<double>, vector<double>);
    vector<double> problemTwoovec(vector<double>&, vector<double>&);
    double problemThree(double);
    double problemThreeUnits(double,string);
	void problemFour(double); // this functions takes either celsius or fahrenheit values
	double problemFourEx(double, string);
	void problemFive();
	void problemFiveEx(vector<float>);
	
	// this problem is demonstrating pointer arithmetic and logic in any way c++ supports this functionality
	void problemPtr(); // empty parameter list
	void problemPtrV1(string, int, double, char);
    
    
    string hello;
    const char* hallos;
    double sum;
    vector<double> vsum;
	double val_temp{0.0}; // setting default values for temperatiure
    
private:
    string salutation{"Salut"}; // this is a private data string

};


class Complex
{
private:
	float cr{0.0},ci{0.0};
public:
	Complex(float cr, float ci)
	{
		this->cr=cr;
		this->ci=ci;
	}
	Complex(){}
	
	void displayData()
	{
		cout<<"Real part: "<< cr<<endl;
		cout<<"Imaginary part: "<< ci<<endl;
	}
	
	void displayDataV2()
	{
		cout<<"Real part: "<< cr<<endl;
		cout<<"Imaginary part: "<< ci<<endl;
	}
	
	// this is where the operator overloading takes place
	// it should be studeied properly
	Complex operator +(Complex c)
	{
		return Complex(cr+c.cr, ci+c.ci);
	}
	
};

class Car
{
private:
	string color{"white"};
	string veh{"car vehicle"};
public:
	Car(){cout<<"In default Car ctor"<<endl;}
	Car(string veh)
	{
		this->veh=veh;
	}
	void brand(){cout<<"Parent brand function for cars class"<<endl;}
	void getColor(){cout<<"Default vehicle color is: "<<color<<endl;}
	virtual void accelerate()
	{
		cout<<"Base class"<<endl;
	}
};

class BMW : public Car
{
private:
string color{"Black"};
	string veh{"vehicle type"};
public:
	BMW(){cout<<"In default BMW ctor"<<endl;}
	BMW(string veh)
	{
		this->veh=veh;
	}
	void brand(){cout<<"The child brand function in BMW"<<endl;}
	void getColor(string col){cout<<"The color of the BMW is "<<col<<endl;}
	void accelerate()
	{
		cout<<"In the derived class...implementing the virtual parent function"<<endl;
	}
};

class GFG {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    GFG()
    {
        private_variable = 10;
        protected_variable = 99;
    }
 
    // friend class declaration
    friend class F;
};

// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
class F {
public:
    void display(GFG& t)
    {
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable << endl;
    }
};

class base {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    base()
    {
        private_variable = 19;
        protected_variable = 38;
    }
     
      // friend function declaration
    friend void friendFunction(base& obj);
};
 
 
// global friend function definition
// void friendFunction(base& obj)
// {
    // cout << "Private Variable: " << obj.private_variable
         // << endl;
    // cout << "Protected Variable: " << obj.protected_variable;
// }




#endif // CATCHER_H
