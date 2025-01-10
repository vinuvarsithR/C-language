#include<iostream>
void happybirthday(std::string name);

int main(){
  std::string name = "vinu";
  happybirthday(name);
  return 0;
}

void happybirthday(std::string name){
  std::cout<<"Happy bday "<<name<<'\n';
  std::cout<<"Happy bday to you "<<name<<'\n';
  std::cout<<"Happy bday to you mf "<<name<<'\n';
}