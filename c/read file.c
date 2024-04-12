#include <stdio.h>
#include <string.h>
int main()
{
    // read
    FILE *fp = fopen("./file.txt", "r");
    char buf[512];
    memset(buf, 0, sizeof(buf));
    fread(buf, sizeof(char), 512, fp);
    printf("%s\n", buf);
    fclose(fp);
    // write
    fp = fopen("./newfile.txt", "w");
    fwrite(buf, sizeof(char), strlen(buf), fp);
    fclose(fp);

    // low-level
    return 0;
}