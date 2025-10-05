#include <iostream>

int main () {
    
    std::cout << "Grade Calculator\n";

    int written,performance,exam;

    std::cout << "\nWritten works = 30%";
    std::cout << "\nPerformance = 50%";
    std::cout << "\nFinal exam = 20%";

    std::cout << "\nEnter written works score:( /50) :";
    std::cin >> written;

    if (written > 50) {
        std::cout << "Written works score is above average.\n";
    }

    std::cout << "\nEnter performance score: ( / 100) :";
    std::cin >> performance;

    if (performance > 100) {
        std::cout << "Performance score is above average.\n";
    }

    std::cout << "\nEnter final exam score: ( / 50) :";
    std::cin >> exam;

    if (exam > 50) {
        std::cout << "Final exam score is above average.\n";
    }

    std::cout << "Written works: " << written << "\n";
    std::cout << "Performance: " << performance << "\n";
    std::cout << "Final exam: " << exam << "\n";

    double final_grade = (written * 0.3) + (performance * 0.5) + (exam * 0.2);
    std::cout << "Final grade = " << final_grade << "\n";

    return 0;
}