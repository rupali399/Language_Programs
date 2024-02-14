//import java.io.*;

import java.io.IOException;
import java.io.File;
import java.io.FileOutputStream;

class filewrite
{
	public static void main(String args[]) throws IOException
	{
		try
		{
			File f1 = new File("E:\\Java Training Notepad Programs\\rupali.txt");

			FileOutputStream fos = new FileOutputStream(f1);

			String str = "Hello i am rupali. I am a student of global college";

			byte by[] = str.getBytes();

			for(int i=0; i<by.length; i++)
			{
				fos.write(by[i]);
			}

			System.out.println("file write done");
		}
		catch(IOException e)
		{
			System.out.println(e);
		}
	}
}
