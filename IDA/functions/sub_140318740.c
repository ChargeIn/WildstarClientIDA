#include "../winhttp.h"

//----- (0000000140318740) ----------------------------------------------------
_QWORD* __fastcall sub_140318740(__int64 a1, __int64 a2, _QWORD* a3)
{
	_QWORD* result; // rax
	_QWORD* v7; // rbx
	_QWORD* v8; // rcx
	_QWORD* v9; // rcx

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = *(_QWORD**)(a1 + 16);
			*(_DWORD*)a2 = *(_DWORD*)result;
		}
		else
		{
			v9 = *(_QWORD**)(a2 + 8);
			if (v9)
				sub_140317C90(v9);
			result = 0i64;
			*(_QWORD*)a2 = 0i64;
			*(_QWORD*)(a2 + 8) = 0i64;
		}
	}
	else
	{
		result = sub_14018B280(56i64, 0);
		v7 = result;
		if (result)
		{
			result = 0i64;
			v7[1] = 0i64;
			v7[2] = 0i64;
			*v7 = off_140B64210;
			v7[3] = a2;
			v7[4] = a1;
			*(_QWORD*)((char*)v7 + 44) = 0i64;
			*((_DWORD*)v7 + 10) = 0;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = *(_QWORD**)(a2 + 8);
		if (v8)
			result = sub_140317C90(v8);
		*(_QWORD*)(a2 + 8) = v7;
		if (a3 && !v7[1])
		{
			v7[1] = a3;
			v7[2] = *a3;
			*a3 = v7;
			result = (_QWORD*)v7[2];
			if (result)
				result[1] = v7 + 2;
		}
	}
	return result;
}
// 140B64210: using guessed type __int64 (__fastcall *off_140B64210[9])();

