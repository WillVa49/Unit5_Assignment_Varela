//Wilfrido Varela COSC-1437   11/29/2020
//Converting a struct style menu into an Object-Oriented process
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class greenTea
{
  private:
    string name;
    double itemCost;
    string desc;
    char addLetter;
    char removeLetter;
    int count;
  public:
  greenTea()
  {
    name = "Green Tea";
    itemCost = 3.00;
    desc = "Best tea in town!";
    addLetter = 'A';  
    removeLetter = 'a';
    count = 0;
  }
  void setName (string n) {name = n;}
  void setItemCost ( double ic) {itemCost = ic;}
  void setDesc (string d) {desc = d;}
  void setAddLetter (char al) {addLetter = al;}
  void setRemoveLetter (char rl) {removeLetter = rl;}
  void setCount (int c) {count = c;}
  string getName() const {return name;}
  double getItemCost() const {return itemCost;}
  string getDesc() const {return desc;}
  char getAddLetter() const {return addLetter;}
  char getRemoveLetter() const {return removeLetter;}
  int getCount() const {return count;}
};

class itemMenu
{
  private:
    greenTea item1;
  public:
  void showMenu()
  {
    cout << "Dr_T's Menu:" << endl;

    cout << item1.getAddLetter() << ")" << setw(10) << item1.getName() << setw(5) << "$" << item1.getItemCost() << setw(5) << "(" << item1.getRemoveLetter() << ")" << setw(7) << item1.getCount() << "\t" << item1.getDesc() << endl;
  }
};


int main() 
{
  greenTea();
  itemMenu i;
  i.showMenu();

 return 0;
}