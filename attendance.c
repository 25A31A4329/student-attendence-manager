#include <stdio.h>

int main(){

    char students[10][30] = {
        "25A31A4312 - J.Lalitha",
        "25A31A4329 - R.Sirisha",
        "25A31A4319 - M.Harini",
        "25A31A4314 - K.Vyshanavi",
        "25A31A4306 - E.Manasa",
        "25A31A4324 - P.Shalni",
        "25A31A4322 - N.Krishnaveni",
        "25A31A4310 - G.Jaya Sree",
        "25A31A4304 - B.Maghana",
        "25A31A4309 - G.Pavani",
        "25A31A4337 - A.Manikanta",
        "25A31A4340 - P.Ganesh manideepak",
    };

    int attendance[10] = {85,78,92,63,58,71,48,67,80,43,70,80};

    printf("STUDENT ATTENDANCE REPORT\n");
    printf("------------------------------------\n");

    for(int i=0;i<10;i++){
        printf("%s   -->  %d%%  ",students[i],attendance[i]);

        if(attendance[i]>=75)
            printf(" (GREEN - GOOD)\n");
        else if(attendance[i]>=60)
            printf(" (ORANGE - AVERAGE)\n");
        else
            printf(" (RED - LOW ATTENDANCE)\n");
    }

    return 0;
}
