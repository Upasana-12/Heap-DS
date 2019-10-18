#include <iostream>
using namespace std;
void max_heapify(int arr[],int i,int n)
{
    int l=2*i;
    int r=2*i+1;
    int max = i;
    if(l<=n && arr[l]>arr[i])
    {
        max = l;
    }
    else
    {
        max = i;
    }
    if(r<=n && arr[r]>arr[max])
    {
        max = r;
    }
    if(max!=i)
    {
        swap(arr[i],arr[max]);
        max_heapify(arr,max,n);
    }
}

void max_create_heap(int arr[],int n)
{
    for(int i=n/2;i>=1;i--)
    {
        max_heapify(arr,i,n);
    }
}

void max_maitainheap(int arr[],int i)
{
    if(i/2==0)
    return;

    if(arr[i/2]<arr[i])
    {
        swap(arr[i/2],arr[i]);
        max_maitainheap(arr,i/2);
    }
}

void max_insertheapify(int arr[],int &n,int v)
{
    arr[++n]=v;
    max_maitainheap(arr,n);
}

void max_deleteheapify(int arr[],int &n)
{
    arr[1]=arr[n--];
    max_heapify(arr,1,n);
}

void min_heapify(int arr[],int i,int n)
{
    int l=2*i;
    int r=2*i+1;
    int max = i;
    if(l<=n && arr[l]<arr[i])
    {
        max = l;
    }
    else
    {
        max = i;
    }
    if(r<=n && arr[r]<arr[max])
    {
        max = r;
    }
    if(max!=i)
    {
        swap(arr[i],arr[max]);
        min_heapify(arr,max,n);
    }
}

void min_create_heap(int arr[],int n)
{
    for(int i=n/2;i>=1;i--)
    {
        min_heapify(arr,i,n);
    }
}

void min_maitainheap(int arr[],int i)
{
    if(i/2==0)
    return;

    if(arr[i/2]>arr[i])
    {
        swap(arr[i/2],arr[i]);
        min_maitainheap(arr,i/2);
    }
}

void min_insertheapify(int arr[],int &n,int v)
{
    arr[++n]=v;
    min_maitainheap(arr,n);
}

void min_deleteheapify(int arr[],int &n)
{
    arr[1]=arr[n--];
    min_heapify(arr,1,n);
}