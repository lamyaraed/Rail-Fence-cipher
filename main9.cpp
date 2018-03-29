#include <iostream>
#include <cstring>
#include <string>
using namespace std;
char cov = 'y' ;
char cov1 = 'y';
char cov2 ;
int main()
{

    while (cov1 == cov ){

    cout << "Welcome!"<< endl;
    cout << "What do you like to do today"<< endl;
    cout << "for cipher message enter 1"<<endl <<"for decipher message enter 2"<< endl  ;
    int x ;
    cin >>  x ;
    if (x=='1') {
        string text ;
        cout << "Enter text :" ;
        getline (std::cin,text);
        getline (std::cin,text);
        cout << endl ;
        int len = text.length() ;
        for (int i = 0 ; i < len ; i = i +4)
        {
            cout << text[i] ;
        }
        for (int i = 1 ; i < len ; i = i +2)
        {
            cout << text[i] ;
        }
        for (int i = 2 ; i < len ; i = i +4)
        {
            cout << text[i] ;
        }
        cout << endl;
    }

	else
        (x=='2') ;{

          string text ;
          cout << "Enter text :" ;
          getline (std::cin,text);
          getline (std::cin,text);
          cout << endl ;
          int len = text.length() ;
          for (int i = 0 ; i < len ; i = i +4)
          {
              cout << text[i] ;
          }
          for (int i = 1 ; i < len ; i = i +2)
          {
              cout << text[i] ;
          }
          for (int i = 2 ; i < len ; i = i +4)
          {
              cout << text[i] ;
          }
          cout << endl;
    }
    cout<<"if you wont to cipher again enter y "<<endl;
    cout << "if you want to end the program enter n" << endl;
    cin>>cov2;
    cov = cov2 ;
    }
    cout << "goodbye!"<<endl;
    return 0;
}
