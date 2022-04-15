#include "../winhttp.h"

//----- (00000001402BC750) ----------------------------------------------------
__int64 __fastcall sub_1402BC750(__int64 a1, unsigned __int64 a2, unsigned __int64* a3)
{
	unsigned __int64 v3; // r9
	__int64 result; // rax
	_QWORD* v7; // rdi
	unsigned __int64 v8; // rax
	__int64 v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v11; // r9
	unsigned __int16* v12; // rdx

	v3 = *(_QWORD*)(a1 + 40);
	if (a2 == v3)
	{
		*a3 = v3;
		return 0i64;
	}
	else if (a2 <= v3)
	{
		v7 = (_QWORD*)(a1 + 64);
		if (*(_QWORD*)(a1 + 64)
			|| (result = sub_140283D30(
				*(_QWORD*)(a1 + 16),
				*(void(__fastcall****)(_QWORD))(a1 + 24),
				*(int**)(a1 + 32),
				v3,
				*(_DWORD*)(a1 + 56),
				v7),
				(int)result >= 0))
		{
			v8 = a2 + 1;
			v9 = *(_QWORD*)(*v7 + 64i64);
			v10 = *(_QWORD*)(*v7 + 40i64);
			v11 = *(unsigned __int16*)(v9 + 2 * a2);
			if (a2 + 1 < v10)
			{
				v12 = (unsigned __int16*)(v9 + 2 * v8);
				do
				{
					if (v11 != *v12)
						break;
					++v8;
					++v12;
				} while (v8 < v10);
			}
			*a3 = v8;
			return 0i64;
		}
	}
	else
	{
		return 2147942487i64;
	}
	return result;
}

