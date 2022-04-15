#include "../winhttp.h"

//----- (0000000140780D00) ----------------------------------------------------
void __fastcall sub_140780D00(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 v4; // rbx
	__int64 v5; // rsi
	__int64 v6; // rcx

	v2 = *(_QWORD*)(a2 + 2080);
	v4 = v2;
	if (*(float*)(32 * v2 + a2 + 1084) == 0.0)
	{
		do
			v4 = ((_BYTE)v4 + 1) & 0x1F;
		while (*(float*)(32i64 * (unsigned int)v4 + a2 + 1084) == 0.0);
	}
	v5 = ((_BYTE)v2 - 1) & 0x1F;
	if (v4 != v5)
	{
		sub_140780BC0(a1, a2 + 32, v4, (unsigned int)v5);
		sub_140780BC0(v6, a2 + 1056, v4, (unsigned int)v5);
	}
}
// 140780D6D: variable 'v6' is possibly undefined

