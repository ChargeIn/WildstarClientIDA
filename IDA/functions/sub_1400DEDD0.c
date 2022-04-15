#include "../winhttp.h"

//----- (00000001400DEDD0) ----------------------------------------------------
__int64 __fastcall sub_1400DEDD0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v5 = *(_QWORD*)(v2 + 464);
		if (v5)
			LODWORD(v5) = *(_DWORD*)(v5 + 1300);
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (double)(int)v5;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v3 = a1[2];
		*(_QWORD*)v3 = 0i64;
		*(_DWORD*)(v3 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}

