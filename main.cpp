#include "StuCard.h"

int main()
{
	fstream inout("StuCard.txt", ios::out);

	StuCard s1("Jerry", 1, new double[3] {80.0, 70.0, 90.0});
	StuCard s2("John", 1, new double[3] { 85.0, 77.0, 95.0 });
	StuCard s3("Mary", 0, new double[3] {83.0, 75.0, 70.0});
	StuCard s4("Tom", 1, new double[3]{73.0, 95.0, 67.0});
	StuCard s5("Claire", 0, new double[3] { 88.0, 79.0, 71.0});
	
	s1.writeToFile(inout);
	s2.writeToFile(inout);
	s3.writeToFile(inout);
	s4.writeToFile(inout);
	s5.writeToFile(inout);
	inout.close();

	StuCard student;
	fstream input("StuCard.txt",ios::in);
	student.readFromFile(input);
	student.printCard();

	student.readFromFile(input);
	student.printCard();

	student.readFromFile(input);
	student.printCard();

	student.readFromFile(input);
	student.printCard();

	student.readFromFile(input);
	student.printCard();
	
	input.close();



	system("pause");
}
