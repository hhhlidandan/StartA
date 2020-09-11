//#include<stdio.h>
//#include<stdlib.h>
//
//void Swap(int *a, int *b)
//{
//	*a = *a^*b;
//	*b = *a^*b;
//	*a = *a^*b;
//}
//void Adjust(int arr[],int size,int parent)
//{
//	int child = parent * 2 + 1;
//	while (child<size)
//	{
//		if (arr[child] > arr[child + 1] && child + 1 < size)
//			child = child + 1;
//		if (arr[child] < arr[parent])
//		{
//			Swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//			return;
//	}
//}
//void HeapSort(int arr[], int size)
//{
//	for (int root = (size - 2) >> 2; root >= 0; root--)
//		Adjust(arr, size, root);
//	int end = size - 1;
//	while (end)
//	{
//		Swap(&arr[end],&arr[0]);
//		Adjust(arr, end, 0);
//		end--;
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//void Swap(int *a,int *b)
//{
//	*a = *a^*b;
//	*b ^= *a;
//	*a ^= *b;
//}
//void Adjust(int *arr, int size, int parent)
//{
//	int child = parent * 2 + 1;
//	while (child < size)
//	{
//		if (arr[child + 1]>arr[child] && child + 1 < size)
//			child = child + 1;
//		if (arr[child] > arr[parent])
//		{
//			Swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		return;
//	}
//}
//void HeapSort(int *arr,int size)
//{
//	for (int i = (size - 2) >> 1; i >= 0; i--)
//	{
//		Adjust(arr,size,i);
//	}
//	int end = size - 1;
//	while (end)
//	{
//		Swap(&arr[0], &arr[end]);
//		Adjust(arr, end, 0);
//		end--;
//	}
//}

//void Adjust(int *arr,int parent,int size)
//{
//	int child = parent * 2 + 1;
//	while (child < size)
//	{
//		if (arr[child] > arr[child + 1] && child + 1 < size)
//			child = child + 1;
//		if (arr[parent] > arr[child] && child < size)
//		{
//			Swap(&arr[parent], &arr[child]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//			return;
//	}
//}
//void HeapSort(int *arr, int size)//降序 建小堆
//{
//	for (int root = (size - 2) >> 1; root >= 0; root--)
//		Adjust(arr, root,size);
//	int end = size - 1;
//	while (end)
//	{
//		Swap(&arr[end], &arr[0]);
//		Adjust(arr, 0, end);
//		end--;
//	}
//}
//int main()
//{
//	int arr[] = { 2, 0, 5, 9, 3, 7, 6, 4 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	HeapSort(arr, size);
//	for (int i = 0; i < size; i++)
//		printf("%d ", arr[i]);
//	system("pause");
//	return 0;
////	//1.建堆：排降序就建小堆，即向下调整 
////	//2.排序 交换堆顶与最后一个元素，再向下调整
//}