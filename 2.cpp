 /*            Conceputalboy vikash         */
 /*                 हर हर महादेव              */
 #include <bits/stdc++.h>
 #include <unordered_set>
 #include <unordered_map>
 #define pi 3.14159265358979323846
 #define int long long
 #define endl  "\n"
 #define ld long double
 #define pow powl
 #define sqrt sqrtl
 #define inf 1e18 
 #define mp make_pair
 #define loop(i,a,n); for(int i=a;i<n;i++)
 
 #define full(a) a.begin(), a.end()
 #define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 //#define mod 1000000007
 #define mod2 998244353
 using namespace std;
 const int MOD=1000000007;
int gcd(int a, int b)
{
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if (a == 0) {
        return b;
    }
    return a;
}
 
 
    /*  sort by second  */
 // bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
 // {
 //     if (a.second == b.second)
 //         return (a.first > b.first);
 //     else
 //         return (a.second < b.second);
 // }
 
         /*binary search in a vector */
 
 /*bool bsv(vector<int> &a, int x){
     int s=0;
     int e=a.size()-1;
     while(s<=e){
         int mid=(s+e)/2;
         if(a[mid]==x){
             return 1;
         }else if(x<a[mid]){
             e=mid-1;
         }else{
             s=mid+1;
         }
     }
     return 0;
 }*/
 
 
         /*palindrome checker*/
 
 // bool pallindrome(string s){
 //     int n=s.size();
 //     for(int i=0; i<n/2; i++){
 //         if(s[i]!=s[n-1-i]){
 //             return 0;
 //         }
 //     }
 //     return 1;
 // }
 
 
     /* seive or erothnous */
 
 // unordered_set<int> primes;
 // vector<bool> prime(10000001,true);
 // void SieveOfEratosthenes(int n){
 //     for (int p = 2; p<=n; p++) {
 //         if (prime[p] == true) {
 //             for (int i = p * p; i <= n; i += p)
 //                 prime[i] = false;
 //         }
 //     }
 //     for(int i=2; i<=n; i++){
 //         if(prime[i]){
 //             primes.insert(i);
 //         }
 //     }
 // }
 
 
         /* Is the no perfect square*/
 
 // bool isperfectsquare(int n){
 //     long double x=sqrt(n);
 //     int y=sqrt(n);
 //     if(x==y) return 1;
 //     else return 0;
 // }
 
 
 
 /*   Prime Checker*/
 
 
 // int isprime(int n){
 //     if(n==1) return 0;
 //     for(int i=2; i*i<=n; i++){
 //         if(n%i==0) return 0;
 //     }
 //     return 1;
 // }
 
  
  /*lexographically miminum*/
 // string lexmin(string &a,string &b){
 //     if(a==b) return a;
 //     int n=a.size();
 //     int m=b.size();
 //     int i=0; int j=0;
 //     while(i<n && j<m){
 //         if(a[i]>b[j]){
 //             return b;
 //         }else if(a[i]<b[j]){
 //             return a;
 //         }
 //         i++;
 //         j++;
 //     }
 //     if(m>n){
 //         return a;
 //     }else{
 //         return b;
 //     }
 // }
 
 
 /*NCR*/
 
// int nCr(int n,int r)
// {
//         int sum = 1;
//         for(int i = 1; i <= r; i++){
//             sum = sum * (n - r + i) / i;
//         }
//       return sum;
// }
 
                         /*NCR END */
                 
 
 /*npr and factorial*/
 // int fact(int n)
 // {
 //     int fac=1;
 //     for(int i=2;i<=n;i++)
 //		 fac*=i;
 //     return fac;
 // }
  
 // int npr(int n, int r)
 // {
 //     return fact(n)/fact(n-r);
 // }
 
 
 /*Npr and factorial */
     /*POWER IN EASY WAY*/
 
 
int power(int a, int b)
{
    if (a == 0)
        return 0;
    int res = 1;
    while (b)
    {
        if ((b & 1))
        {
            res = res*a;
        }
        a=a*a;
        b = b >> 1;
    }
    return res;
}
 
 
 
void input(vector<int> &a)
{
    for (int &x : a)
        cin >> x;
}
void output(vector<int> &a)
{
    for (int &x : a){
        cout<<x<<" ";
    }
    cout<<endl;
}
 
 
 signed main()
 {
 
     fast
   //  SieveOfEratosthenes(10);
   // cout<<power(2,11)<<endl;
     int z;
     cin>>z;
     while(z--)
     {
           int n;
           cin>>n;
           int arr[n];
           loop(i,0,n)
                cin>>arr[i];

        int i=1;
        int t;
       while (true)
       {
            bool ans = false;
             t=power(2,i);
            for(int j=0;j<n;j++)
            {
                if((arr[j]%t)!=0)
                {
                    ans=true;
                    break;
                }
            }
            if(ans)
            {
                int cnt=0;
                unordered_map<int,int>c;
                for(int j=0;j<n;j++)
                {   
                    int temp=arr[j]%t;
                    c[temp]++;
                    if(c[temp]==1)
                    {
                        cnt++;
                    }
                }
                if(cnt==2)
                {
                    cout<<t<<endl;
                    break;
                }
                else
                {
                    i++;
                }
               

            }
            else
            {
                i++;
            }
       }
       

         
     }
  
 
     return 0;
 }			