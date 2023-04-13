#include <iostream>
#include <string>
#include <conio.h>

// ��������� ��� �������� ���������� � ��������
struct Student
{
    std::string surname;
    int marks[4];
    Student* next;
};

// ������� ��� ���������� ������ �������� � ������
void add(Student*& head, std::string surname, int *marks) 
{
    // �������� ������ ��������
    Student* new_student = new Student;
    new_student->surname = surname;
    for (int i = 0; i < 4; i++) 
    {
        new_student->marks[i] = marks[i];
    }
    new_student->next = NULL;
    // ���������� �������� � ������
    if (head == NULL) 
    {
        head = new_student;
    }
    else 
    {
        Student* current = head;
        while (current->next != NULL) 
        {
            current = current->next;
        }
        current->next = new_student;
    }
}

// ������� ��� ���������� ������ �� ������� ��������
void sort(Student*& head) 
{
    if (head == NULL || head->next == NULL) 
    {
        return;
    }
    Student* current = head;
    while (current != NULL) 
    {
        Student* min = current;
        Student* temp = current->next;
        while (temp != NULL) 
        {
            if (temp->surname < min->surname) 
            {
                min = temp;
            }
            temp = temp->next;
        }
        // ����� ���������
        std::string temp_surname = current->surname;
        for (int i = 0; i < 4; i++) 
        {
            int temp_mark = current->marks[i];
            current->marks[i] = min->marks[i];
            min->marks[i] = temp_mark;
        }
        current->surname = min->surname;
        min->surname = temp_surname;
        current = current->next;
    }
}

// ������� ��� ������ ������
void print(Student* head) 
{
    if (head == NULL) 
    {
        std::cout << "������ ����" << std::endl;
        return;
    }
    std::cout << "������ ���������:" << std::endl;
    while (head != NULL) 
    {
        std::cout << head->surname << ": ";
        for (int i = 0; i < 4; i++) 
        {
            std::cout << head->marks[i] << " ";
        }
        std::cout << std::endl;
        head = head->next;
    }
}

int main() 
{
    setlocale(LC_ALL, "Rus");

    int grade[4];
    bool flag = false;
    std::string Surname;
    Student* list = NULL;


    // ���������� ��������� � ������
    do
    {
        std::cout << "������� �������: ";
        std::cin >> Surname;
        std::cout << std::endl << "������� ������� (����������� - Enter): ";

        for (int j = 0; j < 4; j++)
        {
            std::cin >> grade[j];
        }
        std::cout << std::endl;

        add(list, Surname, grade);

        std::cout << "����������? (Y/N): ";

        int action = _getch();
        if (action == 110 || action == 226)
        {
            flag = true;
        }
        std::cout << std::endl;
    } while (flag != true);

    sort(list);

    print(list);

    return 0;
}