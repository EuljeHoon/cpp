# Conditions and Branches in C++ #

## Comparison Result ##

Comparison returns integer:<br>
0 = False
1 or more? = True

## if statement ##

Checking something numerically

```
int main() {
    int x = 5;
    bool comparisonResult = x == 5;
    if (comparisonResult) {
        Log("Hello World!");
    }
    std::cin.get();
}
```
If comparisonResult is 0, run Log, if not ignore
```
if (1) {
    Log("Hello World!");
}
```
It is going to print Hello World since 1 means True<br>

## else if ##
```
else if {

}
```
is same as
```
else {
    if {

    }
}
```