import java.util.Scanner;
import java.lang.Math;

public class ES215_1_2b {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Size of the matrices: ");
        int n = scan.nextInt();
        double[][] M1 = new double[n][n];
        double[][] M2 = new double[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                M1[i][j] = 10 * Math.random();
                M2[i][j] = 10 * Math.random();
            }
        }
        long start = System.nanoTime();
        double[][] M = new double[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                double sum = 0;
                for (int k = 0; k < n; k++) {
                    sum += M1[i][k] * M2[k][j];
                }
                M[i][j] = sum;
            }
        }
        long end = System.nanoTime();
        long nanosecs = end - start;
        System.out.println(nanosecs);
        scan.close();
    }
}