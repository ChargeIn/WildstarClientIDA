#include "../winhttp.h"

//----- (0000000140282D40) ----------------------------------------------------
unsigned __int64 __fastcall sub_140282D40(int* a1)
{
	return a1[12]
		+ 0x20329213D9AD6CE9i64 * *((unsigned __int8*)a1 + 16)
		+ 0xA40A7668571D1441ui64 * *((unsigned __int8*)a1 + 17)
		+ 0x8DBFB38E27BD8821ui64 * a1[8]
		+ 0x71E22D399B1D65B1i64 * a1[6]
		+ 0x95581F56887F2461ui64 * a1[1]
		+ 0xBC5F89878A2992F9ui64 * a1[2]
		+ 0x3F7B69F4E4E9F0B9i64 * a1[9]
		+ 0x53FB482EB19F4FD9i64 * a1[5]
		+ 0xF4CF9934A77D23D1ui64 * a1[3]
		+ 0x630FF64FD0002BC9i64 * a1[7]
		+ 2860486313i64 * (a1[11] + 2860486313i64 * a1[10])
		+ 0x7B20D512183BD209i64 * *a1;
}

