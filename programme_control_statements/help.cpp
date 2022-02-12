/*
Project 3-1
A simple help programme
*/

#include <iostream>
using namespace std;

int main(){
	char choice;

	for (;;){
		do {
			cout << "Help on:\n";
			cout << "\t1. if\n";
			cout << "\t2. switch\n";
			cout << "\t3. for\n";
			cout << "\t4. while\n";
			cout << "\t5. do-while\n";
			cout << "\t6. break\n";
			cout << "\t7. continue\n";
			cout << "\t8. goto\n";
			cout << "Choose one(q to quit): ";
			cin >> choice;
		}while (choice < '1' || choice > '8' && choice != 'q');

		if (choice == 'q') break;

		cout << "\n\n";

		switch (choice){
			case '1':
				cout << "The if statement:\n\n";
				cout << "if (condition) statement;\n";
				cout << "else statement;\n";
				break;
			case '2':
				cout << "The switch statement:\n\n";
				cout << "switch (expression){\n";
				cout << "\tcase constant:\n";
				cout << "\t\tstatement sequence;\n";
				cout << "\t\tbreak;\n";
				cout << "}\n";
				break;
			case '3':
				cout << "The for: \n\n";
				cout << "for(init; condition; increament) statement;\n";
				break;
			case '4':
				cout << "The while loop: \n\n";
				cout << "while(condition) statement;\n";
				break;
			case '5':
				cout << "The do-while loop: \n\n";
				cout << "do {\n";
				cout << "\tstatement;\n";
				cout << "} while (condition);\n";
				break;
			case '6':
				cout << "The break: \n\n";
				cout << "break;\n";
				break;
			case '7':
				cout << "The continue: \n\n";
				cout << "continue;\n";
				break;
			case '8':
				cout << "The goto: \n\n";
				cout << "goto label;\n";
				break;
		}
		cout << "\n";
	}
	return 0;
}