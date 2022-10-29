using System;
namespace InsertionSort
{

    internal class InsertionSort
    {


        static void sort(double[] array)
        {
            for(int i = 1; i < array.Length; i++)
            {
                double key = array[i];
                int j = i - 1;



                while (j>=0&&key < array[j])
                {
                    array[j+1] = array[j];
                    --j;
                }
                array[j+1] = key;  
            }
        }

        static void printArray(double[] array)
        {
            foreach(var el in array)
            {
                Console.Write($"{el}|");
            }
            Console.WriteLine();
        }
       

        static void Main(string[] args)
        {

            var tab = new double[] { 3.2, 5, 1, 5, 2, 5, 6, 7, 4.2, 5.7 };
            Console.WriteLine("Array before sorting:");
            printArray(tab);
            sort(tab);
            Console.WriteLine("Array after sorting:");
            printArray(tab);
        }


    }
}


