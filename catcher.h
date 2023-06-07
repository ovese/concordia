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
    
    
    string hello;
    const char* hallos;
    double sum;
    vector<double> vsum;
	double val_temp{0.0}; // setting default values for temperatiure
    
private:
    string salutation{"Salut"}; // this is a private data string

};

#endif // CATCHER_H
