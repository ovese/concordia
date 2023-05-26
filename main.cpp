#include "catcher.h"

int main(int argc, char **argv)
{
	printf("Cpp tests\n");
    Catcher ct;
    ct.hello=ct.problemOne();
    cout<<"The first greeting printed as default is: "<<ct.hello<<endl;
    
    ct.sum=ct.problemTwo(19,19);
    cout<<"Calling the first sum by value: "<<ct.sum<<endl;
    
    
    double val1=23.785;
    double val2=67.324;
    ct.sum=ct.problemTwoo(val1,val2);
    cout<<"Calling the second sum  by reference: "<<ct.sum<<endl;
    
    vector<double> tvec1{1,2,3,4,5,11};
    vector<double> tvec2{6,7,8,9,10,12};
    
    ct.vsum=ct.problemTwovec(tvec1,tvec2);    
    int sz_res=ct.vsum.size();
    cout<<"The size of resulting vector is: "<<sz_res<<endl;
    for(int ii=0;ii!=sz_res;++ii)
    {
        cout<<"vsum["<<ii<<"]="<<ct.vsum[ii]<<endl;
    }
    
    vector<double> tv1{1.56,2.21,3.05,4.75,5.78,11.003};
    vector<double> tv2{6.005,7.2741,8.78,9.23,10.154,12.098};
    vector<double> res;
    res=ct.problemTwoovec(tv1,tv2);    
    int sz_ans=res.size();
    cout<<"The size of resulting vector is: "<<sz_ans<<endl;
    for(int ii=0;ii!=sz_ans;++ii)
    {
        cout<<"res["<<ii<<"]="<<res[ii]<<endl;
    }
    
    double meter_val=5.6;
    double conv2feet=ct.problemThree(meter_val);
    cout<<"converting from meter to feet: "<<conv2feet<<endl;
    
    double conv2=ct.problemThreeUnits(meter_val,"yard");
    cout<<" "<<meter_val<<" = "<<conv2<<endl;
    
	return 0;
}
