# include <iostream>

# define MAX 1024

void sample1();
void sample2();
void sample3();


void sample1() {
    char name[MAX];

    std::cout << "Enter your name: ";

    std::cin >> name;

    std::cout << "Your name is: " << name << std::endl;
}

void sample2(){
    char name[10];

    std::cout << "Enter your name: ";
    
    std::cin.getline(name, 10);

    std::cout << "Your name is: " << name << std::endl;

}
void sample3(){
    char name[10];

    std::cout << "Enter your name: ";

    std::cin.getline(name, 10, '\n');

    std::cout << "Your name is : " << name << std::endl;

}

int main(){
    sample1();
    sample2();
    sample3();
    
    return 0;
}
