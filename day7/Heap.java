//Max heap
class Heap {
    static int arr[] = { 3, 2, 4, 1, 8, 9, 7, 6 };
    static int heap_size = arr.length;

    static void heapify(int arr[], int i) {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int largest = i;
        if (l < heap_size && arr[l] > arr[i])
            largest = l;
        if (r < heap_size && arr[r] > arr[largest])
            largest = r;
        if (i != largest) {
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;
            // arr[i] ^= arr[largest] ^= arr[i] ^= arr[largest];
            heapify(arr, largest);
        }
    }

    static void build_heap(int arr[]) {
        for (int i = (heap_size / 2) - 1; i >= 0; i--)
            heapify(arr, i);
    }

    static void heap_sort(int arr[]) {
        while (heap_size > 0) {
            build_heap(arr);
            heap_size--;
            int temp = arr[heap_size];
            arr[heap_size] = arr[0];
            arr[0] = temp;
        }
    }

    public static void main(String[] args) {

        // build_heap(arr);
        heap_sort(arr);
        for (int i : arr)
            System.out.print(i + " ");
    }
}