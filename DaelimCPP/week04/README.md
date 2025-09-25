```mermaid

classDiagram
    class Pokemon {
        +Pokemon()
        +virtual ~Pokemon()
        +virtual void attack()
    }
    
    class Pikachu {
        +Pikachu()
        +~Pikachu()
        +void attack()
    }
    
    class Squirtle {
        +Squirtle()
        +~Squirtle()
        +void attack()
    }
    
    Pokemon <|-- Pikachu
    Pokemon <|-- Squirtle
