// import java.io.*;
// class prg
// {
//     public static void main(String[] args)
//     {
//         for(int i=1;i<=500;i++)
//         {
//             if(0.25*i+0.5*i+1*i==700)
//             {
//                 System.out.println("There should be ₹"+i+" coins");
//             }
//         }
//     }
// }

// class prg
// {
//     public static void main(String[] args) {
//         int day=10,bac=13312,ins=0;
//         while(day>1)
//         {
//             ins = bac/2;
//             bac = ins;
//             day--;
//         }
//         System.out.println(ins);
//     }
// }

import java.util.*;
class prg
{
    public static void main(String[] args) 
    {
        int i,sum=0,ch;
        Scanner sc = new Scanner(System.in);
        do
        {
            System.out.println("Enter a number");
            i = sc.nextInt();
            sum += i;
            System.out.println("Do you want to still continue 1 for yes 0 for no");
            ch = sc.nextInt();
        }while(ch!=0);
        System.out.println(sum);
        sc.close();
    }
}