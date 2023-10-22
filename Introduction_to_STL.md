# STL 

## Why STL?
STL provides most of the standard tools for implementing standard Data structure.

## Compenents of STL:
It is a collection of Algorithms, Data Structures and other components that can be used to simplify the development of C++ programs.
The main components are:
1. Containers: These are used to store and manipulate data.
2. Algorithms: The STL library provides basic range of algorithms.
3. Iterators: They provide a way to traverse through the containers.
4. Function Objects: Also called sa functors, are object that can be used as function arguments to algorithms.
5. Adapters: Adapters are components that modify the behavior of other components.

### Algorithms:
#### Sorting:
It is one of the basic functions which used for problem solving. In STL we use a combination of Quick Sort, Insertion Sort and Heap Sort.
It uses *O(n.log(n))* time to run.
```sort(startaddress, endaddress); //Sorts in therange of [startaddress, endaddress)```

For increasing Sort:
```sort(startaddress, endaddress, greater<datatype>())```

**Using Custom Comparator** 

Custom comparators help us define our own functions for using sorting.
```
bool Custom(DataType A, DataType B){
    if(A < B) return true;
    return false;
} // Generally to implement a decreasing order we use A > B.
``` 

#### Search:
It is also a simple Binary Search algorithm which requires that the given array be sorted when in use.
```binary_search(startaddress, endaddress, target)``` returns true if found else returns false.
We use ```bsearch(key, startaddress, number_of_elements,size_of_DataType_in_bytes, int (*comp)(const void*, const void*))```
Note that in this declaration we use a different kind of custom Comarator.
```
int compare(const void* ap, const void bp) {
    const int* a = (int*) ap;
    const int* b = (int*) bp;

    if (*a < *b) return -1;
    else if (*b < *a) return 1;
    else return 0;
}
```

This returns the key if present or return the NULL. Incase of duplicates it only returns one key.

**Searching an Unsorted Array/Vector** ```find(first_iter, last_iter, key)```

#### Reverse:
We use this to reverse a list/vector/array. Here we use the following code:
```reverse(start_iterator, end_iterator)```

#### Other Important Algorithms:
1. ```*max_element(first_iterator, last_iterator)```
2. ```*min_iterator(first_itereator, last_iterator)```
3. ```accumulator(first_iterator, last_iterator, initial_value_of_sum)```
4. ```lower_bound(first_iter, last_iter, x)``` this return the pointer to the first element in the vector that is not less than x.
5. ```upperbound(first_iter, lst_iter, x)```
6. ```arr.erase(iter_to_be_erased)``` remaining vector is adjusted afterwards.
7. ```arr.erase(unique(first_iter, last_iter), last_iter)``` this is to basically to create an array with only unique elements.
8. ```distance(first_iter, last_iter)```

#### Important Algorithms for Array:
1. ```all_of(first_iter, last_iter, function)``` funtion to check condition. This return a bool value.
2. ```any_of()```
3. ```none_of()```

### Numeric Algorithms:
Similar to arrays, however they are extremely efficient when it come to  applying mathematical operations.
```C++
valarray<int> V = {1, 2, 3, 4}
V.apply([](int x){return x = x+5};)
```

This is .apply() is useful for modifying the given valarray. Similarly we can use .max(), .min(), .shift(int n), .swap(valarray V).


## Containers:

### Sequence Containers:

#### Vectors:
1. declaration: 
```C++
vector<int> V = {1,2,3,4};

// Iterators:
vector<int>::iterator Iterator_first = V.front();
vector<int>::iterator Iterator_last = V.end();
vector<int>::iterator Reverse_Iter = V.rfront();
vector<int>::iterator Reverse_Iter_last = V.rend();

// Containers:
int n = V.size();
int n_max = V.max_size();
int C = V.capacity();
V.resize(int n_new, int val);  // This resizes the array to size n_new, deletes certain elements if n_new < n and if n < n_new then fills the new empty spaces with val.

// Element access:
int data = V.at(int position);

```