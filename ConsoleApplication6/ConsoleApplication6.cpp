#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    // Поля класу
    string fullName;
    string birthDate;
    string phone;
    string city;
    string country;
    string schoolName;
    string schoolCity;
    string schoolCountry;
    string groupNumber;

public:
    // Аксесори (Getters)
    string getFullName() { return fullName; }
    string getBirthDate() { return birthDate; }
    string getPhone() { return phone; }
    string getCity() { return city; }
    string getCountry() { return country; }
    string getSchoolName() { return schoolName; }
    string getSchoolCity() { return schoolCity; }
    string getSchoolCountry() { return schoolCountry; }
    string getGroupNumber() { return groupNumber; }

    // Аксесори (Setters
    void setFullName(string FullName) { fullName = FullName; }
    void setBirthDate(string BirthDate) { birthDate = BirthDate; }
    void setPhone(string Phone) { phone = Phone; }
    void setCity(string City) { city = City; }
    void seCoutntry(string Coutntry) { country = Coutntry; }
    void setSchoolName(string Name) { schoolName = Name; }
    void setSchoolCity(string City) { schoolCity = City; }
    void setSchoolCountry(string SchoolCountry) { schoolCountry = SchoolCountry; }
    void setGroupNumber(string GroupNumber) { groupNumber = GroupNumber; }

    void Input() {
        cout << "Vvedit PIB: "; cin >> fullName;
        cout << "Vvedit datu narodzhennya: "; cin >> birthDate;
        cout << "Vvedit telefon: "; cin >> phone;
        cout << "Vvedit misto: "; cin >> city;
        cout << "Vvedit krainu: "; cin >> country;
        cout << "Vvedit nazvu zakladu: "; cin >> schoolName;
        cout << "Vvedit misto zakladu: "; cin >> schoolCity;
        cout << "Vvedit krainu zakladu: "; cin >> schoolCountry;
        cout << "Vvedit nomer grupy: "; cin >> groupNumber;
    }

    void Print() {
        cout << "\nStudent: " << fullName << endl;
        cout << "Birth: " << birthDate << endl;
        cout << "Phone: " << phone << endl;
        cout << "City: " << city << ", " << country << endl;
        cout << "School: " << schoolName << " (" << schoolCity << ", " << schoolCountry << ")" << endl;
        cout << "Group: " << groupNumber << endl;
    }

};

   int main() {
        Student obj;
        obj.Input();
        obj.Print();
        return 0;
    }