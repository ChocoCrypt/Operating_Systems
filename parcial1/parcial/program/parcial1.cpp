#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <time.h>

using namespace std;



//this class works
class Process{
	private:
		int init;
		Process* left;
		Process* right;
	public:
		// constructor method for generating a process with given value
		Process(int value){
			this -> left = NULL;
			this->right = NULL;
			init = value;
		}
		// Is Cold method of the game , i made values ints to make it easier
		int is_cold(int secret){
			int distance = abs( secret - init);
			if(distance < 30){
				cout<<"Cold"<<endl;
				return(0);
			}
			if(distance >= 30 && distance <100){
				cout<<"Warm"<<endl;
				return(1);
			}
			cout<<"Cold"<<endl;
			return(2);
		}
		int get_value(){
			return(init);
		}
};


void check(initial_value , secret){
	done = false;
	int secret = secret;
	Process p0 = Process(initial_value);

	while(!done){
		distance = abs(secret - p0.get_value());
		if(p0.is_cold == 0){
			//hot conditions
			if(p0->left == NULL){
				p0->left = new Process(p0.get_values -10);
				p0->right = new Process(p0.get_values +10);
				check(initial_value -10 , p0->left);
				check(initial_value +10 , p0->right);
			}
		}
		if(p0.is_cold == 1){
			//cold conditions
			done = true;
		}
		if(p0.is_cold == 2){
			//freezing conditions
				p0->left = new Process(p0.get_values -10);
				p0->right = new Process(p0.get_values +10);
				check(initial_value -10 , p0->left);
				check(initial_value +10 , p0->right);
		}
	}

}
int main(){
	int secret = 1337;
	//i'll program main rules for the program, however, function for generating
	//new Processes is not working so this is going to be pseudocode :(
	
	//start p0
	Process p0 = Process(5000);

	//check p0 sons
	//the idea is to check p0 sons to check the rules
	check(p0, 5000);
	
	//
	return(0);
}


