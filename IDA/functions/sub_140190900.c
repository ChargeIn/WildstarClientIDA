#include "../winhttp.h"

//----- (0000000140190900) ----------------------------------------------------
__int64 __fastcall sub_140190900(unsigned int* a1, _BYTE* a2, __int64 a3)
{
	unsigned int v4; // [rsp+20h] [rbp-28h]
	unsigned int v5; // [rsp+28h] [rbp-20h]
	unsigned int v6; // [rsp+30h] [rbp-18h]

	v6 = a1[9];
	v5 = a1[8];
	v4 = a1[7];
	return sub_14001B370(a2, a3, L"(%d, %d) to (%d, %d)", a1[6], v4, v5, v6);
}
// 140A42A60: using guessed type wchar_t aDDToDD[21];

