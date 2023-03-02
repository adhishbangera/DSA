 class Program
    {
        public static int minMax(int[] A)
        {
            int min = A[0],max = A[0];
            for(int i=0;i<A.Length;i++)
            {
                if (A[i]>max) { max = A[i]; }
                if (A[i]<min) { min = A[i]; }
            }
            return min+max;
        }

        public static void Main(string[] args)
        {
            int[] A = {2,2,1,4,5,6 };
            Console.WriteLine(minMax(A));

        }
    }
