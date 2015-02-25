LibFt
=====
> "Arbre renversé par le vent avait plus de branches que de racines."

##Construction
This lib is divided in 9 sub-folders :

|||
|---|---|
|**Colors**|Handles colors blend modes, complementaty color, and fade.|
|**Convert**|Basic conversions on numbers and strings, and a basic hash function.|
|**Hashmap**|Generic simple Hashmap to allocate variables dynamically, and be able to search in it.|
|**Input**|Stuff to get user or file input.|
|**Lists**|Lists structures, and functions to handle them.|
|**Math**|Vectors, Infinite Numbers, Trigonometry, and basics.|
|**Memory**|Functions to handle memory.|
|**Print**|Print texts to terminal.|
|**Strings**|Handle strings, make searches in them, check properties.|

##Compilation

|Rule|Description|
|----|-----------|
|`usemath`|Use <math.h> for Math module, vectors properties. Will be faster.|

Compilation example :
```sh
#Will compile the lib with <math.h> functions
make usemath all
```

##Things to do
* Add Vectors Operations
* Better Sin and Cos by putting angle to [-π;π] interval.
* Check Hashmaps functions
* Normalize Infinite Addition/Substraction
* Add Infinite Multiplication
* Handle zero in Infinite Numbers
* Create Generic Lists
