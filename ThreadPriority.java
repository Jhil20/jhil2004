package com.CE1;
class MyThreadPrio  extends  Thread
{
    public void run()
    {
        for(int i=0;i<5;i++) {
//            Thread.yield();
            try {
                Thread.sleep(1500);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
            System.out.println(Thread.currentThread().getName() + "-" + getPriority());
        }
    }
}
public class ThreadPriority {
    public static void main(String[] args) throws InterruptedException {
        MyThreadPrio m = new MyThreadPrio();
        m.start();
        m.join();
//        m.setPriority(Thread.MAX_PRIORITY);
        for(int i=0;i<5;i++) {
//            Thread.yield();
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
            System.out.println(Thread.currentThread().getName() );
        }
    }
}
