#include <bits/stdc++.h>
using namespace std;
int t=0;//test case
const int N=1e5+10;
char A[N];
char B[N];
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		char c;
		cin>>c;
		A[i]=c;	
	}
	for(int i=0;i<n;i++){
		char c;
		cin>>c;
		B[i]=c;
	}
	int sum=0;
	int mark1=0;
	int mark0=0;
	for(int i=0;i<n;i++){
		if(A[i]!=B[i]){
			if(mark0){
				sum++;
			}
			sum+=2;
			mark1=0;
			mark0=0;
		}else{
			//a = b
			if(A[i]=='1'){
				if(mark0==1){
					sum+=2;
					mark0=0;
					mark1=0;
					continue;
				}
				mark1=1;	
			}else{
				if(mark0==1){
					sum+=2;
					mark0=0;
					mark1=0;
					continue;
				}
				if(mark1==1){
					sum+=2;
					mark0=0;
					mark1=0;
					continue;
				}
				mark0=1;
			}
		}
	}
	if(mark0==1){
		sum++;
	}
	cout<<sum<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}















/*

	 7MMM.     ,MMF       db       7MN.    7MF  7MMF    7MMF
	  MMMb    dPMM       ;MM:       MMN.    M    MM      MM
	  M YM   ,M MM      ,V^MM.      M YMb   M    MM      MM
	  M  Mb  M' MM     ,M  `MM      M  `MN. M    MMmmmmmmMM
	  M  YM.P'  MM     AbmmmqMA     M   `MM.M    MM      MM
	  M  `YM'   MM    A'     VML    M     YMM    MM      MM
	.JML. `'  .JMML .AMA.   .AMMA. JML.    YM  .JMML.  .JMML.

    .g8"""bgd  7MMF     7MF   .g8""8q.   7MN.   `7MF   .g8"""bgd
 .dP'     `M    MM       M  .dP'    `YM.  MMN.    M  .dP'     `M
 dM'       `    MM       M  dM'      `MM  M YMb   M  dM'       `
 MM             MM       M  MM        MM  M  `MN. M  MM
 MM.            MM       M  MM.      ,MP  M   `MM.M  MM.    `7MMF'
 `Mb.     ,'    YM.     ,M  `Mb.    ,dP'  M     YMM  `Mb.     MM
  `"bmmmd'      `bmmmmd"'    `"bmmd"'   .JML.    YM    `"bmmmdPY

*/

