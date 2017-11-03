LibFt
=====
> "Arbre renversé par le vent avait plus de branches que de racines."

## Construction
This lib is divided in 10 sub-folders :

|||
|---|---|
|**Colors**|Handles colors blend modes, complementary colors, and fade.|
|**Convert**|Basic conversions on numbers and strings, and a basic hash function.|
|**Hashmap**|Generic simple Hashmap.|
|**Input**|Stuff to get user or file input.|
|**Lists**|Lists structures, and functions to handle them.|
|**Math**|Vectors, Infinite Numbers, Trigonometry, and basics.|
|**Memory**|Functions to handle memory.|
|**Print**|Print texts to terminal.|
|**Strings**|Handle strings, make searches in them, check properties.|
|**Test Framework**|A quick and dirty test framework.|

## Compilation

|Rule|Description|
|----|-----------|
|`usemath`|Use `<math.h>` instead of `<ft_math.h>`. <br> Will be faster for trigonometry, vectors operations and geometry.|
|`tests`|Launch tests after compilation|

##### Compilation examples :
```sh
# Compile the lib with <math.h> functions
make usemath all
```

```sh
# Compile the lib and run the tests
make tests
```

```sh
# Compile the lib with <math.h> and run the tests
make usemath tests
```
