#include "../winhttp.h"

//----- (000000014040D5D0) ----------------------------------------------------
__int64 __fastcall sub_14040D5D0(__int64 a1, __int64 a2, __int64 a3)
{
	int* v6; // rax
	__int64 v8; // rax
	int v9; // ecx
	_DWORD* i; // rax

	v6 = sub_1400B5DF0(a3, *(_DWORD*)(a1 + 64), 0i64);
	if (v6 && v6[82] == 143)
	{
		*(_DWORD*)(a2 + 32) |= 4u;
		return sub_14040D060(a1, a2, a3, v6[88], v6[87]);
	}
	else
	{
		v8 = *(_QWORD*)(a1 + 272);
		if (!v8)
			return 0i64;
		v9 = 0;
		for (i = (_DWORD*)(v8 + 4); *i != 4; ++i)
		{
			if ((unsigned int)++v9 >= 5)
				return 0i64;
		}
		*(_DWORD*)(a2 + 32) |= 2u;
		if (*(_DWORD*)(a1 + 68))
			return sub_14040D060(
				a1,
				a2,
				a3,
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 352i64),
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 348i64));
		else
			return 0i64;
	}
}

