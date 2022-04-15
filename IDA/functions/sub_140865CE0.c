#include "../winhttp.h"

//----- (0000000140865CE0) ----------------------------------------------------
__int64 __fastcall sub_140865CE0(__int64 a1, __int64 a2)
{
	unsigned int v5; // ebx
	_QWORD* v6; // rdi
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rdx

	if (*(_QWORD*)(a1 + 8))
		return 1i64;
	v5 = 1;
	v6 = (_QWORD*)sub_140830F00(qword_140C61BA8, *(_DWORD*)a1, 0);
	if (v6)
	{
		v7 = *(_QWORD*)(a2 + 64);
		v8 = 2;
		if (v7 && (v9 = v6[8]) != 0)
		{
			if (v9 == v7)
				v8 = 1;
		}
		else
		{
			v8 = 3;
		}
		if (v8 == 1)
		{
			*(_QWORD*)(a1 + 8) = v6;
			v5 = sub_14084CD00(v6, a2);
			if (v5 != 1)
				*(_QWORD*)(a1 + 8) = 0i64;
		}
		else
		{
			if (v8 == 3)
				v8 = 1;
			v5 = v8;
		}
		(*(void(__fastcall**)(_QWORD*))(*v6 + 16i64))(v6);
	}
	return v5;
}

