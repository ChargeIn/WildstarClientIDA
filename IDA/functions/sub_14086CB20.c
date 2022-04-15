#include "../winhttp.h"

//----- (000000014086CB20) ----------------------------------------------------
_QWORD* __fastcall sub_14086CB20(__int64 a1, unsigned __int16 a2, __int64* a3)
{
	_QWORD* v3; // rbx
	_QWORD* result; // rax
	__int64 v7; // rcx

	v3 = 0i64;
	if (*(char*)(a1 + 479) >= 0)
	{
		v3 = *(_QWORD**)(a1 + 8i64 * ((unsigned int)a3 % 0x1F) + 200);
		if (v3)
		{
			while ((__int64*)v3[1] != a3)
			{
				v3 = (_QWORD*)v3[2];
				if (!v3)
					goto LABEL_11;
			}
			return v3;
		}
	LABEL_11:
		v3 = sub_14086C930(a1, a2);
		if (v3)
		{
			if ((unsigned int)sub_14084C3A0(a3, a1) == 1)
			{
				v3[1] = a3;
				v7 = a1 + 8i64 * ((unsigned int)a3 % 0x1F);
				v3[2] = *(_QWORD*)(v7 + 200);
				*(_QWORD*)(v7 + 200) = v3;
				++* (_DWORD*)(a1 + 448);
				return v3;
			}
			(*(void(__fastcall**)(_QWORD*))(*v3 + 8i64))(v3);
		}
		return 0i64;
	}
	if (!*(_QWORD*)(a1 + 456))
		*(_QWORD*)(a1 + 456) = sub_14086C930(a1, a2);
	result = *(_QWORD**)(a1 + 456);
	if (!result)
		return v3;
	return result;
}
// 14086CBB6: conditional instruction was optimized away because rbx.8!=0

