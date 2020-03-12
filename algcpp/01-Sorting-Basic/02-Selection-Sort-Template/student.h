#ifndef INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H
#define INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H

#include <iostream>
#include <string>

struct Student {
    std::string name;
    int score;
    bool operator<(const Student &other) {
        return score != other.score?
        score < other.score : name < other.name;        
    }

    bool operator>(const Student &other) {
        return score != other.score ?
        score > other.score : name > other.name;
    }

    friend std::ostream& operator<<(std::ostream &os, const Student &student) {
        os <<"Student: " << student.name << ", score: " << student.score << std::endl;
        return os;
    }
};

#endif // INC_02_SELECTION_SORT_USING_TEMPLATE_STUDENT_H