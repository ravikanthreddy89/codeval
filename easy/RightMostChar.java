import java.io.File;
import java.util.Scanner;


public class Main {

	public static void main(String [] args){
		Scanner input;
		
		try{
			input= new Scanner(new File(args[0]));
			while(input.hasNext()){
				String ip= input.nextLine();
				String sent=ip.substring(0, ip.length()-2);
				String match=ip.substring(ip.length()-1);
				
				System.out.println(sent.lastIndexOf(match));
				}
		}
		catch(Exception e){
			e.printStackTrace();			
		}
	}
}
