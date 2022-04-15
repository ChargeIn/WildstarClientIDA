#include "../winhttp.h"

//----- (00000001404199C0) ----------------------------------------------------
__int64 __fastcall sub_1404199C0(_QWORD* a1)
{
	int* v2; // rax
	int v3; // ecx
	__int64 result; // rax
	int v5; // edx
	_DWORD* v6; // rax

	v2 = sub_140417BF0(a1, 1u);
	v3 = 0;
	if (v2)
	{
		if ((v2[84] & 1) != 0)
		{
			v5 = 1;
			if ((v2[85] & 0x100) == 0)
				v5 = v2[104];
		}
		else
		{
			v5 = 0;
		}
		v6 = (_DWORD*)a1[2];
		LOBYTE(v3) = v5 != 0;
		v6[2] = 1;
		*v6 = v3;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return result;
}

