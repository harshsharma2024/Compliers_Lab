inline void my_function(int *restrict p1, const int p2, volatile int p3, ...) {
    auto int a;
    register int b;
    extern int c;
    static int d = 4;
}

const char *my_string(int b[const static 8], int c[static 9], int d[], int e[const *]);

enum my_enum;
enum my_enum2 { ITEM1, ITEM2 };
enum { ITEM3 = 0, ITEM4 } my_enum3;

signed main() {
    // int a[6] = { 1, 2, [2]=3 };
    char my_char[] = "Modified string :)";
    char my_char1 = 'c';
    char *my_char2 = &my_char1;
    *my_char2 = 'a';
    char **my_string_array = (char) { "a", my_char, "abc" };

    unsigned long my_long1 = +123456789;
    short my_short = ~16;
    float my_float = -3.53;
    double my_double = 2.99e-2;
    // _Bool my_bool = !1;
    double _Complex my_complex;


    int n = (n1 == n2)?n1:n2;

    my_long1 = (int) c;
    my_long1 = sizeof(int);
    my_long1 = sizeof my_long1;

    my_long1 *= my_long1, my_long1 /= my_long1, my_long1 %= my_long1;
    my_long1 += (my_long1 -= my_long1);
    my_long1 <<= (my_long1 >>= my_long1);
    my_long1 &= my_long1 |= my_long1 ^= my_long1;

    int my_array[my_short] ;


    RANDOM_LABEL:
        if (my_float < my_double) {

            switch (my_short) {
                case 0:
                    my_short++;
                    break;
                default:
                    my_short--;
            }

        } else if (my_float > my_double) {
            if(my_short >= my_long1)
                my_long1++;
        } else {
            if(my_short <= my_long1)
                my_short++;
        }
    
    while(my_short--)
        goto RANDOM_LABEL;

    for(;;)
    for(int i;;)
    for(int i=0, j=1; i!=j; i++) {
        if(j==1)
            continue;
    }

    do {
        my_short++;
    } while(my_short < 0);

    int t1, t2, t3, t4, t5, t6;

    t1 = t1 + t2 - t3 / t4 * t5 % t6;
    t2 = t2<<2;
    t2 = t2>>2;
    t1 = t2 & t3 | t4 ^ t5;

    my_function(1,2,3,4,5,6);

    /* . and -> test */
    
    ms1.a = 3;
    ms2->a = 4;

    return 0;
}
