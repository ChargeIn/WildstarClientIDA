#include "../winhttp.h"

//----- (00000001400F1480) ----------------------------------------------------
__int64 __fastcall sub_1400F1480(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v4; // rdi
	__int64 result; // rax

	*a3 += 8i64;
	v4 = *(_QWORD*)(*a3 - 8i64);
	if (v4)
	{
		(**(void(__fastcall***)(_QWORD))v4)(*(_QWORD*)(*a3 - 8i64));
		*(_QWORD*)sub_140059170(a2, 8ui64) = v4;
		return (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v4 + 24i64))(v4, a2);
	}
	else
	{
		result = a2[2];
		*(_DWORD*)(result + 8) = 0;
		a2[2] += 16i64;
	}
	return result;
}

