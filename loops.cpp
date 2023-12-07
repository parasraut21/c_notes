/*//Ex.1)Print multiplication table 2 to 20
#include <iostream>
using namespace std;
int main()
{
   
    for(int i=1;i<=10;i++){
        cout<<2*i<<"\t"<<3*i<<"\t"<<4*i<<"\t"<<5*i<<"\t"<<6*i<<"\t"<<7*i<<"\t"<<8*i<<"\t"<<9*i<<"\t"<<10*i<<"\t"<<11*i<<"\t"<<12*i<<"\t"<<13*i<<"\t"<<14*i<<"\t"<<15*i<<"\t"<<16*i<<"\t"<<17*i<<"\t"<<18*i<<"\t"<<19*i<<"\t"<<20*i<<"\t"<<endl;
    }

	return 0;
}*/

/* //Ex.2)fibonacchi series using for loop
#include <iostream>
using namespace std;
int  main() {
    int n,c;
    cin>>n;
    int f=0;
    int s=1;
   
 for (int i=1;i<=n;i++){
     if(i==1){
         cout<<f<<endl;
         continue;
     }
     if(i==2){
         cout<<s<<endl;
         continue;
     }
     
     
     c=f+s;
     f=s;
     s=c;
     cout<<c<<endl;
     
 }*/