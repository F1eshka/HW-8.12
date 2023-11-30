#include <iostream>
using namespace std;

class Costomer {//1)кто что 
public:
    //2)поля класса(состояние обьекта)
    double min_budget;
    double max_budget;
    bool discount_card;
    bool club_card;
    bool cash_or_wire;
    bool has_package;
    string name;
    string surname;
    string adress;
    //3)что эта сущность умеет делать-cписок методов
    void SpendMoney()
    {
        cout << "spend some money..." << "\n";
    }
    void SelectProduct()
    {
        cout << "brainwash the salesman..." << "\n";
    }
    void SaySomeThing()
    {
        cout << "i dont need a bag" << "\n";
    }
};

int main()
{
    Costomer costomer;
    costomer.SaySomeThing();
}