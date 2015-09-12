class Euler1 {
	public static void main(String[] args) {
		
		int i;
		
		int adder = 0;
		
		for (i = 0; i < 1000; i++) {
			if (i % 3 == 0 || i % 5 == 0) {
				System.out.println("\t" + i);
				adder += i;
			}
		}
	System.out.println(adder);
	}
}