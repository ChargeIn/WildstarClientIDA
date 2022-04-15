#include "../winhttp.h"

//----- (00000001400BB5E0) ----------------------------------------------------
__int64 __fastcall sub_1400BB5E0(__int64 a1, int a2, unsigned int a3)
{
	__int64 result; // rax
	__int64 v5; // rsi
	_QWORD* v6; // rdi
	int v7; // ebx

	result = a2;
	v5 = a1 + 24i64 * a2;
	v6 = (_QWORD*)(v5 + 304);
	if (*(_DWORD*)(v5 + 316) != a3)
	{
		if (*v6)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 8i64))(*v6);
			*v6 = 0i64;
		}
		*(_QWORD*)(v5 + 312) = 0i64;
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 24i64))(
			qword_140C65848,
			v5 + 304,
			a3);
		*(_DWORD*)(v5 + 316) = a3;
		*(_DWORD*)(v5 + 312) = 1;
		result = sub_14018CDF0();
		*(_DWORD*)(v5 + 320) = result;
	}
	if (*v6)
	{
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 32i64))(*v6);
		if (!(_DWORD)result)
		{
			result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 24i64))(*v6);
			if (!(_DWORD)result)
			{
				v7 = *(_DWORD*)(v5 + 320) + 3000;
				result = sub_14018CDF0();
				if (v7 - (int)result < 0)
				{
					if (*v6)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 40i64))(*v6);
						*(_DWORD*)(v5 + 312) = 1;
						result = sub_14018CDF0();
						*(_DWORD*)(v5 + 320) = result;
					}
				}
			}
		}
	}
	return result;
}
// 140C65848: using guessed type __int64 qword_140C65848;

