class temp {
     
    public static void practicalMST(int arr[],
                                              int n)
    {
        int max = 1, len = 1, maxIndex = 0;
          
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i-1])
                len++;
            else
            {
                
                if (max < len)   
                {
                    max = len;
                      
                    
                    maxIndex = i - max;
                }
                len = 1;   
            }   
        }
        if (max < len)
        {
            max = len;
            maxIndex = n - max;
        }
        int count = 0;
        for (int i = maxIndex; i < max+maxIndex; i++){
            System.out.print(arr[i] + " ");
            count++;
        }
        System.out.println("\ncount of biggest series : "+ count);
            
    }
    public static void main(String[] args)
    {
        int arr[] = {2,1,3,4,5,6,7,5,6};
        int n = arr.length;
        practicalMST(arr, n);
        
         
    }
}
