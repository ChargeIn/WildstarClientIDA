#include "../winhttp.h"

//----- (00000001408904A0) ----------------------------------------------------
__int64 __fastcall sub_1408904A0(__int64 a1, unsigned int a2)
{
	unsigned int v2; // esi
	__int64 v3; // r10
	__int64 v4; // rbx
	__int64 v5; // r8
	__int64 v6; // r9
	unsigned int v7; // eax
	__int64 v8; // rdi
	__int64 v9; // rax

	v2 = *(_DWORD*)(a1 + 256);
	v3 = 0i64;
	v4 = 0i64;
	v5 = 0i64;
	v6 = a2;
	if (a2 >= v2)
		return 0i64;
	if ((int)(v2 - a2) >= 2)
	{
		v7 = ((v2 - a2 - 2) >> 1) + 1;
		v8 = v7;
		a2 += 2 * v7;
		do
		{
			v9 = *(_QWORD*)(a1 + 8 * v6);
			v6 += 2i64;
			v3 += *(_QWORD*)(*(_QWORD*)(v9 + 8) + 112i64);
			v4 += *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8 * v6 - 8) + 8i64) + 112i64);
			--v8;
		} while (v8);
	}
	if (a2 < v2)
		v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8 * v6) + 8i64) + 112i64);
	return v5 + v4 + v3;
}

