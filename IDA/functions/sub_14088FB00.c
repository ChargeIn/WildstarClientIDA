#include "../winhttp.h"

//----- (000000014088FB00) ----------------------------------------------------
_QWORD* __fastcall sub_14088FB00(__int64 a1, __int64 a2, __int64 a3)
{
	_QWORD* result; // rax
	_QWORD* v7; // rcx

	result = (_QWORD*)sub_1408819F0(dword_140C10F20, 64i64);
	if (result)
	{
		result = (_QWORD*)sub_14088C900((__int64)result, a2, a3);
		if (result)
		{
			*result = 0i64;
			v7 = *(_QWORD**)(a1 + 136);
			if (v7)
			{
				*v7 = result;
				*(_QWORD*)(a1 + 136) = result;
			}
			else
			{
				*(_QWORD*)(a1 + 136) = result;
				*(_QWORD*)(a1 + 128) = result;
			}
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

