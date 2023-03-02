 class Program
    {

        public static void reverseArray(int[] array,int start,int end) {

            int temp;
            if (start >= end)
            {
                return;
            }

            temp= array[start];
            array[start] = array[end];
            array[end] = temp;
            reverseArray(array, start+1, end-1);
        }
       public static void printArray(int[] A,int size)
        {
            for(int i = 0; i < size; i++)
            {
                Console.WriteLine(A[i]);
            }
        }

        public static void Main(string[] args)
        {
            int[] A = {1,2,3,4,5,6 };
            printArray(A, 6);
            reverseArray(A, 0, 5);
            Console.WriteLine(" ");
            printArray(A, 6);
        }
    }
