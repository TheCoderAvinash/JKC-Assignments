# Arrays
An array is a collection of homogeneous data elements described by a single name. Each element is referred by as a subscripted variable formed by affixing in the array name.<br>
A subscript/index enclosed within parentheses.<br>
-> a<sub>k</sub> is the mathematical notation for arrays<br>
-> a[k] is what we use in most of our programming languages<br>

**Size of an array:** `upper_bound - lower_bound + 1`

**Location of an element in an array** `location(a[k]) = base_address +(k - lower_bound)*size_of_the_element` (int has size 2, char has size 1...etc.)

### If you wish to execute the algorithms, add the header file on top, and add the code below at the bottom of your program;

```
void main()
{
    int a[] = {1, 2, 3, 4, 5};
    int f = name_of_function(a, 5, 3);
    printf("%d",f);
}
```