class TowerOfHanoi{
    static void towerOfHanoi(int n, char A/*Source */, char B/*Temp*/, char C/*Destination */)
    {
        if (n == 1)
        {
            System.out.println("Move disk 1 from rod " +  A + " to rod " + B);
            return;
        }
        towerOfHanoi(n-1, A, C, B);
        System.out.println("Move disk " + n + " from rod " +  A + " to rod " + B);
        towerOfHanoi(n-1, C, B, A);
    }
     
    public static void main(String args[])
    {
        int n = 3; 
        towerOfHanoi(n, 'A', 'C', 'B');
    }
}