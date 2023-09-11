0x1C. C - Makefiles
-------------------

**0. Linear search** `[0-linear.c]` >> Function that searches for a value in an array of integers using the [Linear search algorithm][LSA].

**1. Binary search** `[1-binary.c]` >> Function that searches for a value in a sorted array of integers using the [Binary search algorithm][BSA].

**2. Big O #0** `[2-O]` >> Worst case `time complexity` of a linear search in an array of size `n`.

**3. Big O #1** `[3-O]` >> Worst case `space complexity` of an iterative linear search algorithm in an array of size `n`.

**4. Big O #2** `[4-O]` >> Worst case `time complexity` of a binary search in an array of size `n`.

**5. Big O #3** `[5-O]` >> Worst case `space complexity` of a binary search in an array of size `n`.

**6. Big O #4** `[6-O]` >> Space complexity of function/ algorithm below:

```c
int **allocate_map(int n, int m)
{
	int **map;

	map = malloc(sizeof(int *) * n);
	for (size_t i = 0; i < n; i++)
	{
		map[i] = malloc(sizeof(int) * m);
		}
	return (map);
}
```
**7. Jump search** `[100-jump.c]` >> Function that searches for a value in a sorted array of integers using the [Jump search algorithm][JSA].

**8. Big O #5** `[101-O]` >> Average case `time complexity` of a  jump search in an array of size `n`, using `step = sqrt(n)`.

**9. Interpolation search** `[102-interpolation.c]` >> Function that searches for a value in a sorted array of integers using the [Interpolation search algorithm][ISA].

**10. Exponential search** `[103-exponential.c]` >> Function that searches for a value in a sorted array of integers using the [Exponential search algorithm][ESA].

**11. Advanced binary search** `[104-advanced_binary.c]` >> Function that searches for a value in a sorted array of integers using the Binary search algorithm, and returns the index of the first value in the array.

**12. Jump search in a singly linked list** `[105-jump_list.c]` >> Function that searches for a value in a sorted list of integers using the Jump search algorithm, searching through a linked list.

**13. Linear search in a skip list** `[106-linear_skip.c]` >> Function that searches for a value in a sorted skip list of integers using the Linear search algorithm, searching through a linked list.

**14. Big O #6** `[107-O]` >> Average case `time complexity` of a jump search in a singly linked list of size `n`, using `step = sqrt(n)`.

**15. Big O #7** `[108-O]` >> Average case `time complexity` of a jump search in a skip list of size `n`, using `step = sqrt(n)`.



[LSA]: https://en.wikipedia.org/wiki/Linear_search
[BSA]: https://en.wikipedia.org/wiki/Binary_search_algorithm
[JSA]: https://en.wikipedia.org/wiki/Jump_search
[ISA]: https://en.wikipedia.org/wiki/Interpolation_search
[ESA]: https://en.wikipedia.org/wiki/Exponential_search
