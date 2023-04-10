import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        while(true) {
            String s = br.readLine();
            ArrayList<Character> charlist = new ArrayList<Character>();
            
            for(int i = s.length()-1; i >= 0 ; i--) {   
                if(s.charAt(i) == '#') {
                    return;
                }
                charlist.add(s.charAt(i));
            }
            
            int result = 0;
            for(int i = 0; i < charlist.size(); i++) {
 
                switch(charlist.get(i)) {
                case '-':
                    result += 0;
                    break;
                case '(':
                    result += 2 * Math.pow(8, i);
                    break;
                case '@':
                    result += 3 * Math.pow(8, i);
                    break;
                case '?':
                    result += 4 * Math.pow(8, i);
                    break;
                case '>':
                    result += 5 * Math.pow(8, i);
                    break;
                case '&':
                    result += 6 * Math.pow(8, i);
                    break;
                case '%':
                    result += 7 * Math.pow(8, i);
                    break;
                case '/':
                    result += -1 * Math.pow(8, i);
                    break;
                default:    
                    result += Math.pow(8, i);
                    break;
                }
            }
            System.out.println(result);
        }
 
    }
 
}
 
