import java.io.*;

class BufferedReaderTest{
	public static void main(String args[]){
		FileReader fileReader = null;
		BufferedReader bufferedReader = null;
		try{
			fileReader = new FileReader("e:/src/user.txt");
			bufferedReader = new BufferedReader(fileReader);
			
			//for(int i = 0; i < )
			while(true){
				String line = bufferedReader.readLine();
				if(line == null){
					break;
				}
				System.out.println(line);
				
			}
			

		}catch(Exception e){
			System.out.println(e);
		}finally{
			try{
				bufferedReader.close();
				fileReader.close();
			}
			catch(Exception e){
				System.out.println(e);
			}

		}
}
}