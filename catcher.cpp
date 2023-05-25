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
