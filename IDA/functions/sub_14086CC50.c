#include "../winhttp.h"

//----- (000000014086CC50) ----------------------------------------------------
_QWORD* __fastcall sub_14086CC50(__int64 a1, __int64* a2)
{
	_QWORD* v2; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	_QWORD* result; // rax
	__int64 v8; // rax
	__int64 v9; // rcx

	v2 = 0i64;
	if (*(char*)(a1 + 479) >= 0)
	{
		v2 = *(_QWORD**)(a1 + 8i64 * ((unsigned int)a2 % 0x1F) + 200);
		if (v2)
		{
			while ((__int64*)v2[1] != a2)
			{
				v2 = (_QWORD*)v2[2];
				if (!v2)
					goto LABEL_14;
			}
			return v2;
		}
	LABEL_14:
		v8 = sub_1408819F0(dword_140C10F20, 32i64);
		if (v8)
		{
			v2 = (_QWORD*)sub_14087BE20(v8);
			if (v2)
			{
				if ((unsigned int)sub_14084C3A0(a2, a1) == 1)
				{
					v2[1] = a2;
					v9 = a1 + 8i64 * ((unsigned int)a2 % 0x1F);
					v2[2] = *(_QWORD*)(v9 + 200);
					*(_QWORD*)(v9 + 200) = v2;
					++* (_DWORD*)(a1 + 448);
					return v2;
				}
				(*(void(__fastcall**)(_QWORD*))(*v2 + 8i64))(v2);
			}
		}
		return 0i64;
	}
	if (!*(_QWORD*)(a1 + 456))
	{
		v5 = sub_1408819F0(dword_140C10F20, 32i64);
		if (v5)
			v6 = sub_14087BE20(v5);
		else
			v6 = 0i64;
		*(_QWORD*)(a1 + 456) = v6;
	}
	result = *(_QWORD**)(a1 + 456);
	if (!result)
		return v2;
	return result;
}
// 14086CD04: conditional instruction was optimized away because rbx.8!=0
// 140C10F20: using guessed type int dword_140C10F20;

