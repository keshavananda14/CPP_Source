#define M1 mi1 = mallinfo() 
#define M2(x) mi1 = mi2; mi2 = mallinfo(); if (mi1.uordblks != mi2.uordblks) \ fprintf(stderr, "%s consumed %d\n", (x), mi2.uordblks - mi1.uordblks)
