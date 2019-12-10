#include <iostream> //the input-output streams library
#include <vector> //the vector library. vectors are a kind of list
#include <string> //the string library
//we are working entirely inside the standard namespace
using namespace std; 
//Your program starts here, with the main function
int main() {
    int numoftickets;
    double priceoftickets;
    cout << "How many tickets? "; // asks how many tickets
    cin >> numoftickets; 
    cout << "What's the price? "; // asks the price per ticket
    cin >> priceoftickets;
    double totalOne = (numoftickets * priceoftickets) + 0.3; // finds the price of the tickets before tax
    double totalTwo = (totalOne * 0.0290); // finds the the amount taxed
    double totalFinal = totalOne + totalTwo; // adds taxt to the total
    cout << "For " + to_string(numoftickets) + " tickets " + to_string(priceoftickets) + " dollars each, the total is " + to_string(totalFinal) << endl;
    return 0;
}