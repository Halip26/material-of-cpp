#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int std;
    string ans, trial_ans;
    
    cout << "Enter your name : ";
    cin >> name;
    cout << "\nIn which class do you study(1-12): ";
    cin >> std;
    
    cout << "\nAre you enrolled in BrightChamps?\nEnter Yes or No : ";
    cin >> ans;
    
    if ( ans == "Yes" ){
        
        if(std ==1 || std == 2 ){
            cout<<"\nWelcome, "<<name<<", You are in Little champs";
        }
        else if(3<=std && std<=6){
            cout<<"\nWelcome, "<<name<<", You are in Junior champs";
        }
        else if(7<=std && std<=12){
            cout<<"\nWelcome, "<<name<<", You are in Senior champs";
        }
        else{
            cout<<"\nYou have input an invalid class, program will exit now!";
            exit(0);
        }
    }
    else if ( ans == "No" ){
        
        cout<<"\nDo you want to enroll for a trial class(Yes/No): ";
        cin>>trial_ans;
        
        if(trial_ans == "Yes"){
            
            if(std ==1 || std == 2 ){
                cout<<"\nWelcome, "<<name<<", You will try Little champs course";
            }
            else if(3<=std && std<=6){
                cout<<"\nWelcome, "<<name<<", You will try Junior champs course";
            }
            else if(7<=std && std<=12){
                cout<<"\nWelcome, "<<name<<", You will try Senior champs course";
            }
            else{
                cout<<"\nYou have input an invalid class, program will exit now!";
                exit(0);
            }
        }
        
        else if (trial_ans == "No"){
            cout<<"Thank you for visiting the program, it will exit now!";
            exit(0);
        }
        else {
            cout<<"Worng Input, program will exit now!";
            exit(0);
        }
    }
    
    else {
        cout<<"Wrong Input, program will exit now!";
        exit(0);
    }
}
        