#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name); 
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";

    int a,b,c;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": " ;

    string id;
    cin >> id;

    a = (int)id[0];
    b = (int)id[1];
    
    if((a-48)*10+(b-48) >=13){
        c = (a-48)*10+(b-48) - 12;
    cout << "Fahsai: I think you may be GEAR " << c <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    }
    
    string movie;
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": " ;
    cin.ignore();
    getline(cin,movie);


    string day, bye;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": " ;
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching "<< movie <<" with you.\n";
    cout << name << ": " ;
    cin.ignore();
    getline(cin,bye);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye " << "\\" <<"(^ ^)/";

    return 0;


}
