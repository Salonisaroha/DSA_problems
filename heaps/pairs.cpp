#include<iostream>
#include<queue>
using namespace std;
class Student{
    public:
    string name;
    int marks;
    Student(string name, int marks){
        this->name = name;
        this->marks = marks;
    }

    bool operator <(const Student &obj)const{
        return this->marks <obj.marks;
    }

};

int main(){
priority_queue<Student>pq;
pq.push(Student("Saloni", 90));
pq.push(Student("Riya", 100));
pq.push(Student("Tanu", 95));
pq.push(Student("Gayu", 93));

while(!pq.empty()){
    cout<<"Top = "<<pq.top().name<<" "<<pq.top().marks<<endl;
    pq.pop();
}

}
