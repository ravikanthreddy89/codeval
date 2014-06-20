import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;


public class Main {

	public static void main(String [] args){
		Scanner input;
		
		try {
			input= new Scanner(new File(args[0]));
			while(input.hasNext()){
				boolean beginning=true;
				String prev=null;
				
				String[] numbers= input.next().split(",");
				
				for(int i=0; i < numbers.length; i++){
					if(beginning){
						beginning=false;
						prev=numbers[i];
						System.out.print(numbers[i]);
					}
					else {
						if(numbers[i].equals(prev)){ 
								continue;
						}
						
						else {
							prev=numbers[i];
							System.out.print(","+numbers[i]);
						}
					}
				}
				beginning=true;
				System.out.println("");
			}
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
}
