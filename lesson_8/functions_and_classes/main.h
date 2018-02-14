using namespace std;

//main.h 

class Student
{
    
    int studentID;
    int grades[10];
    
    public:
        void setStudentID(int studentIDIn);
        void setGrade(int index, int grade);
        void printGrades();
        int getMin();
        int getMax();
        float getAverageGrade();
        int * getGrades();
    ;
};

void Student::setStudentID(int studentIDIn) {
    studentID = studentIDIn;
}

void Student::setGrade(int index, int grade) {
    grades[index] = grade;
}


void Student::printGrades() {
    for(int i = 0; i < 10; i++) {
        cout << grades[i] << " ";
    }
}

int Student::getMax() {
    int max = 0;
    for(int i = 0; i < 10; i++) {
        if(grades[i] > max) {
            max = grades[i];
        }
    }
    return max;
}

int Student::getMin() {
    int min = INT_MAX;
    for(int i = 0; i < 10; i++) {
        if(grades[i] < min) {
            min = grades[i];
        }
    }
    return min;
}

float Student::getAverageGrade() {
    float sum = 0;
    for(int i = 0; i < 10; i++) {
        sum += grades[i];
    }
    return sum / 10;
}

int * Student::getGrades() {
    return grades; 
}

//********************
class CourseEnrollment
{
    public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];
    void addStudents(Student studentsIn[]);
    int * getAllGrades();
    int * sortAllGrades();
    int getMinGrade();
    int getMaxGrade();
    float getAvgGrade();
};

void CourseEnrollment::addStudents(Student studentsIn[]) {
    for(int i = 0; i < 6; i++) {
        students[i] = studentsIn[i];
        for(int j = 0; j < 10; j++) {
            int * studentGrades = students[i].getGrades();
            grades[(i * 10) + j] = studentGrades[j];
        }
    }
}

int * CourseEnrollment::getAllGrades() {
    return grades;
}

int * CourseEnrollment::sortAllGrades() {
    for(int i = 0; i < 59; i++) {
        for(int j = 0; j < 59 - i; j++) {
            if(grades[j] > grades[j + 1]) {
                grades[j] = grades[j] ^ grades[j + 1];
                grades[j + 1] = grades[j] ^ grades[j + 1];
                grades[j] = grades[j] ^ grades[j + 1];
            }
        }
    }
    return grades;
}

int CourseEnrollment::getMinGrade() {
    return grades[0];
}
int CourseEnrollment::getMaxGrade() {
    return grades[60 - 1];
}
float CourseEnrollment::getAvgGrade() {
    float sum = 0;
    for(int i = 0; i < 60; i++) {
        sum += grades[i];
    }
    return sum / 60;
}
