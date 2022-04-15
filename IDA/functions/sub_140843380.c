#include "../winhttp.h"

//----- (0000000140843380) ----------------------------------------------------
__int64 __fastcall sub_140843380(__int64 a1, __int64 a2)
{
	unsigned int v4; // ebp
	unsigned int v5; // esi
	__int64* v6; // rax
	__int64* v7; // rdi
	bool v8; // zf

	v4 = 1;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
	v5 = *(_DWORD*)(a2 + 32);
	v6 = *(__int64**)(a1 + 8i64 * (v5 % 0xC1) + 224);
	if (v6)
	{
		while (*((_DWORD*)v6 + 2) != v5)
		{
			v6 = (__int64*)*v6;
			if (!v6)
				goto LABEL_12;
		}
		v7 = v6 + 2;
		if (v6 != (__int64*)-16i64)
		{
			v8 = (*((_DWORD*)v6 + 14))-- == 1;
			if (v8 && *v7)
			{
				sub_140881720(SHIDWORD(qword_140C61B18), *v7);
				*v7 = 0i64;
				*((_DWORD*)v7 + 2) = 0;
			}
			if (*((_DWORD*)v7 + 10))
				v4 = 2;
			else
				sub_140843780((int*)(a1 + 216), v5);
		}
	}
LABEL_12:
	sub_14083FEA0(a1, a2, v4);
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
	return v4;
}
// 140C61B18: using guessed type __int64 qword_140C61B18;

