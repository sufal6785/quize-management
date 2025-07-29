#include <iostream>
// Update the path below if Student.h is in a different directory, e.g. "../model/Student.h"
#include "include/model/Student.h"
using namespace std;
using namespace QuizModel;

int main(){
    Student ss("sufal","sufal99","3344");
    
    if(ss.login(ss.getUserId(),"3344")){
        ss.info();
    }
}