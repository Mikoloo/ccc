import java.util.Scanner;
//--------pip06
public class Main {
    public static void main(String[] args) {

        int[] genArr = generateArray(3);
        printArray(genArr);
        System.out.println("-----------------------------------------------------");
        int[] sortedArr = sort(genArr);
        printArray(sortedArr);
        System.out.println("-----------------------------------------------------");
        int[] revArr = reverse(sortedArr);
        printArray(revArr);
        System.out.println("-----------------------------------------------------");
        System.out.println(equalsReverse(sortedArr,revArr));
    }

    public static int[] generateArray(int n){
        int[] array = new int[n];
        for (int i = 0 ; i < array.length;i++){
            array[i]=(int)(Math.random()*100);
        }
        return array;
    }
    public static int[] sort(int[] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = i + 1; j < array.length; j++) {
                int tmp = 0;
                if (array[i] > array[j]) {
                    tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
                }
            }
        }
        return  array;
    }
    public static int[] reverse(int[] array){
        int k = array.length-1;
        int[] reversearray = new int[array.length];
        for (int i = 0;i < array.length;i++){
            reversearray[k]=array[i];
            k--;
        }
        return reversearray;
    }

    public static boolean equalsReverse(int[] array1,int[] array2){
        boolean wynik=false;
        int value = array2.length-1;
        for (int i = 0;i< array2.length;i++){
            if (array1[i]==array2[value]){
                wynik = true;
            }else {
                wynik = false;
            }
            value--;
        }
        return wynik;
    }
    public static void printArray(int[] array){
        for (int i = 0; i < array.length;i++){
            System.out.println(array[i]);
        }
    }
}
