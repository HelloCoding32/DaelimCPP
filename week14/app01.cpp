#include "stack.cpp"

class Pokemon {
private:
    int hp;
    string name;
public:
    Pokemon() : hp(1), name("무명"){};
    Pokemon(int hp, string name) : hp(hp), name(name) {
        cout << name << " 포켓몬 생성됨\n";
    };
    int getHp() const{
        return hp;
    }
    string getName() const {
        return name;
    }
};


ostream& operator<<(ostream& o, Pokemon& right) {
    o << right.getName() << "(hp: " << right.getHp() << ")" << endl;
    return o;
}

int main()
{
    typedef Stack<Pokemon> PokemonStack;
    typedef Stack<int> iStack;

    Pokemon pikachu;
    Pokemon squirtle(100,"꼬부기");


    iStack stacki(10);
    PokemonStack stackp(3);
    Stack<double> stacked(3);
    stackp.push(squirtle);
    stackp.push(pikachu);

    stacki.push(5);
    stacki.push(6);
    stacki.push(7);
    stacki.push(3);
    cout << stacki.pop() << endl;
    cout << stacki.pop() << endl;
    // cout << stacked.pop() << endl; // stack is empty


    cout << pikachu;
    return 0;
}