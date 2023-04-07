//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student 
//{
//    string surname;
//    int marks[4];
//    Student* next;
//};
//
//void add(Student*& head, string surname, int* marks) 
//{
//    Student* new_student = new Student;
//    new_student->surname = surname;
//
//    for (int i = 0; i < 4; i++) 
//    {
//        new_student->marks[i] = marks[i];
//    }
//    new_student->next = NULL;
//
//    if (head == NULL) 
//    {
//        head = new_student;
//    }
//    else 
//    {
//        Student* current = head;
//
//        while (current->next != NULL) 
//        {
//            current = current->next;
//        }
//
//        current->next = new_student;
//    }
//}
//
//void sort(Student*& head) 
//{
//    if (head == NULL || head->next == NULL) 
//    {
//        return;
//    }
//
//    Student* current = head;
//
//    while (current != NULL) 
//    {
//        Student* min = current;
//        Student* temp = current->next;
//
//        while (temp != NULL) 
//        {
//            if (temp->surname < min->surname) 
//            {
//                min = temp;
//            }
//            temp = temp->next;
//        }
//        string temp_surname = current->surname;
//        for (int i = 0; i < 4; i++) {
//            int temp_mark = current->marks[i];
//            current->marks[i] = min->marks[i];
//            min->marks[i] = temp_mark;
//        }
//        current->surname = min->surname;
//        min->surname = temp_surname;
//        current = current->next;
//    }
//}
//
//void print(Student* head) 
//{
//    if (head == NULL) 
//    {
//        cout << "Список пуст" << endl;
//        return;
//    }
//    cout << "Список студентов:" << endl;
//    while (head != NULL) 
//    {
//        cout << head->surname << ": ";
//
//        for (int i = 0; i < 4; i++) 
//        {
//            cout << head->marks[i] << " ";
//        }
//
//        cout << endl;
//        head = head->next;
//    }
//}
//
//int main() 
//{
//
//    setlocale(LC_ALL, "Rus");
//
//    Student* head = NULL;
//
//    add(head, "Иванов", new int[4] {5, 4, 5, 4});
//    add(head, "Петров", new int[4] {3, 3, 4, 5});
//    add(head, "Сидоров", new int[4] {4, 5, 4, 5});
//    add(head, "Козлов", new int[4] {5, 5, 5, 5});
//
//    sort(head);
//    print(head);
//
//    return 0;
//}