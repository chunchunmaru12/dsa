public class Test{
   public static void main(String args[]){
      int a, b, temp, hcf, lcm;
      int x=36;
      int y=24;
      a = x;
      b = y;
      while(b != 0){
         temp = b;
         b = a%b;
         a = temp;
      }

      hcf = a;
      lcm = (x*y)/hcf;

      System.out.println("HCF of input numbers: "+hcf);
      System.out.println("LCM of input numbers: "+lcm);
   }
}