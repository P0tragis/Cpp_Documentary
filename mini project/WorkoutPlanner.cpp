#include <iostream>
#include <string>

int main()
{
    std::cout << "Workout Planner" << std::endl;
    std::cout << "Welcome to your personalized workout planner!" << std::endl;


    
    std::cout << "1. Add a new workout" << std::endl;
    std::cout << "2. View all workouts" << std::endl;
    std::cout << "3. View standard workout" << std::endl;
    std::cout << "4. Exit" << std::endl;

    char choice;
    std::cout << "Please enter your choice: ";
    std::cin >> choice;

    if (choice == '1') {
        std::string morningWorkout, eveningWorkout;
        std::cout << "Enter your morning workout: ";
        std::cin.ignore();
        std::getline(std::cin, morningWorkout);
        
        std::cout << "Enter your evening workout: ";
        std::cin.ignore();
        std::getline(std::cin, eveningWorkout);

        std::cout << "Your morning workout is: " << morningWorkout << std::endl;
        std::cout << "Your evening workout is: " << eveningWorkout << std::endl;

    }

    else if (choice == '2') {
        std::cout << "Displaying all workouts..." << std::endl;
        std::cout << "1. Push-ups" << std::endl;
        std::cout << "2. Squats" << std::endl;
        std::cout << "3. Lunges" << std::endl;
        std::cout << "4. Plank" << std::endl;
        std::cout << "5. Burpees" << std::endl;
        std::cout << "6. Jumping Jacks" << std::endl;
        std::cout << "7. Sit-ups" << std::endl;
        std::cout << "8. Deadlifts" << std::endl;
        std::cout << "9. Bench Press" << std::endl;
        std::cout << "10. Bicep Curls" << std::endl;
        std::cout << "11. Tricep Dips" << std::endl;
        std::cout << "12. Shoulder Press" << std::endl;
        std::cout << "13. Leg Press" << std::endl;
        std::cout << "14. Cardio (Running, jogging, shadow boxing)" << std::endl;
    }

    else if (choice == '3') {
        std::cout << "Displaying standard workout..." << std::endl;
        std::cout << "Standard Workout Plan:" << std::endl;
            //MONDAY
        std::cout <<"Morning workouts:" <<std::endl;

        std::cout << "Monday Morning Workouts:" << std::endl;

        std::cout << "Chest & Triceps Day" << std::endl;
        std::cout << "1.Push-ups Max reps" << std::endl;
        std::cout << "2.Dumbbell Floor Press 3x12" << std::endl;
        std::cout << "3.Overhead Dumbbell Extension 3x12" << std::endl;
        std::cout << "4.Plank 3x30\n" << std::endl;

            //TUESDAY   
        std::cout << "\nTuesday Morning Workouts:" << std::endl;

        std::cout << "Back & Biceps Day" << std::endl;

        std::cout << "1.One-arm dumbbell row 3x12" << std::endl;
        std::cout << "2.Dumbbell Bicep Curl 3x12" << std::endl;
        std::cout << "3.Reverse fly 3x12" << std::endl;
        std::cout << "4.Side Plank 3x30\n" << std::endl;

            //WEDNESDAY
        std::cout << "\nWednesday Morning Workouts:" << std::endl;

        std::cout << "Shoulders & Core Day" << std::endl;

        std::cout << "1.Dumbbell Shoulder Press 3x12" << std::endl;
        std::cout << "2.Dumbbell Lateral Raise 3x12" << std::endl;
        std::cout << "3.Dumbbell Front Raise 3x12" << std::endl;
        std::cout << "4.Dumbbell Russian Twist 3x12\n" << std::endl;

            //THURSDAY

        std::cout << "\nThursday Morning Workouts:" << std::endl;

        std::cout << "Chest, Back & Arms Day" << std::endl;

        std::cout << "1.Push-ups Max Rep" << std::endl;
        std::cout << "2.One arm dumbbell row 3x12" << std::endl;
        std::cout << "3.Dumbbell Bicep Curl 3x12" << std::endl;
        std::cout << "4.Overhead dumbbell extension 3x12\n" << std::endl;

            //FRIDAY
        std::cout << "Friday Morning Workouts:" << std::endl;

        std::cout << "Full Body Upper Day" << std::endl;
        std::cout << "1.Push-ups Max Rep" << std::endl;
        std::cout << "2.Dumbbell Shoulder Press 3x12" << std::endl;
        std::cout << "3.One arm dumbbell row 3x12" << std::endl;
        std::cout << "4.Dumbbell Chest Press 3x12\n" << std::endl;

    }  

    else if (choice == '4'){
        std::cout << "Exiting the workout planner. Goodbye!" << std::endl;
    }

    else {
        std::cout << "Invalid choice. Please try again." << std::endl;
    }



    return 0;
}
