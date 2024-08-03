#ifndef KUNALSTRING
#define KUNALSTRING
#include<iostream>
using namespace std;

int mystrlen(char a[]){
    int i=1;
    for( i;a[i] != '\0';i++ ){
       
    }
 return i;
}

char *mystrcpy(char a[],char b[]){
    for( int i=0;a[i] != '\0';i++ ){
       a[i]=b[i];
    }
    return a;
    
}

char *mystrcat(char a[],char b[]){
    for( int i=0;b[i] != '\0';i++ ){
        int sizea= mystrlen(a);
       a[sizea]=b[i];
    }
    return a;
}

int mystrcmp(char a[],char b[]){
    if(mystrlen(a)>mystrlen(b)){
        return 1;
    }
    else if(mystrlen(a)<mystrlen(b)){
        return -1;
    }
    else{
         for( int i=0;a[i] != '\0';i++ ){
            int count=0;
          if(a[i]==b[i]) {
             count++;
      }
      if(count==mystrlen(a)){
        return 0;
      }
    }
    }
    
    
}

char *mystrrev(char a[]){
    int sizea= mystrlen(a);
     int j=sizea-1; 
    
    for (int i = 0; i < sizea / 2; i++) {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    return a;
}



char *mystrlwr(char a[]){
    for( int i=0;a[i] != '\0';i++ ){
        if(a[i]>='A' && a[i]<'Z'){
              a[i]=a[i]+32;
        }
    }
    return a;
}
char *mystrupr(char a[]){
    for( int i=0;a[i] != '\0';i++ ){
        if(a[i]>='a' && a[i]<'z'){
              a[i]=a[i]-32;
        }
    }
    return a;
}


//   int mystrstr(char a[],char b[]){
     
//      int pointer=0;

//      for( int i=0;a[i] != '\0';i++ ){
//       int j=0;
//        if(a[i]==b[j]){
//            pointer=i;
//             for( int j=0;b[i] != '\0';j++ ){
//             int count=0;
//           if(a[i]==b[j]) {
//              count++;
//              i++;
//       }
//       if(count==mystrlen(a)){
//         return pointer;
//       }
//     }}
//     else{
//       return 0;
//             }
//            }
//        }

// char *mystrchr(char a[],char b){
//     for( int i=0;a[i] != '\0';i++ ){
//          if(a[i]==b){
//             return i;
//          }
//     }
    
    
// }
       



// int main(){
//     char a[20]={'k','u','n','a','l','k'};
//     char b[10]={'n','a','l'};
//     // cout<<"The length of String is : "<<mystrlen(a);

// // for( int i=0;a[i] != '\0';i++ ){
// //       cout<<a[i];
// //     }
// //     mystrupr(a);
// //     cout<<endl;

// //    for( int i=0;a[i] != '\0';i++ ){
// //       cout<<a[i];
// //     } 
    
   

//     return 0;
// }

#endif