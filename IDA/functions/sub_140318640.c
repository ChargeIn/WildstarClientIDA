#include "../winhttp.h"

//----- (0000000140318640) ----------------------------------------------------
unsigned __int16* __fastcall sub_140318640(__int64 a1, __int64 a2, _QWORD* a3)
{
	unsigned __int16* result; // rax
	unsigned __int16* v7; // rbx
	_QWORD* v8; // rcx
	_QWORD* v9; // rcx

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			result = *(unsigned __int16**)(a1 + 16);
			*(_DWORD*)a2 = *result;
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
		result = (unsigned __int16*)sub_14018B280(56i64, 0);
		v7 = result;
		if (result)
		{
			result = 0i64;
			*((_QWORD*)v7 + 1) = 0i64;
			*((_QWORD*)v7 + 2) = 0i64;
			*(_QWORD*)v7 = off_140B64238;
			*((_QWORD*)v7 + 3) = a2;
			*((_QWORD*)v7 + 4) = a1;
			*(_QWORD*)(v7 + 22) = 0i64;
			*((_DWORD*)v7 + 10) = 0;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = *(_QWORD**)(a2 + 8);
		if (v8)
			result = (unsigned __int16*)sub_140317C90(v8);
		*(_QWORD*)(a2 + 8) = v7;
		if (a3 && !*((_QWORD*)v7 + 1))
		{
			*((_QWORD*)v7 + 1) = a3;
			*((_QWORD*)v7 + 2) = *a3;
			*a3 = v7;
			result = (unsigned __int16*)*((_QWORD*)v7 + 2);
			if (result)
				*((_QWORD*)result + 1) = v7 + 8;
		}
	}
	return result;
}
// 140B64238: using guessed type __int64 (__fastcall *off_140B64238[4])();

