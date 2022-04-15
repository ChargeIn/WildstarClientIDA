#include "../winhttp.h"

//----- (0000000140282F70) ----------------------------------------------------
unsigned __int64 __fastcall sub_140282F70(int* a1)
{
	return a1[9]
		+ 0x20329213D9AD6CE9i64 * *a1
		+ 0x630FF64FD0002BC9i64 * (unsigned int)a1[4]
		+ 0xA40A7668571D1441ui64 * a1[1]
		+ 0x71E22D399B1D65B1i64 * a1[3]
		+ 0x3F7B69F4E4E9F0B9i64 * a1[6]
		+ 0x53FB482EB19F4FD9i64 * a1[2]
		+ 2860486313i64 * (a1[8] + 2860486313i64 * a1[7])
		- 0x72404C71D84277DFi64 * (unsigned int)a1[5];
}

