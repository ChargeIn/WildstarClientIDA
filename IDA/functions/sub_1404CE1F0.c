#include "../winhttp.h"

//----- (00000001404CE1F0) ----------------------------------------------------
void __fastcall sub_1404CE1F0(__int64 a1, int* a2, __int64 a3)
{
	__int64 v3; // r9
	__int64 v6; // rbx
	__int64 i; // rax
	__int64 v8; // r8

	if ((int*)a1 != a2)
	{
		v3 = 0i64;
		v6 = ((__int64)a2 - a1) >> 3;
		for (i = v6; i != 1; ++v3)
			i >>= 1;
		sub_14043A3D0(
			(__int64*)a1,
			(unsigned __int64)a2,
			a3,
			2 * v3,
			(unsigned __int8(__fastcall*)(__int64, __int64))sub_1404CE1B0);
		if (v6 <= 16)
		{
			sub_14043A560((int*)a1, a2, (unsigned __int8(__fastcall*)(__int64, __int64))sub_1404CE1B0);
		}
		else
		{
			sub_14043A560((int*)a1, (int*)(a1 + 128), (unsigned __int8(__fastcall*)(__int64, __int64))sub_1404CE1B0);
			sub_14043A780((_QWORD*)(a1 + 128), a2, v8, (unsigned __int8(__fastcall*)(__int64, __int64))sub_1404CE1B0);
		}
	}
}
// 1404CE275: variable 'v8' is possibly undefined

