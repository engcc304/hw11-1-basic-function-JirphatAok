/*
    รับค่าจากผู้ใช้จำนวน 3 ค่า และสร้างฟังก์ชันในการหาผลรวมของจำนวน 3 ค่านี้ และแสดงผลลัพธ์มายังหน้าจอ พร้อมระบุชื่อฟังก์ชันที่เรียกใช้งาน เช่น รับค่า 3, 5, 6 จะแสดงผลลัพธ์ว่า 14 (Calculate by Additional Function)

    Test case:
        Input 1 : 
            3
        Input 2 : 
            4
        Input 3 : 
            5
    Output:
        Summation = 12 (Calculate by Additional Function)
*/
#include <stdio.h>
int P (  int Input01 , int Input02 , int Input03 ) {
    int output = 0 ;
    output = Input01 + Input02 + Input03 ;
    return output ;
}//end function
int main () {
    int Input01, Input02, Input03 ;
    int ans ;
    printf( "input\n" ) ;
    scanf ("%d %d %d",&Input01 , &Input02 , &Input03) ;
    ans = P (Input01 , Input02 , Input03) ;
    printf( "Summation = %d (Calculate by Additional Function)",ans ) ;

    return 0 ;
}
