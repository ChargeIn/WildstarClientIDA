#include "../winhttp.h"

//----- (00000001402BC6C0) ----------------------------------------------------
__int64 __fastcall sub_1402BC6C0(__int64 a1, float a2, unsigned __int64* a3)
{
	__int64 v4; // r9
	_QWORD* v5; // rbx
	__int64 result; // rax

	if (a2 > 0.0 && (v4 = *(_QWORD*)(a1 + 40)) != 0)
	{
		v5 = (_QWORD*)(a1 + 64);
		if (*(_QWORD*)(a1 + 64)
			|| (result = sub_140283D30(
				*(_QWORD*)(a1 + 16),
				*(void(__fastcall****)(_QWORD))(a1 + 24),
				*(int**)(a1 + 32),
				v4,
				*(_DWORD*)(a1 + 56),
				v5),
				(int)result >= 0))
		{
			sub_1402BBF90((_QWORD*)*v5, a2, a3);
			return 0i64;
		}
	}
	else
	{
		*a3 = 0i64;
		return 0i64;
	}
	return result;
}

