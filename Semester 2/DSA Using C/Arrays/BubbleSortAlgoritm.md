# Bubble Sort Algorithm (Raw)

```
begin BubbleSort(arr)
    for all array elements
        if arr[i] > arr[i-1]
            swap(arr[i], arr[i-1])
        end if
    end for
    return arr
end BubbleSort            
```

# Bubble Sort Algorithm (Optimised)

```
begin BubbleSort(arr)
    n = length(arr)
    repeat
        swapped = false
        for i = 1 to n-1
            if arr[i-1] > arr[i]
                swap(arr[i-1], arr[i])
                swapped = true
            end if
        end for
        n = n-1
    until not swapped
end BubbleSort                
```