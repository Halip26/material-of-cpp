// Mad Libs Game
#include <iostream>
#include <string>

using namespace std;
 
int main () {
  int date;
  float part_body;
  string adjective, adjective2, TypeOfBird, room, verb, verb2, relative_name;
  string thing, liquid, verb_ing, part_of_body, nouns, verb_ing2, noun2;
  cout<<"Enter an date of month\n: ";
  cin>>date;  
  cout<<"Enter an adjective\n";
  cin>>adjective;
  cout<<"Enter another adjective\n";
  cin>>adjective2;
  cout<<"Enter a type of bird\n";
  cin>>TypeOfBird;
  cout<<"Enter an room of house\n";
  cin>>room;
  cout<<"Enter verb in past tense\n";
  cin>>verb;
  cout<<"Enter another verb \n";
  cin>>verb2;
  cout<<"Enter a relative name\n";
  cin>>relative_name;
  cout<<"Enter a thing (noun)\n";
  cin>>thing;
  cout<<"Enter a liquid\n";
  cin>>liquid;
  cout<<"Enter a verb ending in ing\n";
  cin>>verb_ing;
  cout<<"Enter a any + ve number int or float\n";
  cin>>part_body;
  cout<<"Enter part of body(plural)\n";
  cin>>part_of_body;
  cout<<"Enter a noun(plural)\n";
  cin>>nouns;
  cout<<"Enter a verb ending in ing\n";
  cin>>verb_ing2;
  cout<<"Enter another noun\n";
  cin>>noun2;
  
  cout<<"\n\nIt was" << date << " November, a " <<adjective<< " good day.\nI woke up to the " << adjective2<< " smell of "<<TypeOfBird<< " roasting in the " <<room;
  cout<<" downstairs.\n "<<verb<<" down stairs to see if I could help "<<verb2<<" the dinner.\nMy mom said, see if "<<relative_name<<" needs a fresh "<<noun2<<endl;
  cout<<"So, I carried a tray of glass full of "<<liquid<<" in the "<<verb_ing <<" room."; 
  cout<<"When I got there I couldn't believe my "<<part_body<<" "<<part_of_body<<".There were "<<nouns<<" "<<verb_ing2<<" on the "<<noun2;
  
  return 0;
}
