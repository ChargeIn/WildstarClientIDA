#include "../winhttp.h"

//----- (000000014056A260) ----------------------------------------------------
__int64 __fastcall sub_14056A260(__int64 a1, int a2)
{
	__int64 v2; // rax
	unsigned int v3; // r8d
	unsigned int v4; // eax
	unsigned int v5; // r9d
	_DWORD* v6; // rcx
	__int64 v7; // rax

	v2 = *(_QWORD*)(a1 + 72);
	v3 = 0;
	if (!v2)
		v2 = *(_QWORD*)(a1 + 64) + 8i64;
	v4 = *(_DWORD*)(v2 + 304);
	v5 = 8;
	if (v4 < 8)
		v5 = v4;
	if (v5)
	{
		v6 = (_DWORD*)(a1 + 188);
		v7 = v5;
		do
		{
			if (a2 == *v6)
				++v3;
			++v6;
			--v7;
		} while (v7);
	}
	return v3;
}

