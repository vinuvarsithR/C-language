#include<iostream>
void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping2, std::string topping1);
int main(){
  bakepizza("pepporoni","mayo");
  return 0;
}

void bakepizza(){
  std::cout<<"Here is your pizza";
}
void bakepizza(std::string topping1){
  std::cout<<"Here is your "<<topping1<<" pizza";
}
void bakepizza(std::string topping2, std::string topping1){
  std::cout<<"Here is your "<<topping1<<" and "<<topping2<<" pizza";
}