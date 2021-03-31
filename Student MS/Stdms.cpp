#include<fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main ()
{

   int x ,y,z;
   cout<<"\t\t\t\t\t\t"<<endl
       <<"\t\tWELCOME TO MOTIJHEEL IDEAL SCHOOL"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t1.About School\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t2.Information\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t3.Contacts\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t4.Schedule/Routine\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t5.Result\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t6.Admin Login/Student Login/Teacher's Login\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl

       <<"\t\tThank You For Staying With Us\t\t\t"<<endl;

    cin>>x;
   switch(x)
   {
   case 1:
       system("CLS");
         {
        string line;
        ifstream myfile ("About.txt");
          if (myfile.is_open())
           {
             while ( getline (myfile,line) )
               {
                  cout << line << '\n';
               }
          myfile.close();
           }

        }
    break;
    case 2:
        system("CLS");
   cout<<"  \t\t\tInformation\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t[1]Teachers Information\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl
       <<"\t\t\t[2]Students information\t\t\t"<<endl
             <<"\t\t\t\t\t\t"<<endl;
             cin>>y;
   switch(y)
   {
   case 1:
             break;
   case 2:
             break;
   default:
    cout<<"\t\t\tInvalid value! \n\t\t\tInput The valid Value"<<endl;
   }
             break;
   case 3:
           system("CLS");
           cout<<"\t\t\t*Contacts*\t\t\t"<<endl
                <<"\t\t\t\t\t\t"<<endl
            << "\t\t\t*CoMMinG SooN*\t\t\t"<<endl;
             break;
   case 4:
           system("CLS");
           cout<<"\t\t\t*Schedule/Routine*\t\t\t"<<endl
                <<"\t\t\t\t\t\t"<<endl
            << "\t\t\t*CoMMinG SooN*\t\t\t"<<endl;
             break;

   case 5:
           system("CLS");
           cout<<"\t\t\t*Result*\t\t\t"<<endl
                  <<"\t\t\t\t\t\t"<<endl
               <<"\t\t\t*Still Working*\t\t\t"<<endl;
            break;
   case 6:
           system("CLS");
           cout<<"\t\t\t\t*Login*\t\t\t"<<endl
                  <<"\t\t\t\t\t\t"<<endl
               <<"\t\t\t\t[1]Admin Login(Can Only Modify the Information)"<<endl
               <<"\t\t\t\t[2]Student Login(showing Their Results)"<<endl
               <<"\t\t\t\t[3]Teacher's Login(They can only use it for submit marks"<<endl;
                cin>>z;
   switch(z)
   {
   case 1:
       cout<<"\t\t\t*Still Working*\t\t\t"<<endl;
             break;
   case 2:
       cout<<"\t\t\t*Still Working*\t\t\t"<<endl;
             break;
   case 3:
       cout<<"\t\t\t*Still Working*\t\t\t"<<endl;
             break;
   default:
    cout<<"\t\t\tInvalid value! \n\t\t\tInput The valid Value"<<endl;
   }
            break;


   }
   return 0;
}


