import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.*;


public class B {

    /*

     */
    public static void main(String[] args) {
        // ================= Code here =============
        FastScanner fs=new FastScanner();
        int n=fs.nextInt();
        int nQueries = fs.nextInt();
        int k =fs.nextInt();
        int[] a = fs.readArray(n);
        PrintWriter out = new PrintWriter(System.out);
        for (int qq=0; qq<nQueries; qq++) {

            int l = fs.nextInt()-1, r=fs.nextInt()-1;
            int nZeros = r - l + 1;
            int nOnes = a[l]-1 + k-a[r];
            int nTwos = k-nZeros-nOnes;
            int ans = nOnes + nTwos*2;
            out.println(ans);

        }
        out.close();
    }

    //=================== Template =====
    static class FastScanner {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st=new StringTokenizer("");
        String next() {
            while (!st.hasMoreTokens())
                try {
                    st=new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }
        int[] readArray(int n) {
            int[] a=new int[n];
            for (int i=0; i<n; i++) a[i]=nextInt();
            return a;
        }
        long nextLong() {
            return Long.parseLong(next());
        }
    }


}