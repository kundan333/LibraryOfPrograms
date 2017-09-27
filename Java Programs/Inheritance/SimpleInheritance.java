class SimpleInheritance{

public static void main(String arg[]){

A objsuper = new A();

B objsub = new B();

objsuper.i =5;
objsuper.j = 7;
objsuper.showij();

objsub.i=9;
objsub.j=10;
objsub.k=11;
objsub.showij();
objsub.showk();
objsub.sum();






}




}