#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cassert>
#include <cstring>
using namespace std;
using ui = unsigned int;
void test1();
void test2();
ui S1(ui N)
{
    return N*(N+1)/2;
}
ui S1Naive(ui N)
{
    ui sum = 0;
    for(ui i=1; i<=N; ++i)
    sum += i;
    return sum;
}
ui S2(ui N)
{
    return N*N;
}
ui S2Naive(ui N)
{
    ui sum = 0;
    ui num=1;
    ui count=1;
    while(count<=N)
    {
        sum += num;
        num += 2;
        ++count;
    }
}

ui S3(ui N)
{
    return N*N+N;
}
ui S3Naive(ui N)
{
    ui sum = 0;
    for(int i=2; i<=N*2; i+=2)
        sum += i;
    return sum;

}

// main function that acutally solves the problem
void solve(ui K, ui N)
{
    ui s1 = S1(N);
    ui s2 = S2(N);
    ui s3 = S3(N);
    printf("%d %d %d %d\n", K, s1, s2, s3);
}

int main(int argc, char* argv[])
{
    if (argc > 1 && strncmp(argv[1], "test", 4) == 0)
    {
        test1();
        test2();
    }
    else 
    {

        ui P, K, N;
        cin >> P;
        ui s2=0;
        ui s1=0;
        for(ui i=0; i<P; ++i) 
        {
            cin >> K >> N;
            s2=N*N;
            printf("%d %d %d %d\n",K,(s2+N)/2,s2,s2+N);
        }
    }
    return 0;
}
void test1()
{
    ui N = 1;
    assert(S1(N) == 1);
    assert(S2(N) == 1);
    assert(S3(N) == 2);
    N = 10;
    assert(S1(N) == 55);
    assert(S2(N) == 100);
    assert(S3(N) == 110);
    N = 1001;
    assert(S1(N) == 501501);
    assert(S2(N) == 1002001);
    assert(S3(N) == 1003002);
    cout << "test1: all test cases passed...\n";
}   
void test2() 
{
    ui P = 2;
    ui Ns[] = {2, 15};
    ui Ans[][3] = {{3, 4, 6}, {120, 225, 240}}; 
    for(ui i=0; i<P; ++i) 
    {
        assert(S1(Ns[i]) == Ans[i][0]);
        assert(S2(Ns[i]) == Ans[i][1]);
        assert(S3(Ns[i]) == Ans[i][2]);
    }
    cout << "test2: all test cases passed...\n";
}
