#include "../winhttp.h"

//----- (0000000140419AC0) ----------------------------------------------------
__int64 __fastcall sub_140419AC0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	__int64 v5; // rax

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v5 = sub_1405A8A40(v3, v2[108]);
		if (v5)
		{
			sub_140663030(a1, v5);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140419AF5: variable 'v3' is possibly undefined

