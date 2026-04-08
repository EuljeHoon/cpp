# Loops in C++ #

## For loops ##

```
int main() {
    for (int i = 0; i < 5; i++) {
        Log("Hello World!");
    }
    std::cin.get();
}
```

## While loops ##

```
int i = 0;
    while(i < 5) {
        Log("Hello World!");
        i++;
    }
    std::cin.get();
```

## do while ##

```
int j = 0;
    do {
        Log("Hello World");
        j++;
    }while (j < 5);
```
In a normal while loop, the condition is checked before executing the loop body.<br>
In contrast, a do-while loop executes the loop body first and then checks the condition.