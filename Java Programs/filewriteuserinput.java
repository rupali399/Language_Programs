import java.io.*;

class filewriteuserinput
{
	public static void main(String args[]) throws IOException
	{
		File f1 = new File("E:\\Java Training Notepad Programs\\userinput.txt");

		FileOutputStream fos = new FileOutputStream(f1);
		
		DataInputStream dis = new DataInputStream(System.in);
		System.out.println("Enter any data");
		String str = dis.readLine();

		byte by[] = str.getBytes();

		for(int i=0; i<by.length; i++)
		{
			fos.write(by[i]);
		}

		System.out.println("file write done");
			
		
	}
}
