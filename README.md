# Task #0: Ejercicios de Templates de Funciones  
**course:** Programación III  
**unit:** 2  
**cmake project:** prog3_unit2_template_function_v2023_1
## Instructions
Subir a gradescope los siguientes archivos:
- `P1.h`, `P1.cpp`
- `P2.h`, `P2.cpp`
- `P3.h`, `P3.cpp`
- `P4.h`, `P4.cpp`

## Question #1 - Contar caracteres
  
Crear una función template `count_char` que reciba como parámetro una cadena de caracteres de cualquiera de las siguientes colecciones: 
    - cadena delimitada por 0,  
    - `std::string`, 
    - `std::vector`, 
    - `std::array` 

ademas reciba un carácter representado por el tipo de datos `char`. 

y retorne la cantidad de veces que el carácter aparece en la cadena de caracteres. La función no es sensible a las mayúsculas.

**Use Case #1 cadena delimitada por 0**
```cpp
auto count = utec::count_char(
        "Esta es una prueba", 
        'e')
std::cout << "count: " << std::endl;
```
**Use Case #2 cadena std::string**
```cpp
string text = "Esta es una prueba";
auto count = utec::count_char(text, 'e')
std::cout << "count: " << std::endl;
```

**Use Case #3 cadena std::array**
```cpp
std::array text = {'E','s','t','a',' ',
                   'e','s',' ',
                   'u','n','a',' ',
                   'p','r','u','e','b','a'};
auto count = utec::count_char(text, 'e')
std::cout << "count: " << std::endl;
```

**Use Case #4 cadena std::deque**
```cpp
std::deque text = {'E','s','t','a',' ','e','s',' ',
                    'u','n','a',' ',
                    'p','r','u','e','b','a'};
auto count = utec::count_char(text, 'e')
std::cout << "count: " << std::endl;
```

## Question #2 - Split
Generalizar la función `split` de modo que para cualquiera de los siguientes contenedores realice el split: cadena delimitada por 0, `std::string`, `std::w_string`, `std::u16string`, `std::u32string` y que lo delimite por un carácter.

**Use Case #1 cadena delimitada por 0**
```cpp
auto count = utec::split(
        "Universidad de Ingenieria y Tecnologia", 
        ' ');
std::cout << "count: " << std::endl;
```
**Use Case #2 cadena std::string**
```cpp
string text = "Ciencia.de.la.Computacion";
auto count = utec::count_char(text, '.')
std::cout << "count: " << std::endl;
```

## Question #3 - Sumatoria de arreglos estáticos
Crear template de función `calcular_total` que para cualquiera de los siguientes contenedores: arreglo estático, `std::array`, `std::vector`, `std::deque`, retorne el total.
  
**Use Case #1: arreglo estático**  
```cpp
int arr[] = {11, 12, 13, 14, 20, 23};
auto total = calcular_total(arr);
std::cout << total << std::endl;
```

**Use Case #2: array**
```cpp
std::array arr = {11u, 12u, 13u, 14u, 20u, 23u};
auto total = calcular_total(arr);
std::cout << total << std::endl;
```

**Use Case #3: vector**
```cpp
std::vector vec = {11.5, 12.5, 13.0, 14.0, 20.0, 23.0};
auto total = calcular_total(vec);
std::cout << total << std::endl;
```

**Use Case #4: deque**
```cpp
std::deque deq = {11.5f, 12.5f, 13.0f, 14.0f, 20.0f, 23.0f};
auto total = calcular_total(arr);
std::cout << total << std::endl;
```

## Question #4 - Ordenar colección
Crear template de función `quick_sort` que permita ordenar en forma ascendente utilizando el algoritmo quick_sort para cualquiera de los siguientes contenedores: `std::vector`, `std::deque` que contenga objetos que tenga implementada la sobrecarga de los operadores de comparación.
  
Para realizar la prueba con el ejemplo point, implemente la clase `point_t` que tenga la siguiente declaración básica, debera de completar la declaración con las sobrecargas o métodos que se requieran. 

El criterio de ordenamiento de los puntos sera la distancia entre el punto y la coordenada `(0, 0, 0)`

```cpp
class point_t {
    int x = 0;
    int y = 0;
    int z = 0;
public:
    point_t() = default;
    point_t(int x, int y, int z);
};    
```

**Use Case # 1: Enteros**
```cpp
std::vector vec = {1, 4, 5, 2, 3};
auto vec_sorted = utec::quick_sort(vec);
for(const auto& item: vec_sorted)
    std::cout << item << std::endl;
```

**Use Case # 2: Doubles**
```cpp
std::deque deq = {10.0, 4.5, 5.3, 2.4, 3.3};
auto deq_sorted = utec::quick_sort(deq);
for(const auto& item: deq_sorted)
    std::cout << item << std::endl;
```

**Use Case # 3: Doubles**
```cpp
std::vector vec = {
        point_t(1, 1, 1), 
        point_t(3, 3, 3), 
        point_t(5, 5, 5), 
        point_t(2, 2, 2), 
        point_t(4, 4, 4)};
auto vec_sorted = utec::quick_sort(vec);
for(const auto& point: vec_sorted)
    std::cout << point << std::endl;
```

