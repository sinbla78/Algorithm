import java.io.*;
import java.util.StringTokenizer;

public class Main{
    public static void main(String[] args)throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String str = br.readLine();
        
        if(str.equals("NLCS")){
            System.out.println("North London Collegiate School");
        }
        else if(str.equals("BHA")){
            System.out.println("Branksome Hall Asia");
        }
        else if(str.equals("KIS")){
            System.out.println("Korea International School");
        }  
        else if(str.equals("SJA")){
            System.out.println("St. Johnsbury Academy");
        }

    }
}