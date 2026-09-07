
#include <iostream>
using namespace std;
int main()
{

    //int N = 11;
    //for (int i = 0; i < N; i++)
    //{
    //    for (int j = 0; j < N; j++)
    //    {
    //        if (i <= j)
    //        {
    //            cout << "*";
    //        }
    //        else
    //        {
    //            cout << " ";
    //        }
    //    }
    //    cout << endl;
    //}
 
   /* int N = 11;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }*/

   /* int N = 11;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j >= i && i<= N-1-j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }*/

    //int N = 11;
    //for (int i = 0; i < N; i++)
    //{
    //    for (int j = 0; j < N; j++)
    //    {
    //        if (j <= i && j >= N - 1 - i)
    //        {
    //            cout << "*";
    //        }
    //        else
    //        {
    //            cout << " ";
    //        }
    //    }
    //    cout << endl;
    //}
    //int N = 11;
    //for (int i = 0; i < N; i++)
    //{
    //    for (int j = 0; j < N; j++)
    //    {
    //        if (j <= i && j >= N - 1 - i or j >= i && j <= N - 1 - i)
    //        {
    //            cout << "*";
    //        }
    //        else
    //        {
    //            cout << " ";
    //        }
    //    }
    //    cout << endl;
    //}
  /*  int N = 11;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j <= i && j <= N - 1 - i or j >= i && j >= N - 1 - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }*/
//int N = 11;
//for (int i = 0; i < N; i++)
//{
//    for (int j = 0; j < N; j++)
//    {
//        if (j <= i && j <= N - 1 - i )
//        {
//            cout << "*";
//        }
//        else
//        {
//            cout << " ";
//        }
//    }
//    cout << endl;
//}

//int N = 11;
//for (int i = 0; i < N; i++)
//{
//    for (int j = 0; j < N; j++)
//    {
//        if ( j >= i && j >= N - 1 - i)
//        {
//            cout << "*";
//        }
//        else
//        {
//            cout << " ";
//        }
//    }
//    cout << endl;
//}


//int N = 11;
//for (int i = 0; i < N; i++)
//{
//    for (int j = 0; j < N; j++)
//    {
//        if (j + i <= N - 1)
//        {
//            cout << "*";
//        }
//        else
//        {
//            cout << " ";
//        }
//    }
//    cout << endl;
//}

int N = 11;
for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
    {
        if (j + i >= N - 1)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;
}
}
