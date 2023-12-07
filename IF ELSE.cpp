/*Ex.1)taking values of l and b from user check if it is a sq or rec
#include <iostream>
using namespace std;
int main() {
    int length,breadth;
    cout<<"Enter length"<<endl;
    cin>>length;
  cout<<"Enter breadth"<<endl;
  cin>>breadth;
  if(length==breadth){
      cout<<"square"<<endl;
  }
  else {
      cout<<"rectangle"<<endl;
  }
  return 0;
}*/


/*ex.2)Take input of age of 3 people by userc, determinethe oldest one
#include <iostream>
using namespace std;
int main() {
   int age1 ,age2, age3;
   cout<<"Enter the age of three people"<<endl;
   cin>>age1>>age2>>age3;
   if(age1>age2&&age1>age3){
       cout<<"Age of first person is oldest"<<endl;
      } else if(age2>age1&&age2>age3){
           cout<<"age of the second person id oldest one"<<endl;
       }
       else{
           cout<<"third person is oldest one\n";
       }
   

    return 0;
}*/

/*ex.3)A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.
  #include <iostream>
  using namespace std;
   int main() {
   int years,salary;
   cout<<"Enter your years of experience"<<endl;
   cin>>years;
   cout<<"Enter your salary"<<endl;
   cin>>salary;
   if(years>=5){
       cout<<"you are eligible for bonus"<<endl;
       cout<<"Your bonus is.."<<salary+salary*5/100<<endl;
   }
   else {
      cout<<"you are not eligible for bonus"<<endl;
   }

    return 0;
}*/