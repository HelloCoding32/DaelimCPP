# 2025 Fall Semester C++ Programming Course Remote Repository

classDiagram
    direction TB
    
    class Pokemon {
        <<abstract>>
        +Pokemon()
        +virtual ~Pokemon()
        +virtual void attack() const = 0
        +getName() const string
        -string name
        -int level
    }
    
    class Pikachu {
        +Pikachu()
        +~Pikachu()
        +void attack() const
        +void thunderbolt()
        -int electricPower
    }
    
    Pokemon <|-- Pikachu
    
    note for Pokemon "Abstract base class\nDefines common interface"
    note for Pikachu "Concrete implementation\nElectric-type Pokemon"