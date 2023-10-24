//ideal gas eq
//Version 1.0
//Updates: Version 1.01 --> asks the User if the tenperAature varies
//ask user moles or #particles
// Version 1.02 --> dervation of the formulas as well as an explanation of what is
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>
#include <algorithm>
#include <cstdio>
#include <stdio.h>
#include <ctime>
// Define constants
using namespace std;
void power_toggle() {
	//pow();

};
void history() {

	//previous calculations
};
void endprogram() {
	exit(0);
};
void noman() {
	std::cout << "\n\n";

};
void science()
{ //long ass description

	//break;

};
void boltz() {

};
void moles() {

};
void particles() {


};
void cursed_triangle() {
	//idk who the hell uses these things still but ill implement that weird triangle
	//secondary teachers have been using for so long
};
void avagadro(){
	
	
	std::cout << '\n';
	std::string ava2[] = { "Avogadro's number",
		"is the number of units in one mole of any substance, defined as its molecular weight",
		"defined as the number of constituent particles(usually molecules, atoms, or ions)",
		"divided by Avogadro's constant : NA = 6.02e23;"

	};
	for (const std::string& line : ava2) {
		std::cout << line << std::endl;
	};
	void (*ava)() = avagadro;

	
	//to calc the molecules
	//if selec how to work out particle --> desc1 
	// etc to desc--> 2 
	//break;
}
void lore(){
	//if select boyles law give des
	std::cout << "Charles's Law, expressed as V T",
		"states that the volume of a gas is directly proportional to its temperature in Kelvin",
		"when the pressure on a sample of a dry gas is held constant";
}
void cpp()
{
	std::string cpp2 [] = {
	"##designed with##",
	"###----## +   + #",
	"###| ####+++ +++#",
	"###| #### +   + #",
	"###----##########",
	"#################"
	};


	for (const std::string& line : cpp2) {
		std::cout << line << std::endl;
	}
}



void kapka(){
	std::string kap[] = {
		"GAS CALCULATOR/constant flow experiment",
		"###############",
		"##### {0} #####",
		"### 1 #2# 3 ###",
		"### 4 #5# 6 ###",
		"### 7 #8# 9 ###",
		"####--#|#--####",
		"#######|#######",
		"#######|#######",
		"###############"
	};
		for (const std::string& line : kap) {
			std::cout << line << std::endl;
		}
}
int main() {
	cpp();
	//toggle power ask the user if they wish to enter a value for n v t which is at a power which auto places after e
	static const double NA = 6.02e23; // Avogadro's number
	static const double r = 8.314;    // Ideal gas constant (J/(mol*K))
	static const double k = 1.38e-23; // Boltzmann's constant (J/K)
	char f;
	while (true) {
		static double  n, v, t;
		int p;
		int a;
		printf("Welcome to the ideal gas calculator program\n");
		std::cout << "When working with gas laws we must use kelvin as it's absolute and suitable";
		std::cout << "\n\n";
		kapka();
		std::cout << "\n\n";
		std::cout << "select options:1, 2 or 3...Option 1 pressure, Option 2 volume...Option 3 Temperature to kill 0: ";
		//time_t startTime = time(nullptr);const int timeoutSeconds = 20;
		//time_t currentTime = time(nullptr);int elapsedTime = static_cast<int>(currentTime - startTime);
		//needs proper time implementation
		

		if (!(cin >> a) || a < 0 || a > 3) {
			cout << "Invalid input. Please enter a valid option (1, 2, 3), or 0 to exit.\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}

		switch (a) {
		case 0:
			cout << "Exiting program.\n";
			endprogram();
			break;
		case 1:
			std::cout << "you chose to find out p, pressure (pa).  Enter any key";
			std::getchar(); // Wait for a key press
			std::cout << "\n";
			std::cout << "# of mole (n): ";
			std::cin >> n;
			std::cout << "# of volume (v): ";
			std::cin >> v;
            std::cout << "# of Temperature Kelvin (t): ";
			std::cin >> t;
			p = (n * r * t) / v;
			std::cout << p;
			std::cout << "\n\n";
			std::cout << "exit?   Y/N : ";
			std::cin >> f;
			if (f == 'Y' || f == 'y') {
			endprogram();

			break;
			}
			else {
				noman();
				break;
			}
		case 2:
		// Code for calculating volume (Option 2)
		std::cout << ":# of mole (n):";
		std::cin >> n;
		std::cout << "# of pressure (pa):";
	    std::cin >> p;
		std::cout << "# of Temperature Kelvin (t):";
		std::cin >> t;
		v = (n * r * t) / p;
		std::cout << v; ;
		std::getchar();
		std::cout << "\n\n";


			std::cout << "exit?   Y/N : ";
			std::cin >> f;
			if (f == 'Y' || f == 'y') {
				endprogram();


			}
			else {
				noman();
				break;
			}
			break;
		case 3:
			// Code for calculating temperature (Option 2)
			std::cout << "you chose to find out t, temperature (K).  Enter any key";
			std::getchar(); // Wait for a key press
			std::cout << "\n";
			std::cout << "# of mole (n): ";
			std::cin >> n;
			std::cout << "# of volume (v): ";
			std::cin >> v;
			std::cout << "# of Pressure (pa): ";
			std::cin >> p;
			t = (n * r * p) / v;
			std::cout << t;
			std::cout << "\n\n";
			std::cout << "exit?   Y/N : ";
			std::cin >> f;
			if (f == 'Y' || f == 'y') {
				endprogram();

				break;
			}
			else {
				noman();
				break;
			}
		case 4:
			std::cout << "you chose temperatrature k";



			

		//case 7-9:
			//comparing two to find pressure 2
			//p1/t1*v1 = p2/t2*v2
			//working on a very simple neuron program, possibly usable for simple formulas?
		}
	}


	//needs fixing not thought bout it
   //);
	noman();

};



	//ver1.01--> std::count "allowed formats AND PRINT THEM add this as an option also"

	//add break functionality if the user wishes to quit Ver 1.0
    //man i hate living
	//version 1.2-->{

	 //eq2 : eq1 }; //i think this is the wrong way round implement inheritance in some way

