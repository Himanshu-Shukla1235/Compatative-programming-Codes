//-----------------------------------------------D. Permutation Game | 1300 ------------------------------

#include <bits/stdc++.h>
using namespace std;
void logic();
// Global counter for recursive calls
int recursiveCallCount = 0;
long long int wins(int round, int k, int position, vector<int>& a1, vector<int> &a2,bool found,long  int maxElement);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        logic();
        // cout << "Number of recursive calls: " << recursiveCallCount << endl;
        // // Reset the counter for the next test case
        // recursiveCallCount = 0;
    }
}

void logic()
{
    int n, k, pb, ps;

    cin >> n >> k >> pb >> ps;

    vector<int> a1(n);
    vector<int> a2(n);

    for (auto &v : a1)
    {

        cin >> v;
    }

    for (auto &v : a2)
    {

        cin >> v;
    }
     auto max = max_element(a2.begin(), a2.end());
     long  int maxElement=*max;
    int round = 0;
   
    long long int b = wins(round, k, pb, a1, a2,false,maxElement);
  
    long long int s = wins(round, k, ps, a1, a2,false,maxElement);
// cout<<b<<" "<<s;

    if (b > s)
    {
        cout << "Bodya" << endl;
    }
    else if (b < s)
    {
        cout << "Sasha" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
    return;
}

long long int wins(int round, int k, int position, vector<int>& a1, vector<int> &a2,bool found,long int maxElement)
{
 recursiveCallCount++;
    round++;
   

    long long int score = a2[position - 1];

    if (round == k)
    {

        return score;
    }

    else if (score == maxElement || found==true)
    {
        long long int result = score + score * (k - round);
  
        return result;
    }
    else if (position == a1[position - 1])
    {
        long long int result = score * k;
        return result;
    }
    else
    {

        long long int result = max(score + wins(round, k, position, a1, a2,true,maxElement), score + wins(round, k, a1[position - 1], a1, a2,false,maxElement));

        return result;
    }
}

                   