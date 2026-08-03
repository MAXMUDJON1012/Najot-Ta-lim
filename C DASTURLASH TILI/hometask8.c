// #include <stdio.h>
// int main(){
//     char matn [1000];
//     fgets(matn,1000,stdin);

//     int i=0;
//     int count=0;
//     while(matn[i]){
//         if (matn[i]==' ') count ++;
//         i++;
//     }
//     char  words[count][1000];
//     int i=0;
//     int count=0;
//     while(matn[i]){
//         if (matn[i]==' ' || matn[i]=='\n'){
//             words[count][k]='\0';
//             count++;
//             k=0;
//         }
//         else{
//             words[count][k]=matn[i];
//             k++;
//         }
//         i++;
//     }
//     for (int a=0; a<count;a++){
//         printf("%s\n, words[a]");
//         int l=strlen(words[a])-1;
//         while (l>=0){
//             printf("%c",words[a][l]);
//             l--;
//         }
//     }
// }