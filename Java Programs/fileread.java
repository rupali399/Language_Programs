import java.io.*;

class fileread
{
	public static void main(String ar[]) throws IOException
	{
		File f1 = new File("E:\\Java Training Notepad Programs\\fileread.java");
		
		FileInputStream fis = new FileInputStream(f1);

		int nos = fis.available();

		for(int i=0; i<nos; i++)
		{
			System.out.print((char)fis.read());
		}
	}
}