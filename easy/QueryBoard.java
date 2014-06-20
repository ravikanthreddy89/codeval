import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;


public class Main {

	public static void main(String[] args){
		Scanner input;
		int[][] queryboard= new int[256][256];
		int row=256;
		int col=256;
		
		try {
			input= new Scanner(new File(args[0]));
			while(input.hasNext()){
				String []ip=input.nextLine().split(" ");
				
				if(ip[0].equals("SetCol")){
					int c=Integer.parseInt(ip[1]);
					int val=Integer.parseInt(ip[2]);
					
					for(int i=0; i <col; i++ ){
						queryboard[i][c]=val;
					}
				}
				else if(ip[0].equals("SetRow")){
					int r=Integer.parseInt(ip[1]);
					int val=Integer.parseInt(ip[2]);
					
					for(int i=0; i <row; i++ ){
						queryboard[r][i]=val;
					}
				}
				else if(ip[0].equals("QueryCol")){
					int ret=0;
					int c=Integer.parseInt(ip[1]);
					
					for(int i=0; i < col; i++){
						ret=ret+queryboard[i][c];
					}
					System.out.println(ret);
				}
				else if(ip[0].equals("QueryRow")){
					int ret=0;
					int r=Integer.parseInt(ip[1]);
					
					for(int i=0; i < col; i++){
						ret=ret+queryboard[r][i];
					}
					System.out.println(ret);
				}
				
			}
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			//e.printStackTrace();
			System.out.println("error in opening file");
		}
		
	}
}
