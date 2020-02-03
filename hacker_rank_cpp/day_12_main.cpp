#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int identification, vector<int> scores) : Person(firstName, lastName, identification) {
            this->testScores = scores;
        }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate() {
            int avg = 0;
            // int divisor = 0;
            char result;
            
            // Get total grades for student
            for(int i =0; i < testScores.size(); i++) {
                avg += testScores.at(i);
            }
            int finalGrade = avg/testScores.size(); 
            
            // Determine grade value to string
            if (finalGrade >= 90 && finalGrade <=100 ) {
                result = 'O';
            } else if (finalGrade >= 80 && finalGrade <90 ) {
                result = 'E';
            } else if (finalGrade >= 70 && finalGrade <80 ) {
                result = 'A';
            } else if (finalGrade >= 55 && finalGrade <70 ) {
                result = 'P';
            } else if (finalGrade >= 40 && finalGrade <55 ) {
                result = 'D';
            } else if (finalGrade < 40 ) {
                result = 'T';
            } else {
                result = 'N';
            }
            return result;
        }
            
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}