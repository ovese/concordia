#ifndef CATCHER_H
#define CATCHER_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
//#include <except.h>
#include <stdexcept>
#include <cctype>
#include <vector>
#include <iomanip> // used to set the precision
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
    
    
    string hello;
    const char* hallos;
    double sum;
    vector<double> vsum;
    
private:
    string salutation{"Salut"}; // this is a private data string

};

#endif // CATCHER_H
