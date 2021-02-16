# sorting-algorithms-in-C
A list of basic sorting algorithms in C

## algorithms with time complexity of $O(N^{2})$
1. bubble sorting
Bubble sorting is a simple algorithm that compares every two elements of the list. Once found a element bigger than the latter, swap these two elements.
2. selection sorting
Selection sorting is a simple algorithm that selects the smallest element in the list and put it at the head the list, then repeat this procedure in the remaining list until the list is sorted.
3. insertion sorting
Insertion sorting is a simple algorithm that scans the sorted part of list for the proper position to insert the new element, then repeat this procedure in the remaining list until the list is sorted.
## Shell sorting
Shell sorting is a development of insertion sorting. We divide the list into sublists which contain the elements between which there is a same gap. We sort the sublists and divide the new list with a smaller gap to repeat this procedure until the gap is 1. This algorithm is a great breakthrough as the first sorting algorithm with a time complexity of o($N^2$).
## algorithms with time complexity of $O(NlogN)$
1. quick sorting
Quick sorting is an algorithm that applies the divide-and-conquer strategy. First we find a reference element and compare every other elements with the reference element to put the smaller elements ahead of the reference element and bigger ones behind it. Then we repeat this procedure in the both sides of the reference element until there is only one element in the side.
2. merge sorting
Merge sorting is based on the idea that we can merge two ordered list to one ordered list with the time complexity of $O(N)$. Given a disordered list, we can divide it into two sublists and divide both sublists again and again until there is only one element in a sublist, which is always ordered. Then we merge the sublists until they are merged to the complete list.
3. heap sorting
Heap sorting is based on the heap structure. This data structure is a kind of tree with a feature that the value of the parent node is always bigger than that of the child node. We build a heap out of the disordered list and pop the root node, then repeat this procedure in the remaining list.
## Radix sorting
It is proved that all the sorting algorithms based on comparisons has the time complexity of $\Omega(N)$. However, if we sort the elements without comparing, the program is possible to run faster. Radix sorting is one of them with time complexity of $O(N)$. This algorithm can only be used on the integers. First we search for the biggest element and calculate its digit. Then we go through the list and count the quantities of the elements with the specific number in the specific digit. After that, sort the elements by the corresponding number. Then we repeat this procedure digit by digit to finish the sorting.