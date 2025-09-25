```mermaid
classDiagram
    class Person {
        +string name
    }

    class UndergraduateStudent {
        +double gpa
        +warn()
    }

    class DormitoryStudent {
        +int roomNumber
        +warn()
    }

    class UndergraduateDormitoryStudent {
    }

    %% 상속 관계
    Person <|.. UndergraduateStudent : virtual
    Person <|.. DormitoryStudent : virtual
    UndergraduateStudent <|-- UndergraduateDormitoryStudent
    DormitoryStudent <|-- UndergraduateDormitoryStudent