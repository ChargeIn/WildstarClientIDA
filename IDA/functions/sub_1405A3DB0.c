#include "../winhttp.h"

//----- (00000001405A3DB0) ----------------------------------------------------
void __fastcall sub_1405A3DB0(__int64* a1, __int64* a2, __int64 a3)
{
	__int64 v3; // r9
	__int64 v6; // rbx
	__int64 i; // rax
	__int64 v8; // r8

	if (a1 != a2)
	{
		v3 = 0i64;
		v6 = ((char*)a2 - (char*)a1) >> 4;
		for (i = v6; i != 1; ++v3)
			i >>= 1;
		sub_1405A3F80(a1, (unsigned __int64)a2, a3, 2 * v3, (unsigned __int8(__fastcall*)(__int64, __int64))sub_14059DF50);
		if (v6 <= 16)
		{
			sub_1405A4130(a1, a2, (unsigned __int8(__fastcall*)(__int64*, __int64*))sub_14059DF50);
		}
		else
		{
			sub_1405A4130(a1, a1 + 32, (unsigned __int8(__fastcall*)(__int64*, __int64*))sub_14059DF50);
			sub_1405A4340(a1 + 32, a2, v8, (unsigned __int8(__fastcall*)(__int64*, __int64*))sub_14059DF50);
		}
	}
}
// 1405A3E35: variable 'v8' is possibly undefined

