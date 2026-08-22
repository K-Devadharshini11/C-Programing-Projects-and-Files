//#include <stdio.h>
//int main(){
// FILE *fp,*cp;
// char ch;
// fp=fopen("demo.txt","r");
// cp=fremove("new.txt","w");
//
// while((ch=fgetc(fp))!=EOF){
//    fputc(ch,cp);
// }
// fclose(fp);
// fclose(cp);
//}

//delete the file
#include <stdio.h>
int main(){
 FILE *fp;
//if(remove("demo.txt")==0){
//    printf("file deleted successfully");
//}
//else{
//    printf("unable to delete");
//}
 remove("demo.txt");
}
