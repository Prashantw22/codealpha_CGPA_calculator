#include <iostream>
using namespace std;

int main()
{
    int semesters;
    float cgpa = 0;

    cout << "===== CGPA Calculator =====" << endl;
    cout << "Enter number of semesters: ";
    cin >> semesters;

    for (int s = 1; s <= semesters; s++)
    {
        int courses;
        float totalCredits = 0, totalGradePoints = 0;

        cout << "\nSemester " << s << endl;
        cout << "Enter number of courses: ";
        cin >> courses;

        for (int i = 1; i <= courses; i++)
        {
            float credits, gradePoint;

            cout << "\nCourse " << i << endl;
            cout << "Enter credit hours: ";
            cin >> credits;

            cout << "Enter grade point: ";
            cin >> gradePoint;

            totalCredits += credits;
            totalGradePoints += credits * gradePoint;
        }

        float gpa = totalGradePoints / totalCredits;

        cout << "GPA of Semester " << s << " = " << gpa << endl;

        cgpa += gpa;
    }

    cgpa = cgpa / semesters;

    cout << "\n======================" << endl;
    cout << "Overall CGPA = " << cgpa << endl;
    cout << "======================" << endl;

    return 0;
}