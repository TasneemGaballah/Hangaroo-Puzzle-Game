#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int count ( string v , char w)
{
    int cnt = 0 ;
    for (int i=0 ; i < v.size() ; ++i)
        if(v[i]== w)
        cnt++;
    return cnt++;
}

int main()
{
    srand(time(0));
    int random = rand()% 20 + 1 ;


    string arr [20] = { "lina" , "hamza" , "sara" , "ebraheem" , "lareen" , "mawada" , "toqa" , "lenda" , "lyan" , "loly" , "zoza" , "soso" ,"body"
                      , "lareena" , "wada" ,"koka" , "lollty" , "lola" , "tamim" , "taya" } ;

    string y  ;
    char X;
    y = arr[random];
    string s( 11, '*');

    int no_of_tryes = 3 ;

    cout << "\t" << "\t" <<" Welcome To The GAME " << endl;
    cout << endl;
    cout << endl;
    cout << " -> Guess the letters of the word <-"<<endl;
    cout << "\t" ;
    string T( y.size(), '-') ;
    cout << T << endl;


    for (int I=0 ; I < y.size()+3 ; ++I )
        {
            cout <<"\n"<< "Enter a Character: " << "\n";
            cin >> X;
            int Cnt=0;
            int CNT=0;
            for (int j=0 ; j< y.size()+3 ; ++j){
                 if(X ==y[j]){
                 if (T[j] != y[j]){
                     T[j] = y[j];
                Cnt++;
                 }
                 else
                    CNT++;
            }
            }
            if( CNT > 0)
            {
                cout << X << " is duplicate character. " << endl;

            }
            if (Cnt ==0)
            {
                no_of_tryes--;
                if (no_of_tryes==-1)
                {
                    cout << " You have consumed all attempts " << endl << "\t" << " Game Over. " << endl;
                    return 0;
                }
                cout << "\n" << X << " is wrong char. try again ."<< no_of_tryes << endl;
            }
            else
                cout << T << endl;

            if ( count ( T , '-')==0 ){
       cout << "\t" << s << endl << "\t" << "* You_Win *" << endl<< "\t" << s << endl;
       break;
            }

}
      return 0;

       }




