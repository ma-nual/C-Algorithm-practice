//
// Created by admin on 2020/8/11.
//

#ifndef SELECTIONSORTUSINGTEMPLATE_STUDENT_H
#define SELECTIONSORTUSINGTEMPLATE_STUDENT_H
#include <iostream>

using namespace std;

struct Student{
    string name;
    int score;

    bool operator<(const Student& otherStudent){
        return score!=otherStudent.score ? score > otherStudent.score : name < otherStudent.name;
    }

    friend ostream& operator<<(ostream& os,Student& student){
        os << "Student: " << student.name << " " << student.score << endl;
        return os;
    }
};

#endif //SELECTIONSORTUSINGTEMPLATE_STUDENT_H
