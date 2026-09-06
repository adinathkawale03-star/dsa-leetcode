int elevatorRequests(int n, int* requests, int requestsSize) {
   int ans=requests[0];
   for(int i=1;i<requestsSize;i++){
    ans+=abs(requests[i]-requests[i-1]);
   }
   return ans;

}