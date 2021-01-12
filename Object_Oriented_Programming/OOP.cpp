#include <iostream>

using namespace std;

///Ex_Structure_Vs_Class
//struct Employee{
//    int idNumber;
//    double hourlySalary;
//
//};
//
//class Employee{
//    int idNumber;
//    double hourlySalary;
//};


///Ex_Structure
//struct Employee{
//    int idNumber;
//    double hourlySalary;
//
//};
//int main()
//{
//    Employee oneStaffMember;
//    oneStaffMember.idNumber = 2345;
//    oneStaffMember.hourlySalary = 12.95;
//    cout << "ID number is " << oneStaffMember.idNumber << endl;
//    cout << "Hourly rate is " << oneStaffMember.hourlySalary << endl;
//    return 0;
//}


///Ex_Class

    ///A student class
//class Student{
//    int idNum;
//    string lastName;
//    double gradePointAverage;
//};

    ///Student class that includes one function definition
//class Student{
//    private:
//        int idNum;
//        string lastName;
//        double gradePointAverage;
//    public:
//        void displayStudentData();
//};

    ///Student class with set functions for private data
//class Student{
//    private:
//        int idNum;
//        string lastName;
//        double gradePointAverage;
//    public:
//        void displayStudentData();
//        void setIDNum(int);
//        void setLastName(string);
//        void setGradePointAverage(double);
//};


///>> OOP >> Ex1: Create a class
//class Student{
//        int idNum;
//    string lastName;
//        double gpa;
//    void displayStudentData();
//    void setIdNum(int);
//    void setLastName(string);
//    void setGPA(double);
//    double getGPA();
//};

///>>Ex2: Create a class and specify accessibility (alternative way)
//class Student{
//        private: int idNum;
//    public: string lastName;
//        private: double gpa;
//
//    void displayStudentData();
    ///Parameter name is optional in prototype
//    void setIdNum(int);
//    void setLastName(string);
//    void setGPA(double);
//    double getGPA();
//};

///>>Ex3: Create a class and specify accessibility (alternative way)
//class Student{
//    public:
//        int idNum;
//        string lastName;
//    private: double gpa;
//    public:
//        void displayStudentData();
//        void setIdNum(int);
//        void setLastName(string);
//        void setGPA(double);
//        double getGPA();
//};

///>>Ex4: Create a class and define the implementation of the methods
class Student{
        ///Define characteristic
        int idNum;
        string lastName;
        private: double gpa;
    ///Define methods
    public:
        void displayStudentData();
        void setData(string name, int id, double GPA);
        double getGPA();
};
///Implementation of the defined methods
void Student::setData(string name, int id, double GPA){
    lastName = name;
    idNum = id;
    gpa = GPA;
}
void Student::displayStudentData(){
    cout << lastName << " " << idNum << " " << gpa;
    cout << "\n" ;
}
double Student::getGPA(){
    return gpa;
}

int main(){
    Student s1, s2, s3;
    s1.setData("Dara", 1, 3.5);
    s2.setData("Sok", 2, 3);
    s3.setData("Sao", 3, 3);

    s1.displayStudentData();
    s2.displayStudentData();
    s3.displayStudentData();

    cout << s1.getGPA() << endl;
    cout << s2.getGPA() << endl;
    cout << s3.getGPA() << endl;
//    cout << s3.lastName << endl;
//    cout << s3.idNum << endl;
//    cout << s3.gpa;
}
