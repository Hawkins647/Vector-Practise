#include <iostream>
#include <string>
#include <vector>

using namespace std;

char print_menu();
void add_num();
void print_vector();
void delete_num();
void delete_vec();
vector <int> vec {};

int main()
{
    char user_choice {};
    user_choice = print_menu();

    while (user_choice != '5'){
        switch(user_choice){
        case '1':
            add_num();
            cout << endl;
            user_choice = print_menu();
            break;
        case '2':
            delete_num();
            cout << endl;
            user_choice = print_menu();
            break;
        case '3':
            delete_vec();
            cout << endl;
            user_choice = print_menu();
            break;
        case '4':
            print_vector();
            cout << endl;
            user_choice = print_menu();
            break;
        default:
            cout << "Unknown value." << endl;
            break;
        
        }
    }

    cout << "Goodbye!" << endl;
    
	return 0;
}

void delete_vec(){
    vec.clear();
    cout << "Vector has been cleared." << endl;
}

char print_menu()
{
    cout << "1. Add a number to the vector" << endl;
    cout << "2. Delete a number from the vector" << endl;
    cout << "3. Clear the vector completely" << endl;
    cout << "4. Print the vector" << endl;
    cout << "5. Quit the program" << endl;
    cout << "Please enter your option from the choices above: ";
    char user_input {};
    cin >> user_input;
    return user_input;
    
}

void add_num()
{
    cout << "Please enter a number to append to the vector: ";
    int temp_int {};
    cin >> temp_int;
    
    vec.push_back(temp_int);
}

void print_vector()
{
    if(vec.empty())
        cout << "Vector is empty." << endl;
    else{
        cout << "Vector: ";
        for (size_t i {0}; i < vec.size(); i++){
            cout << vec[i] << ", ";
        }
        cout << endl;
    }
}

void delete_num()
{
    print_vector();
    cout << "Please enter the number you want deleted from the vector: ";
    int delete_num {};
    cin >> delete_num;
    for (int i {0}; i < vec.size(); i++){
        if(vec[i] == delete_num){
            vec.erase(vec.begin() + i);
            cout << vec[i] << " Has been deleted." << endl;
        }
    }
}
