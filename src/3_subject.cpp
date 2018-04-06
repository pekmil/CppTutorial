#include <iostream>
#include <string>

#define T 3

using namespace std;

struct subject {
    string code;
    unsigned int gradeCount;
    unsigned int* grades;
};

void printSubject(const subject& s){
    cout << s.code << " - " << s.gradeCount << ": ";
    for(unsigned int i = 0; i < s.gradeCount; ++i){
        cout << s.grades[i] << " ";
    }
    cout << endl;
}

double subjectAvg(const subject& s){
    double sum = 0;
    for(unsigned int i = 0; i < s.gradeCount; ++i){
        sum += s.grades[i];
    }
    return sum / s.gradeCount;
}

void reallocGrades(subject& s, unsigned int size){
    unsigned int* newGrades = new unsigned int[size];
    if(size > s.gradeCount){
        for(unsigned int i = 0; i < s.gradeCount; ++i){
            newGrades[i] = s.grades[i];
        }
        for(unsigned int i = s.gradeCount; i < size; ++i){
            newGrades[i] = 5;
        }
    }
    else{
        for(unsigned int i = 0; i < size; ++i){
            newGrades[i] = s.grades[i];
        }
    }
    delete[] s.grades;
    s.gradeCount = size;
    s.grades = newGrades;
}

void reallocGrades(subject& s, unsigned int size, unsigned int g1, unsigned int g2){
    unsigned int* newGrades = new unsigned int[size];
    if(size > s.gradeCount){
        for(unsigned int i = 0; i < s.gradeCount; ++i){
            newGrades[i] = s.grades[i];
        }
        bool alt = true;
        for(unsigned int i = s.gradeCount; i < size; ++i){
            newGrades[i] = alt ? g1 : g2;
            alt = !alt;
        }
    }
    else{
        for(unsigned int i = 0; i < size; ++i){
            newGrades[i] = s.grades[i];
        }
    }
    delete[] s.grades;
    s.gradeCount = size;
    s.grades = newGrades;
}

void freeSubject(subject& s){
    delete[] s.grades;
    s.gradeCount = 0;
}

int main(){

    subject subjects[T];

    for(int i = 0; i < T; ++i){
        cout << "Insert subject data #" << i+1 << ":\n";
        cout << "Subject code: ";
        cin >> subjects[i].code;
        cout << "Grade count: ";
        cin >> subjects[i].gradeCount;
        subjects[i].grades = new unsigned int[subjects[i].gradeCount];
        cout << "Enter subject grades (" << subjects[i].gradeCount << "): \n";
        for(unsigned int j = 0; j < subjects[i].gradeCount; ++j){
            cin >> subjects[i].grades[j];
        }
    }

    cout << endl;

    for(unsigned int i = 0; i < T; ++i){
        cout << "Subject details #" << i+1 << endl;
        printSubject(subjects[i]);
    }

    cout << endl;

    double maxAvg = subjectAvg(subjects[0]);
    unsigned int maxIdx = 0;
    for(int i = 1; i < T; ++i){
        double avg = subjectAvg(subjects[i]);
        if(avg > maxAvg){
            maxAvg = avg;
            maxIdx = i;
        }
    }
    cout << "Max. avg: " << maxAvg << endl;
    cout << "Max. avg subject:\n";
    printSubject(subjects[maxIdx]);

    cout << endl;

    for(unsigned int i = 0; i < T; ++i){
        cout << "New grade count for subject " << subjects[i].code << ":";
        unsigned int size;
        cin >> size;
        reallocGrades(subjects[i], size);
    }
    for(unsigned int i = 0; i < T; ++i){
        cout << "Subject details #" << i+1 << endl;
        printSubject(subjects[i]);
    }

    cout << endl;

    reallocGrades(subjects[0], 8, 2, 4);
    printSubject(subjects[0]);

    for(int i = 0; i < T; ++i){
        freeSubject(subjects[i]);
    }

    return 0;
}
