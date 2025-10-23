#include <iostream>
#include <string>
using namespace std;

class Pokemon {
private:
    int level;
    string name;
public:
    Pokemon(const string& name, int level) : name(name), level(level) {

    }
    string getName() const {
        return name;
    }
    int getLevel() const {
        return level;
    }

    // friend ostream& operator<<(ostream& os, const Pokemon& pokemon) {
    //     os << pokemon.name << " " << pokemon.level << endl;
    //     return os;
    // }
};

ostream& operator<<(ostream& os, const Pokemon& pokemon) {
    os << pokemon.getName() << " " << pokemon.getLevel() << endl;
    return os;
}

int main() {
    Pokemon p1("Pikachu", 5);
    Pokemon p2("Squirtle", 3);

    cout << p1; // 포켓몬 이름(레벨)
    cout << p2; // 폴
    return 0;
}