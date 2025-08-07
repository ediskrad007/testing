#include<iostream> 
#include<string>
/* ex1:
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}*/
/*ex2
int main() {
    int studentCount = 30;
    float temperature = 36.6;
    char grade = 'A';
    bool passed = true;

    std::cout << "studentCount: " << studentCount << std::endl;
    std::cout << "temperature: " << temperature << std::endl;
    std::cout << "grade: " << grade << std::endl;
    std::cout << "passed: " << std::boolalpha << passed << std::endl;

    return 0;
}*/
/*ex3
int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "You entered: " << a << " and " << b << std::endl;
    std::cout << "Sum: " << (a + b) << std::endl;
    return 0;
}
    */
/*ex4
int main() {
    // camelCase
    int studentScore = 100 ;
    // PascalCase
    std::string StudentRecord = "rakhie";
    // snake_case
    float student_score = 92.5;
    // SCREAMING_SNAKE_CASE
     int MAX_BUFFER_SIZE = 1010;
    std::cout << "studentScore : " << studentScore << std::endl;
    std::cout << "StudentRecord : " << StudentRecord << std::endl;
    std::cout << "student_score : " << student_score << std::endl;
    std::cout << "MAX_BUFFER_SIZE : " << MAX_BUFFER_SIZE << std::endl;
    return 0;
}*/
/*ex5
int main(){
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (number % 2 == 0) {
        std::cout << "Even" << std::endl;
    } else {
        std::cout << "Odd" << std::endl;
    }      
 
    
}
    */
   /*ex6
   int main (){
    std::cout << "enter grade : ";
    char grade; 
    std::cin >> grade;
    switch (grade) {   
        case 'A':
            std::cout << "Excellent" << std::endl;
            break;
        case 'B':
            std::cout << "Good" << std::endl;
            break;
        case 'C':
            std::cout << "Fair" << std::endl;
            break;
        case 'F':
            std::cout << "Failed" << std::endl;
            break;
        default:
            std::cout << "Invalid grade " << std::endl;
    }
   }
    */
   /*ex7
int main(){
     for (int i = 1; i <= 10; i++) {
          std::cout << i * 5 << std::endl;
     }
     return 0;
}
     */
  /*ex8
    int main() {
        int choice;
        do {
            std::cout << "Menu:\n";
            std::cout << "1. Greet\n";
            std::cout << "2. Calculate factorial\n";
            std::cout << "0. Exit\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;
        } while (choice < 0 || choice > 2);
        std::string name;
        int n;
        switch (choice) {
            case 1:
                std::cout << "What is your name?" << std::endl;
                std::cin >> name;
                std::cout << "Hello, " << name << "!" << std::endl;
                break;
            case 2:    
                std::cout << "Enter an integer number to calculate its factorial: ";
                std::cin >> n;
                if (n < 0) {
                    std::cout << "Factorial is not defined for negative numbers." << std::endl;
                } else {
                    int factorial = 1;
                    for (int i = 1; i <= n; ++i) {
                        factorial *= i;
                    }
                    std::cout << "Factorial of " << n << " is " << factorial << std::endl;
                }
                break;
            case 0:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice." << std::endl;
        }
        return 0;
    }*/
   /*extra
int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Prime numbers up to " << n << ": ";
    for (int num = 2; num <= n; ++num) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            std::cout << num << " ";
        }
    }
    return 0;
}
*/
           