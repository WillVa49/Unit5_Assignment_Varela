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

class burrito
{
  private:
    string name;
    double itemCost;
    string desc;
    char addLetter;
    char removeLetter;
    int count;
  public:
  burrito()
  {
    name = "Burrito";
    itemCost = 4.00;
    desc = "Best burrito in town!";
    addLetter = 'B';  
    removeLetter = 'b';
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

class taco
{
  private:
    string name;
    double itemCost;
    string desc;
    char addLetter;
    char removeLetter;
    int count;
  public:
  taco()
  {
    name = "Taco";
    itemCost = 2.00;
    desc = "Best taco in town!";
    addLetter = 'C';  
    removeLetter = 'c';
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

class pizza
{
  private:
    string name;
    double itemCost;
    string desc;
    char addLetter;
    char removeLetter;
    int count;
  public:
  pizza()
  {
    name = "Pizza";
    itemCost = 3.00;
    desc = "Best Pizza in town!";
    addLetter = 'D';  
    removeLetter = 'd';
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

class burger
{
  private:
    string name;
    double itemCost;
    string desc;
    char addLetter;
    char removeLetter;
    int count;
  public:
  burger()
  {
    name = "Burger";
    itemCost = 5.00;
    desc = "Best burger in town!";
    addLetter = 'E';  
    removeLetter = 'e';
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

class coffee
{
  private:
    string name;
    double itemCost;
    string desc;
    char addLetter;
    char removeLetter;
    int count;
  public:
  coffee()
  {
    name = "Coffee";
    itemCost = 3.50;
    desc = "Best coffee in town!";
    addLetter = 'F';  
    removeLetter = 'f';
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

class wings
{
  private:
    string name;
    double itemCost;
    string desc;
    char addLetter;
    char removeLetter;
    int count;
  public:
  wings()
  {
    name = "Wings";
    itemCost = 7.00;
    desc = "Best wings in town!";
    addLetter = 'G'; 
    removeLetter = 'g';
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
    burrito item2;
    taco item3;
    pizza item4;
    burger item5;
    coffee item6;
    wings item7;
  public:
  void showMenu()
  {
    cout << "Dr_T's Menu:" << endl;
    cout << "ADD\t\tNAME\tCOST\tREMOVE\tCOUNT\tDESC" << endl;
    cout << fixed << setprecision(2);

    cout << item1.getAddLetter() << ")" << setw(10) << item1.getName() << setw(5) << "$" << item1.getItemCost() << setw(5) << "(" << item1.getRemoveLetter() << ")" << setw(7) << item1.getCount() << "\t\t" << item1.getDesc() << endl;
    
    cout << item2.getAddLetter() << ")" << setw(10) << item2.getName() << setw(5) << "$" << item2.getItemCost() << setw(5) << "(" << item2.getRemoveLetter() << ")" << setw(7) << item2.getCount() << "\t\t" << item2.getDesc() << endl;
    
    cout << item3.getAddLetter() << ")" << setw(10) << item3.getName() << setw(5) << "$" << item3.getItemCost() << setw(5) << "(" << item3.getRemoveLetter() << ")" << setw(7) << item3.getCount() << "\t\t" << item3.getDesc() << endl;
    
    cout << item4.getAddLetter() << ")" << setw(10) << item4.getName() << setw(5) << "$" << item4.getItemCost() << setw(5) << "(" << item4.getRemoveLetter() << ")" << setw(7) << item4.getCount() << "\t\t" << item4.getDesc() << endl;
    
    cout << item5.getAddLetter() << ")" << setw(10) << item5.getName() << setw(5) << "$" << item5.getItemCost() << setw(5) << "(" << item5.getRemoveLetter() << ")" << setw(7) << item5.getCount() << "\t\t" << item5.getDesc() << endl;
    
    cout << item6.getAddLetter() << ")" << setw(10) << item6.getName() << setw(5) << "$" << item6.getItemCost() << setw(5) << "(" << item6.getRemoveLetter() << ")" << setw(7) << item6.getCount() << "\t\t" << item6.getDesc() << endl;

    cout << item7.getAddLetter() << ")" << setw(10) << item7.getName() << setw(5) << "$" << item7.getItemCost() << setw(5) << "(" << item7.getRemoveLetter() << ")" << setw(7) << item7.getCount() << "\t\t" << item7.getDesc() << endl;
  }
};


int main() 
{
  greenTea();
  itemMenu i;
  i.showMenu();

 return 0;
}