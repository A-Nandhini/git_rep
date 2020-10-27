#include<stdio.h>
#include<conio.h>
int main(){
	int i,n,a[10];
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//	print_element(n,a);
sum_average(n,a);
//	find_large(n,a);
//	sum_of_array(n,a);
//	find_second_larg(n,a);
//print_alternate(n,a);
//palin_array(n,a);
//find_max_min(n,a);
//count_smaller_elements(n,a);
//swap_kth_element(n,a);
//multiply_array(n,a);
//atleast_two_greater(n,a);
//comparing_array();
//check_sorted(n,a);
//average(n,a);
//reverse(n,a);
//start_end_index(n,a);
//perfect_array(n,a);
//value_equals_index(n,a);

}
void print_element(int n,int arr[]){
	int k,i;
		printf("enter the index:");
	scanf("\n%d",&k);
	if(k>n){
		printf("invalid");
	}
	else{
	for(i=0;i<n;i++){
		if(i==k){
			printf("%d",arr[i]);
			break;
		}
	}
}	
}
void find_large(int n,int arr[]){
	int i,max=0;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("%d is largest",max);
}
void sum_of_array(int n,int a[]){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	printf("The sum is :%d",sum);
}
void find_second_larg(int n,int a[]){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;	
		}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("The second largest is:%d",a[n-2]);
}
void print_alternate(int n,int a[]){
	int i=0;
	for(i=0;i<n;i=i+2){
			printf("%d ",a[i]);
	}
}
void palin_array(int n,int a[]){
	int i,rem,rev=0,flag=0,orig_num;
	for(i=0;i<n;i++){
		int rev=0;
		orig_num=a[i];
		while(orig_num!=0){
			rem=orig_num%10;
			rev=(rev*10)+rem;
			orig_num=orig_num/10;
		}
		if(rev==a[i]){
			flag=1;
		}
		if(rev!=a[i]){
			flag=0;	
			break;
		}
	}
	if(flag==1){
		printf("palindromic array");
	}
	else{
		printf("Not a palindromic array");
	}
}
void find_max_min(int n,int a[]){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nLargest element is:%d",a[n-1]);
	printf("\nsmallest element is:%d",a[0]);
}
void count_smaller_elements(int n,int a[]){
	int i,num,count=0;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=0;i<n;i++){
		if(a[i]<=num){
			count++;
		}
	}
	printf("no of smaller elements is:%d",count);
}
void swap_kth_element(int n,int a[]){
	//swapping kth element from begining with kth element from the end
	int k,temp,i;
	printf("enter the kth element:");
	scanf("%d",&k);
	//printf("%d",a[k-1]);
	//printf("%d",a[n-k]);
	temp=a[k-1];
	a[k-1]=a[n-k];
	a[n-k]=temp;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void multiply_array(int n,int a[]){
	int i,mul=1;
	for(i=0;i<n;i++){
		mul=mul*a[i];
	}
	printf("%d",mul);
}
void atleast_two_greater(int n,int a[]){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n-2;i++){
		printf("%d ",a[i]);
	}
}
void comparing_array(){
	int i,a[100],b[100],n1,n2,countA=0,countB=0;
	printf("enter size of array A and B: ");
	scanf("%d %d",&n1,&n2);
	printf("enter the numbers for A:");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the numbers for B:");
		for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++){
		if(a[i]>b[i]){
			countA++;
		}
		else if(b[i]>a[i]){
			countB++;
		}
		else{
		continue;
		}
	}
	printf("%d %d",countA,countB);
}
void lefted_element(int n,int a[]){
	int i,j,temp;
		for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		a[0]=a[0+1];
		a[n-1]=a[n-2];
	}
}
void check_sorted(int n,int a[]){
	int i,j,flag=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
			flag=1;
			continue;	
			}
			else{
				flag=0;
				break;
			}
		}
	}
	if(flag==1){
		printf("sorted");
	}
	else{
		printf("unsorted");
	}
}
void average(int n,int a[]){
	int i,j,avg,sum=0;
	for(i=0;i<n;i++){
	sum=sum+a[i];
	avg=sum/(i+1);
		printf("%d ",avg);
		avg=0;
	}
}
void reverse(int n,int a[]){
	int i;
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
void start_end_index(int n,int a[]){
	int k,i,j,temp,res=0;
	printf("enter key:");
	scanf("%d",&k);
	/*	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}*/
	for(i=0;i<n;i++){
		if(a[i]==k){
			printf("starting index is %d",i);
			break;
		}
	}
		for(i=n-1;i>0;i--){
		if(a[i]==k){
			printf("end index is %d",i);
		break;
		}
	}
	
}
void perfect_array(int n,int a[]){
	int i,j;
	for(i=0,j=n-1;j>=i;j--,i++){
if(a[i]==a[j]){
	continue;
}	
else
break;	
	}
	if(i>j){
		printf("perfect");
	}
	else{
		printf("not perfect");
	}
}
void value_equals_index(int n,int a[]){
	int k,i,flag=0;
	for(i=0;i<n;i++){
		if(i+1==a[i]){
			printf("%d",a[i]);
			flag=1;
			//break;
		}
	}
	if(flag==0){
		printf("Not found");
	}
}
void sum_average(int n,int a[]){
	int i,sum=0;
	float avg;
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	avg=(float)sum/n;
	printf("%d %0.2f",sum,avg);
}
