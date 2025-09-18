```mermaid



classDiagram

&nbsp;   class Pokemon {

&nbsp;       +Pokemon()

&nbsp;       +~Pokemon() virtual

&nbsp;       +attack() virtual void

&nbsp;   }

&nbsp;   

&nbsp;   class Pikachu {

&nbsp;       +Pikachu()

&nbsp;       +~Pikachu()

&nbsp;       +attack() void

&nbsp;   }
&nbsp; 

&nbsp;    class Squirtle {

&nbsp;         +Squirtle()

&nbsp;         +~Squirtle()

&nbsp;        +attack() void

&nbsp;     }



&nbsp;   

&nbsp;   Pokemon <|-- Pikachu : inheritance

&nbsp;   Pokemon <|-- Squirtle : inheritance

&nbsp;  ```

