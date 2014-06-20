import java.io.File;
import java.util.Hashtable;
import java.util.Scanner;


public class Main {

	public static void main(String [] args){
		Scanner input;
		
		Hashtable<String , Integer> set1= new Hashtable();
		
		try{
			input= new Scanner(new File(args[0]));
			while(input.hasNext()){
				String[] sets=input.next().split(";");
				String[] list1=sets[0].split(",");
				String[] list2=sets[1].split(",");
				
				int size1=list1.length;
				int size2=list2.length;
				boolean printed=false;
				boolean beginning=true;
				
				for (int i=0; i < size1; i++){
					set1.put(list1[i], 1);
				}

				
				for(int i=0; i < size2; i++){
					if(set1.containsKey(list2[i])){
						if(beginning){
							System.out.print(list2[i]);
							printed=true;
							beginning=false;
						}
						else {
							System.out.print(","+list2[i]);
						}
						
					}
				
				}
				set1.clear();
				if(!printed) System.out.println();
				System.out.println();
			}// end of while loop
		}catch(Exception e){
			System.out.println("error in scanner");
		}
	}
}
