#include <iostream>
#include <string>

using namespace std;

// Function prototype for battle simulation
float battle(string clan1_name, float clan1_power, string clan2_name, float clan2_power);

// Base class representing clans
class Clans {
public:
    string leader;
    float clanPower;
    int numMembers;
    int rank;

    // Constructor to initialize clan attributes
    Clans(string leader, float clanPower, int numMembers, int rank) {
        this->leader = leader;
        this->clanPower = clanPower;
        this->rank = rank;
        this->numMembers = numMembers;
    }
};

// Derived clan classes
class Warlocks : public Clans {
public:
    Warlocks(string leader, float clanPower, int numMembers, int rank)
        : Clans(leader, clanPower, numMembers, rank) {}
};

class Vile : public Clans {
public:
    Vile(string leader, float clanPower, int numMembers, int rank)
        : Clans(leader, clanPower, numMembers, rank) {}
};

class Sparkle : public Clans {
public:
    Sparkle(string leader, float clanPower, int numMembers, int rank)
        : Clans(leader, clanPower, numMembers, rank) {}
};

class Gladiators : public Clans {
public:
    Gladiators(string leader, float clanPower, int numMembers, int rank)
        : Clans(leader, clanPower, numMembers, rank) {}
};

class Catholics : public Clans {
public:
    Catholics(string leader, float clanPower, int numMembers, int rank)
        : Clans(leader, clanPower, numMembers, rank) {}
};

class Orthodox : public Clans {
public:
    Orthodox(string leader, float clanPower, int numMembers, int rank)
        : Clans(leader, clanPower, numMembers, rank) {}
};

int main() {
    // Creating instances of clans
    Warlocks warlocks("Alkurd", 300, 18, 5);
    Vile vile("Vilian", 569, 16, 4);
    Sparkle sparkle("Erra", 700, 22, 3);
    Gladiators gladiators("Marksweb", 1000, 25, 2);
    Catholics catholics("Pope", 1300, 12, 1);
    Orthodox orthodox("Unspeakable", 1300, 14, 1);

    string choice;

    // Calculating alliance powers
    float westPowers = orthodox.clanPower + sparkle.clanPower + vile.clanPower;
    float eastPowers = catholics.clanPower + warlocks.clanPower + gladiators.clanPower;

    // Displaying alliance information
    cout << "The West alliance leaders are " << orthodox.leader << ", " << sparkle.leader << ", and " << vile.leader << "\n";
    cout << "Their combined powers is " << westPowers << "!" << "\n";
    cout << "Their leader is " << orthodox.leader << "\n";

    cout << "\n";

    cout << "The East alliance leaders are " << catholics.leader << ", " << warlocks.leader << ", and " << gladiators.leader << "\n";
    cout << "Their combined powers is " << eastPowers << "!" << "\n";
    cout << "Their leader is " << catholics.leader << "\n";

    cout << "Which Alliance do you choose: \n";
    cin >> choice;

    if (choice == "west") {
        cout << "You are with the mighty West powers! Which clan do you choose\n";
        cout << "O for Orthodox\n";
        cout << "S for sparkle\n";
        cout << "V for Vile\n";
        cin >> choice;

        if (choice == "O") {
            cout << "You are now in the Orthodox clan!\n";
        } else if (choice == "S") {
            cout << "You are now in the Sparkle clan!\n";
        } else if (choice == "V") {
            cout << "You are now in the Vile clan!\n";
        }
    } else if (choice == "east") {
        cout << "You are with the mighty East powers! Which clan do you choose\n";
        cout << "C for Catholics\n";
        cout << "W for Warlocks\n";
        cout << "G for Gladiators\n";
        cin >> choice;

        if (choice == "C") {
            cout << "You are now in the Catholics clan\n";
        } else if (choice == "W") {
            cout << "You are now in the Warlocks clan\n";
        } else if (choice == "G") {
            cout << "You are now in the Gladiators clan\n";
        }
    } else {
        cout << "Invalid choice. Please choose 'west' or 'east'.\n";
    }

    return 0;
}

// Function to simulate a battle between two clans
float battle(string clan1_name, float clan1_power, string clan2_name, float clan2_power) {
    float power_gap;

    cout << clan1_name << " VS " << clan2_name << "\n";

    if (clan1_power > clan2_power) {
        cout << clan1_name << " won this battle!\n";
        power_gap = clan1_power - clan2_power;
        cout << "The power difference is: " << power_gap << "\n";
    } else if (clan1_power < clan2_power) {
        cout << clan2_name << " won this battle!\n";
        power_gap = clan2_power - clan1_power;
        cout << "The power difference is: " << power_gap << "\n";
    } else {
        cout << "It's a tie!\n";
    }

    return 0;
}
