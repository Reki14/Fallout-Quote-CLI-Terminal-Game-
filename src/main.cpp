#include "Fallout.cpp"

int main() {
    int x = 0;
    Colors ob;
    Humorous_Wasteland_Struggles obj1;
    Mr_New_Vegas_Radio_Themed obj2;
    Faction_Themed obj3;
    Mojave_Vibes_Courier_Energy obj4;
    Fallout_New_Vegas_References obj5;

    signal(SIGINT, restoreCursor);

    PrintContent(ob);

    run(obj1, obj2, obj3, obj4, obj5);

    std::cout << "\033[?25h" << std::flush;
    return 0;
}


