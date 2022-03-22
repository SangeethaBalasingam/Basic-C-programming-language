#include <iostream>
using namespace std;
 void welcomemessage(string fname,string Lname)
 {
     cout<<"Welcome "<<fname<<Lname<<" to the online registration portal";
 }

int main() {
    string fname;
    string Lname;
  cout << "Enter the First name: \n";
  cin>> fname;
  cout<<"Enter the lastname:\n";
  cin>> Lname;
  welcomemessage(fname,Lname);

  return 0;
  }
