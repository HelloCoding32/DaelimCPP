```mermaid
classDiagram
    class Animal {
        <<abstract>>
        +makeSound()*
    }

    class Dog {
        +makeSound()
    }

    class Cat {
        +makeSound()
    }

    Animal <|-- Dog
    Animal <|-- Cat