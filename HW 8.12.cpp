#include <iostream>
using namespace std;

class Cat {
public:
    double age;
    double weight;
    double height;
    bool limbs;
    bool ears;
    bool inoculation;
    string name;
    string type;
    string eyes_color;
    void Play()
    {
        cout << "Play with me in a ball" << "\n";
    }
    void Eat()
    {
        cout << "Give me food" << "\n";
    }
    void Pee()
    {
        cout << "Khm...Khm..." << "\n";
    }
    void Stealing() {
        cout << "It's not me...";
    }
    void Bath() {
        cout << "I have a bad smell ((";
    }


};

class God {
public:
    long long age;
    double weight;
    double height;
    bool existence;
    bool material_body;
    bool inoculation;
    string name;
    string plans;
    string what_religion;
    void Prayer()
    {
        cout << "I hear u" << "\n";
    }
    void Sins()
    {
        cout << "Let me know..." << "\n";
    }
    void Opinion()
    {
        cout << "Hmmm...i think..." << "\n";
    }
    void Punishment() {
        cout << "You are not a good person (";
    }
    void Forgiveness() {
        cout << "My child, i forgive u )))";
    }


};

class Book {
public:
    unsigned int year_of_issue;
    double weight;
    double height;
    bool age_limits;
    bool paperback;
    int page_count;
    string name;
    string janr;
    string description;
    void Be_called()
    {
        cout << "My name is..." << "\n";
    }
    void Inform()
    {
        cout << "I'm teaching about..." << "\n";
    }
    void Sized()
    {
        cout << "I'm not too fat" << "\n";
    }
    void Format() {
        cout << "I'm electronic";
    }
    void Illegal() {
        cout << "I'm keeping illegal information";
    }


};

class Vampire {
public:
    unsigned int age;
    double weight;
    double height;
    bool abilities;
    bool fangs;
    bool transformation;
    string name;
    string nation;
    string name_power;
    void Blood()
    {
        cout << "I want eat uuuuuuuuuuuu" << "\n";
    }
    void Feel()
    {
        cout << "Bella, i love you <3 " << "\n";
    }
    void Use_of_power()
    {
        cout << "I steal donuts because I'm invisible" << "\n";
    }
    void Bat() {
        cout << "No, i can't be a mouse with wingth";
    }
    void Vegetarian() {
        cout << "Aanumals are my friends";
    }


};

class Glasses {
public:
    unsigned short shelf_life;
    double weight;
    double height;
    bool for_minus;
    bool for_computer;
    bool panes;
    string brand;
    unsigned int seria;
    string form;
    void Application()
    {
        cout << "I will protect u : )" << "\n";
    }
    void Mminus()
    {
        cout << "I'm for -3" << "\n";
    }
    void Gender_use()
    {
        cout << "I'm better to use for women" << "\n";
    }
    void Benefit() {
        cout << "I'm improving your health.";
    }
    void Recipe() {
        cout << "I'm a prescription";
    }


};

int main()
{
    Glasses glasses;
    Vampire vampire;
    Book book;
    God god;
    Cat cat;
    cat.Play();
    god.Opinion();
    book.Be_called();
    vampire.Blood();
    glasses.Benefit();
}
