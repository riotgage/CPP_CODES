public static void main(String[] args) throws Exception {
    // Object of a class that has both produce()
    // and consume() methods
    final ProdConsumer pc = new ProdConsumer();

    // Create producer thread
    Thread t1 = new Thread(new Runnable() {
        public void run() {
            try {
                pc.produce();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    });

    // Create consumer thread
    Thread t2 = new Thread(new Runnable() {
        public void run() {
            try {
                pc.consume(1);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    });

    Thread t3 = new Thread(new Runnable() {
        public void run() {
            try {
                pc.consume(2);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    });

    // Start both threads
    t1.start();
    t2.start();
    t3.start();

//        // t1 finishes before t2
        t1.join();
        t2.join();
        t3.join();
    }