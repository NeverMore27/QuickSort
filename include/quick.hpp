#include <iostream> 
#include <algorithm>
#include <iterator>

template <class Iterator>
void quickSort(Iterator begin, Iterator end)
{
	Iterator left=begin, right=end;
	Iterator f = begin+distance(begin, end) / 2;
	do
	{
		while (*left < *f) left++;
		while (*right> *f) right--;
		if (left <= right)
		{
			swap(left, right);
			left++;
			right--;
		}
		} while (left <= right);
		if (left < 0) quickSort(right, end);
		if (end > left) quickSort(begin, left);
	
}
