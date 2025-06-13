#include "../include/Fallout.h"

using namespace std::chrono_literals;

void Humorous_Wasteland_Struggles::stop() { should_print = false; }

void Humorous_Wasteland_Struggles::start() { should_print = true; }

void Humorous_Wasteland_Struggles::printRandomQuote() {
    should_print = true;
    std::cout << Colors::PURPLE << std::flush;
    std::cout << strs[0] << "\n\n";
    for(int i = 1; i < strs.size() && should_print; ++i) {
        std::cout << Colors::MAGENTA << std::flush;
        std::cout << strs[i] << "\n\n";
        std::this_thread::sleep_for(3s);
    }
}

void Mr_New_Vegas_Radio_Themed::stop() { should_print = false; }

void Mr_New_Vegas_Radio_Themed::start() { should_print = true; }

void Mr_New_Vegas_Radio_Themed::printRandomQuote() {
    should_print = true;
    std::cout << Colors::PURPLE << std::flush;
    std::cout << strs[0] << "\n\n";
    for(int i = 1; i < strs.size() && should_print; ++i) {
        std::cout << Colors::MAGENTA << std::flush;
        std::cout << strs[i] << "\n\n";
        std::this_thread::sleep_for(3s);
    }
}

void Faction_Themed::stop() { should_print = false; }

void Faction_Themed::start() { should_print = true; }

void Faction_Themed::printRandomQuote() {
    should_print = true;
    std::cout << Colors::PURPLE << std::flush;
    std::cout << strs[0] << "\n\n";
    for(int i = 1; i < strs.size() && should_print; ++i) {
        std::cout << Colors::MAGENTA << std::flush;
        std::cout << strs[i] << "\n\n";
        std::this_thread::sleep_for(3s);
    }
}

void Mojave_Vibes_Courier_Energy::stop() { should_print = false; }

void Mojave_Vibes_Courier_Energy::start() { should_print = true; }

void Mojave_Vibes_Courier_Energy::printRandomQuote() {
    should_print = true;
    std::cout << Colors::PURPLE << std::flush;
    std::cout << strs[0] << "\n\n";
    for(int i = 1; i < strs.size() && should_print; ++i) {
        std::cout << Colors::MAGENTA << std::flush;
        std::cout << strs[i] << "\n\n";
        std::this_thread::sleep_for(3s);
    }
}

void Fallout_New_Vegas_References::stop() { should_print = false; }

void Fallout_New_Vegas_References::start() { should_print = true; }

void Fallout_New_Vegas_References::printRandomQuote() {
    should_print = true;
    std::cout << Colors::PURPLE << std::flush;
    std::cout << strs[0] << "\n\n";
    for(int i = 1; i < strs.size() && should_print; ++i) {
        std::cout << Colors::MAGENTA << std::flush;
        std::cout << strs[i] << "\n\n";
        std::this_thread::sleep_for(3s);
    }
}

bool isNumber(const std::string& str) {
    for (char ch : str) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}

void run(Humorous_Wasteland_Struggles& obj1, Mr_New_Vegas_Radio_Themed& obj2, Faction_Themed& obj3, Mojave_Vibes_Courier_Energy& obj4, Fallout_New_Vegas_References& obj5) {

    std::thread* current_thread = nullptr;
    int current_printing = 0;

    while(true) {
        std::string input;
        std::cin >> input;

        if (input == "q") {
            switch(current_printing) {
                case 1: obj1.stop(); break;
                case 2: obj2.stop(); break;
                case 3: obj3.stop(); break;
                case 4: obj4.stop(); break;
                case 5: obj5.stop(); break;
            }
            std::cout << "\nExiting Program...\n" << std::endl;
            break;
        }

        if (!isNumber(input)) {
            std::cout << "\nInvalid input! Please enter a number between 1 and 5, or 'q' to quit.\n" << std::endl;
            continue;
        }

        int x = std::stoi(input);

        switch(current_printing) {
            case 1: obj1.stop(); break;
            case 2: obj2.stop(); break;
            case 3: obj3.stop(); break;
            case 4: obj4.stop(); break;
            case 5: obj5.stop(); break;
        }

        if(current_thread != nullptr) {
            if(current_thread->joinable()) {
                current_thread->join();
            }
            delete current_thread;
        }

        current_printing = x;
        switch(x) {
            case 1:
                obj1.start();
                current_thread = new std::thread(&Humorous_Wasteland_Struggles::printRandomQuote, &obj1);
                break;
            case 2:
                obj2.start();
                current_thread = new std::thread(&Mr_New_Vegas_Radio_Themed::printRandomQuote, &obj2);
                break;
            case 3:
                obj3.start();
                current_thread = new std::thread(&Faction_Themed::printRandomQuote, &obj3);
                break;
            case 4:
                obj4.start();
                current_thread = new std::thread(&Mojave_Vibes_Courier_Energy::printRandomQuote, &obj4);
                break;
            case 5:
                obj5.start();
                current_thread = new std::thread(&Fallout_New_Vegas_References::printRandomQuote, &obj5);
                break;
            default:
                std::cout << "\nPlease enter a valid input between 1 to 5 or q for exit the program...\n";
                break;
        }
    }

    if(current_thread != nullptr && current_thread->joinable()) {
        current_thread->join();
        delete current_thread;
    }
}

void hideInputMode() {
    termios tty;
    tcgetattr(STDIN_FILENO, &tty);
    tty.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &tty);
}

void restoreInputMode() {
    termios tty;
    tcgetattr(STDIN_FILENO, &tty);
    tty.c_lflag |= ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &tty);
}

void restoreCursor(int signal) {
    std::cout << "\033[?25h";
    std::cout.flush();
    exit(signal);
}

void PrintContent(Colors ob) {
    std::cout << "\033[?25l" << std::flush;
    std::cout << ob.RED << std::flush;
    std::cout << "\n                         ||* Special Lines From Fallout New Vegas *||\n\n";
    std::cout << ob.YELLOW << std::flush;
    std::cout << "->Select The Type Of Lines From below Sections, You Can Also Select Between Execution.\n";
    std::cout << "->Select The Number As Followed By Section.\n\n";
    std::cout << ob.PURPLE << std::flush;
    std::cout << "1. Humorous_Wasteland_Struggles.\n";
    std::cout << "2. Mr_New_Vegas_Radio_Themed.\n";
    std::cout << "3. Faction_Themed.\n";
    std::cout << "4. Mojave_Vibes_Courier_Energy.\n";
    std::cout << "5. Fallout_New_Vegas_References.\n\n";
}


