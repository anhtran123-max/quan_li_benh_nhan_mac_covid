#include "Patients.hpp"
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[]){
    system("color b0");
    BST list;
    char password[6];
    char check_password[6] = "12345";
    int i, time = 3;
    cout << setw(135) <<"############################   LOGIN   ###########################" << endl;
    cout << setw(135) <<"#================================================================#" << endl;
    cout << setw(107) <<"Please enter password (5 characters): ";
    while(1){
        for(i = 0; i < 5; i++){
            password[i] = getch();
            cout << "*";
        }
        password[i] = '\0';
        if(strcmp(check_password,password) == 0){
            list.function();
            break;
        }else{
            cout<<endl<<setw(135) <<"------------------------------------------------------------------" << endl;
            cout<<setw(107)<<"YOU STILL HAVE " << time << " ACCESS" << endl;
            time--;
            if(time == -1){
                break;
            }
            cout << setw(135) <<"############################   LOGIN   ###########################" << endl;
            cout << setw(135) <<"#================================================================#" << endl;
            cout << setw(107) <<"Please enter password (5 characters): ";
            }
    }
    return 0;
}
