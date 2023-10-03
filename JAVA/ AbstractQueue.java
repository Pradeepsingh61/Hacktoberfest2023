// Java code to illustrate AbstractQueue

import java.util.*;
import java.util.concurrent.LinkedBlockingQueue;

public class AbstractQueueExample {

	public static void main(String[] argv) throws Exception
	{
		// Creating object of AbstractQueue<Integer>
		AbstractQueue<Integer> AQ = new LinkedBlockingQueue<Integer>();

		// Adding elements to the Queue
		AQ.add(10);
		AQ.add(20);
		AQ.add(30);
		AQ.add(40);
		AQ.add(50);

		// print the queue contents to the console
		System.out.println("AbstractQueue contains: " + AQ);
	}
}
