#include "../winhttp.h"

//----- (00000001400926E0) ----------------------------------------------------
__int64 __fastcall sub_1400926E0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	unsigned __int64 v8; // rbx
	_QWORD* v9; // rdi

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
		if ((int)result >= 0)
		{
			v8 = 0i64;
			v9 = (_QWORD*)(a3 + 16);
			do
			{
				result = sub_140336A40(a1, a2, v9);
				if ((int)result < 0)
					break;
				++v8;
				++v9;
			} while (v8 < 0xA);
		}
	}
	return result;
}
// 14009272B: variable 'v7' is possibly undefined

