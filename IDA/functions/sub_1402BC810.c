#include "../winhttp.h"

//----- (00000001402BC810) ----------------------------------------------------
__int64 __fastcall sub_1402BC810(__int64 a1, unsigned __int64 a2, unsigned __int64* a3)
{
	__int64 result; // rax
	unsigned __int64 v6; // r9
	_QWORD* v7; // rdi
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	unsigned __int16* v10; // rdx

	if (a2)
	{
		v6 = *(_QWORD*)(a1 + 40);
		if (a2 <= v6)
		{
			v7 = (_QWORD*)(a1 + 64);
			if (*(_QWORD*)(a1 + 64)
				|| (result = sub_140283D30(
					*(_QWORD*)(a1 + 16),
					*(void(__fastcall****)(_QWORD))(a1 + 24),
					*(int**)(a1 + 32),
					v6,
					*(_DWORD*)(a1 + 56),
					v7),
					(int)result >= 0))
			{
				v8 = *(_QWORD*)(*v7 + 64i64);
				v9 = a2 - 1;
				if (a2 != 1)
				{
					v10 = (unsigned __int16*)(v8 + 2 * (a2 - 2));
					do
					{
						if (*(unsigned __int16*)(v8 + 2 * a2 - 2) != (unsigned __int64)*v10)
							break;
						--v10;
						--v9;
					} while (v9);
				}
				*a3 = v9;
				return 0i64;
			}
		}
		else
		{
			return 2147942487i64;
		}
	}
	else
	{
		*a3 = 0i64;
		return 0i64;
	}
	return result;
}

