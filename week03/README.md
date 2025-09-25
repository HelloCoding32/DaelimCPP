# 2025 Fall Semester C++ Programming Course Remote Repository

```mermaid
classDiagram
    class Pokemon {
        +Pokemon()
        +~Pokemon()
        +attack() const
    }

    class Pikachu {
        +Pikachu()
        +~Pikachu()
        +attack() const
    }

    Pokemon <|-- Pikachu : inheritance