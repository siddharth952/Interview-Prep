import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class A {

    /*

        At most 30 steps so runtime is fast
        BruteF how many times to increment b and we increment it
        Then we divide a by b till its 0

    */
    public static void print(Object x){
        System.out.println(x);
    }

    public static void main(String[] args) {
        // ================= Code here =============
        FastScanner fs=new FastScanner();
        int T=fs.nextInt(); // Test Cases
        for (int tt=0; tt<T; tt++) {
            int a=fs.nextInt(),b = fs.nextInt();
            int best = Integer.MAX_VALUE;
            for (int times=0;times<30;times++){
                best = Math.min(best, times+count(a,b+times));
            } print(best);
        }
    }




    static int count(int a, int b){
        if (b==1) return 1_000_000_000;
        int c = 0;
        while (a!=0){
            a /= b;
            c++;
        }
        return c;
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