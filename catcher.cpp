#include "catcher.h"

Catcher::Catcher()
{
    cout<<"Starting constructor"<<endl;
}

Catcher::~Catcher()
{
    cout<<"Exiting program in destructor"<<endl;
}

string Catcher::problemOne()
{
    cout<<"printing out a greeting string"<<endl;
    cout<<"Enter some salutation:\n"<<endl;
    try
    {
        // do somethjing here which can cause an exception
        cin>>hello;
        int word_len=hello.size();
        if(true==isdigit(0))
        {
            throw std::invalid_argument("salutation cannot be empty string");
        }
        else if(word_len<2)
        {
            throw std::invalid_argument("salutation cannot be single letter");
        }
        else if(word_len>15 && word_len<30)
        {
            
            throw("Salutation is too long");
        }
        else
        {
            salutation=hello;            
        }
        
    }
    catch(std::invalid_argument& e)
    {
        // print out the exception to be caught 
        cerr<<e.what()<<endl;
    }
    catch(std::invalid_argument& e)
    {
        // print out second exception to be caught here
        cerr<<e.what()<<endl;
    }
    catch(const char* msg)
    {
        cerr<<msg<<endl;
    }
    
    return salutation;     // i am returning the privat edata member
}

double Catcher::problemTwo(double d1, double d2)
{
    cout<<"***** In the function that uses pass by value*****"<<endl;
    double ans=0.0;
    ans=d1+d2;
    cout<<"Sum of d1="<<d1<<" and d2="<<d2<<" = "<<ans<<endl;
    
    return ans;
}

double Catcher::problemTwoo(double& d1, double& d2)
{
    cout<< " *****In the function that uses reference argument***** "<<endl;
    double ans=0.0;
    ans=d1+d2;    
    
    return ans;
}

vector<double> Catcher::problemTwovec(vector<double> v1, vector<double> v2)
{
    cout<<"Summing up two vectors using pass by value"<<endl;
    int sz_vec1, sz_vec2;
    sz_vec1=v1.size();
    sz_vec2=v2.size();
    
    try
    {
        if(sz_vec1!=sz_vec2)
        {
            throw("vector size mismatch detected");
        }
        else if(sz_vec1==sz_vec2)
        {
            for(int ii=0;ii!=sz_vec1;++ii)
            {
                // add the two vectors here an return result
                vsum.push_back(v1[ii]+v2[ii]);
            }
        }
    }
    catch(const char* msg)
    {
        cerr<<"Thrown exception: "<<msg<<endl;
    }
    
    return vsum;
}


vector<double> Catcher::problemTwoovec(vector<double> &vc1, vector<double> &vc2)
{
    cout<<"Summing up two vectors using pass by Reference"<<endl;
    int sz_vec1, sz_vec2;
    sz_vec1=vc1.size();
    sz_vec2=vc2.size();
    
    try
    {
        if(sz_vec1!=sz_vec2)
        {
            throw("---Vector size mismatch detected");
        }
        else if(sz_vec1==sz_vec2)
        {
            for(int ii=0;ii!=sz_vec1;++ii)
            {
                // add the two vectors here an return result
                vsum.push_back(vc1[ii]+vc2[ii]);
            }
        }
    }
    catch(const char* msg)
    {
        cerr<<"Thrown exception for vector passe by reference: "<<msg<<endl;
    }
    
    return vsum;
}

double Catcher::problemThree(double meter_var)
{
    cout<<" Unit conversion: meter to feet"<<endl;
    // 1 meter = 3.28084
    double feet_var=meter_var*3.28084;
    
    return feet_var;
}

double Catcher::problemThreeUnits(double val, string unit)
{
    double conv_res=0.0;
    if(unit=="ft")
    {
        conv_res=val*3.28084;
        cout<<"Conversion to: "<<unit;
    }
    else if(unit=="cm")
    {
        conv_res=val*100;
        cout<<"Conversion to: "<<unit;
    }
    else if(unit=="yard")
    {
        conv_res=val/0.914;
        cout<<"Conversion to: "<<unit;
    }
    else
    {
        cout<<unit<<" is not a known length measurement unit"<<endl;
    }
    
    return conv_res;
}

void Catcher::problemFour(double val)
{
	cout<<"The value to be converted is: "<<val<<endl;
	// check to see the magnitude of the value argument in the passed to the function
		cout<<"Convert to fahrenheit"<<endl;
		double val_fah = (val * 9/5) + 32.0 ;
		cout<<"Convert to centigrade"<<endl;
		double val_cent = (val-32.0)*(5/9);
		cout<<"Convert to Kelvin"<<endl;
		double val_kelv = val_cent + 273.15;
		cout<<"Convert to Rankine"<<endl;
		double val_rank = val_cent * (9/5) + 491.67;
		cout<<"The temperature converter results in: "<<val_fah<<" Fahrenheit"<<endl;
		cout<<"The temperature converter results in: "<<val_cent<<" Centigrade"<<endl;
		cout<<"The temperature converter results in: "<<val_kelv<<" Kelvin"<<endl;
		cout<<"The temperature converter results in: "<<val_rank<<" Rankine"<<endl;		
}

double Catcher::problemFourEx(double val, string unit)
{
	cout<<"The needed temperature is in: "<<unit<<endl;
	if(unit=="degF")
	{
		cout<<"Convert to fahrenheit"<<endl;
		double val_fah = (val * 9.0/5.0) + 32.0 ;
		val_temp=val_fah;		
	}
	else if(unit=="degC")
	{
		cout<<"Convert to centigrade"<<endl;
		double val_cent = (val-32.0)*(5.0/9.0);
		val_temp=val_cent;
	}
	
	return val_temp;
}

void Catcher::problemFive()
{
	// char regex_filename[] = “[a-zA-Z_] [a-zA-Z_0-9]*\\.[a-zA-Z0-9]+”;
	// Match a letter (lowercase and then uppercase) or an underscore. 
	// Then match zero or more characters, in which each may be a letter, 
	// or an underscore or a digit. Then match a literal dot (.). After the dot, 
	// match one or more characters, in which each may be a letter or digit indicating file extension
	
	std::regex regex_fval("[0-9]*\\.[0-9]*");
	// multiplication of two floating point numbers
	float f1,f2;
	
	cout<<"enter two floating point numbers to multiply: "<<endl;
	cin>>f1>>f2;
	cout<<"testing type of regex expression: "<<regex_match(to_string(f1),regex_fval)<<endl;
	try
	{
		if( regex_match(to_string(f1),regex_fval) && regex_match(to_string(f2),regex_fval) )
		{
			throw("Non floating point entry detected");
		}
		else
		{
			double flores=f1*f2;
			cout<<"The floating point product of "<<f1<<"*"<<f2<<"="<<flores<<endl;
		}
	}
    catch(const char* msg)
    {
        cerr<<"Thrown exception for incorrect input type: "<<msg<<endl;
    }
}
