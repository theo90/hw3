/*#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------

int main(){
   const int N = 100;
   double p[N];
   double mean, var;

   // Some lines here....

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}*/
#include <iostream>
#include <cstdlib>
#include "time.h"
#include <iomanip>
#include <cmath>


using namespace std;

void func_arr(double *p, const int n);
void func_m_v(double *arrp, double &m, double &v, const int n);
int main()
{
	const int n=100;
	double arr_x[n];
	char rep;
	double m,v;

	do{
		func_arr(arr_x, n);
		func_m_v(arr_x, m, v, n);
		cout<<"-------"<<endl;
		cout<<"m: "<<m<<" v: "<<v;
		cout<<"\n array noch mal starten (j/n)";
		cin>>rep;
	}while(rep=='j');
	if(rep=='n')
		cout<<"\nfinish \n";
    return 0;
}

void func_arr(double *arrp, const int n)
{
	
    srand((unsigned)time (NULL));              
	for(int i=0; i<n; i++)
		arrp[i]=(double) rand()/ RAND_MAX;
	for(int i=0; i<n; i++)
		cout<<setprecision(5)<<arrp[i]<<endl;
}
void func_m_v(double *arrp, double &m, double &v, const int n)
{
	double  sum=0,sum1=0;
	for(int j=0; j<n; j++)
	{
		sum+=arrp[j];
	}
	m=sum/n;
	for(int j=0; j<n; j++)
	{
		sum1+=pow((arrp[j]-m),2);
	}
	v=sum1/n;
	//cout<<"m: "<<m<<"v: "<<v<<endl;
}

