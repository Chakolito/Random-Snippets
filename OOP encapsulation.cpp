#include <iostream>
#include <string>
using namespace std;

class warrior
{
private:
    int critchance;

public:
 string type = "Physical Dps";
 void shout(){
    cout<<"RALLY DEMO BANNER UP\n";
    }
 void setcritchance(int c){
    critchance = c ;
 }
 int getCritchance(){
    return critchance;
    }

};

class arms: public warrior{
public:
    string keyspell = "Mortal Strike";
};


int main()
{
    arms mywarr;
    mywarr.shout();
    mywarr.setcritchance(20);
    cout<<mywarr.type + "   " + mywarr.keyspell<<endl;
    cout<<mywarr.getCritchance();

    return 0;
}
