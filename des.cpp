#include <iostream>
#include<string>
using namespace std;

class businessman{
public:
    businessman(){
        cout<<"i am a owner of this company\n";

    }
    
    string name;
    string company;
    string post;
    ~businessman(){
        cout<<"i am a destructor";  
    }

    };

    

int main()
{
    businessman t1;
   t1.name="Nauman";
   t1.company="mexomal";
   t1.post="Founder";
   cout<<t1.name<<endl;
   cout<<t1.company<<endl;
   cout<<t1.post<<endl;
    return 0;
}