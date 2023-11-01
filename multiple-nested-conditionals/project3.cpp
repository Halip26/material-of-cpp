#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int grade;
    string answer, trial_answer;
    
    cout << "Enter your name : ";
    cin >> name;
    cout << "\nIn which class do you study(1-12): ";
    cin >> grade;
    
    cout << "\nAre you enrolled in BrightChamps?\nEnter Yes or No : ";
    cin >> answer;
    
    if ( answer == "Yes" || answer == "yes"){
        
        if(grade == 1 || grade == 2 ){
            cout<<"\nWelcome, "<<name<<", You are in Little champs";
        }
        else if(3<=grade && grade<=6){
            cout<<"\nWelcome, "<<name<<", You are in Junior champs";
        }
        else if(7<=grade && grade<=12){
            cout<<"\nWelcome, "<<name<<", You are in Senior champs";
        }
        else{
            cout<<"\nYou have input an invalid class, program will exit now!";
            exit(0);
        }
    }
    else if ( answer == "No" || answer == "no"){
        
        cout<<"\nDo you want to enroll for a trial class(Yes/No): ";
        cin>>trial_answer;
        
        if(trial_answer == "Yes" || trial_answer == "yes"){
            
            if(grade ==1 || grade == 2 ){
                cout<<"\nWelcome, "<<name<<", You will try Little champs trial course";
            }
            else if(3<=grade && grade<=6){
                cout<<"\nWelcome, "<<name<<", You will try Junior champs trial course";
            }
            else if(7<=grade && grade<=12){
                cout<<"\nWelcome, "<<name<<", You will try Senior champs trial course";
            }
            else{
                cout<<"\nYou have input an invalid class, program will exit now!";
                exit(0);
            }
        }
        
        else if (trial_answer == "No" || trial_answer == "no"){
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
        