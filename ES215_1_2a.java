import java.util.Scanner;
import java.lang.Math;

public class ES215_1_2a {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Size of the matrices: ");
        int n = scan.nextInt();
        int[][] M1 = new int[n][n];
        int[][] M2 = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                M1[i][j] = (int) (10 * Math.random());
                M2[i][j] = (int) (10 * Math.random());
            }
        }
        int[][] M = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int sum = 0;
                for (int k = 0; k < n; k++) {
                    sum += M1[i][k] * M2[k][j];
                }
                M[i][j] = sum;
            }
        }
        scan.close();
    }
}
