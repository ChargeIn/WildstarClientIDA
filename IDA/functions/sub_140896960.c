#include "../winhttp.h"

//----- (0000000140896960) ----------------------------------------------------
__int64 __fastcall sub_140896960(int a1, __int64 a2, int a3, __int64 a4, _BYTE* a5)
{
	__int64 result; // rax
	_QWORD* v9; // rbx

	if (!sub_140892A10(a4, a2))
		return 2i64;
	if (*(_DWORD*)(a2 + 16) != a3)
	{
		if (!(*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2))
		{
			v9 = *(_QWORD**)(a2 + 32);
			if (*a5)
				return 1i64;
			do
			{
				if (v9 == *(_QWORD**)(a2 + 40))
					break;
				result = sub_140896960(a1, *v9, a3, a4, (__int64)a5);
				if ((_DWORD)result != 1)
					return result;
				++v9;
			} while (!*a5);
		}
		if (!*a5)
			*(_QWORD*)(a4 + 8) -= 8i64;
		return 1i64;
	}
	*a5 = 1;
	return 1i64;
}

