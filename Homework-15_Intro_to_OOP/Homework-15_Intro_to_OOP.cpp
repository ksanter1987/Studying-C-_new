
#include <iostream>
using namespace std;

struct PIB {
    string name;
    string surname;
    string middle_name;
};

struct Date {
    int day;
    int month;
    int year;
};

struct University {
    string country;
    string city;
    string universityName;
};

class Student {
private:
    PIB pib;
    Date birthDate;
    string group;
    string phone;
    University university;
    int* marks;
    int marksCount;

public:
    Student(PIB pib, Date birthDate, string group, string phone,
        University university, int* marks, int marksCount)
    {
        this->pib = pib;
        this->birthDate = birthDate;
        this->group = group;
        this->phone = phone;
        this->university = university;

        this->marksCount = marksCount;
        this->marks = new int[marksCount];
        for (int i = 0; i < marksCount; i++) {
            this->marks[i] = marks[i];
        }
    }

    ~Student() {
        delete[] marks;
    }

    PIB getPIB() const { return pib; }
    Date getBirthDate() const { return birthDate; }
    string getGroup() const { return group; }
    string getPhone() const { return phone; }
    University getUniversity() const { return university; }
    int* getMarks() const { return marks; }
    int getMarksCount() const { return marksCount; }

    void setPIB(const PIB& newPIB) { pib = newPIB; }
    void setBirthDate(const Date& newDate) { birthDate = newDate; }
    void setGroup(const string& newGroup) { group = newGroup; }
    void setPhone(const string& newPhone) { phone = newPhone; }
    void setUniversity(const University& newUniversity) { university = newUniversity; }

    void setMarks(const int* newMarks, int newCount) {
        delete[] marks;
        marksCount = newCount;
        marks = new int[marksCount];
        for (int i = 0; i < marksCount; i++) {
            marks[i] = newMarks[i];
        }
    }

    void printInfo() const {
        cout << "PIB : " << pib.surname << " " << pib.name << " " << pib.middle_name << endl;
        cout << "Date of birth : " << birthDate.day << "." << birthDate.month << "." << birthDate.year << endl;
        cout << "University : " << university.universityName
            << " (" << university.city << ", " << university.country << ")" << endl;
        cout << "Group : " << group << endl;
        cout << "Phone : " << phone << endl;
        cout << "Marks : ";
        for (int i = 0; i < marksCount; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    PIB pib = { "Ivan", "Ivanov", "Ivanovych" };
    Date birthDate = { 21, 5, 2003 };
    University univer = { "Ukraine", "Kyiv", "KPI" };
    string group = "IIT-231";
    string phone = "+380501234567";
    int marks[] = { 90, 85, 78, 92, 88 };

    Student st(pib, birthDate, group, phone, univer, marks, 5);

    cout << "\nStudent information:\n";
    st.printInfo();

    cout << "\nChange Data\n";
    PIB newPIB = { "Petro", "Petrov", "Petrovych" };
    st.setPIB(newPIB);

    University newUniver = { "Poland", "Warsaw", "University of Warsaw" };
    st.setUniversity(newUniver);

    int newMarks[] = { 100, 98, 95 };
    st.setMarks(newMarks, 3);

    cout << "\nAfter Data changes :\n";
    st.printInfo();
}


