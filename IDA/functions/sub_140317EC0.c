#include "../winhttp.h"

//----- (0000000140317EC0) ----------------------------------------------------
void __fastcall sub_140317EC0(__int64 a1, __int64 a2, int** a3)
{
	int* v6; // rbx
	_QWORD* v7; // rcx
	__int64 v8; // rax
	_QWORD* v9; // rcx

	if (*(_DWORD*)a1 <= 1u)
	{
		if (*(_DWORD*)a1)
		{
			*(float*)a2 = sub_1401C9770(*(unsigned __int16**)(a1 + 16));
		}
		else
		{
			v9 = *(_QWORD**)(a2 + 8);
			if (v9)
				sub_140317C90(v9);
			*(_QWORD*)a2 = 0i64;
			*(_QWORD*)(a2 + 8) = 0i64;
		}
	}
	else
	{
		v6 = sub_14018B280(56i64, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = 0i64;
			*((_QWORD*)v6 + 2) = 0i64;
			*(_QWORD*)v6 = off_140B64230;
			*((_QWORD*)v6 + 3) = a2;
			*((_QWORD*)v6 + 4) = a1;
			*(_QWORD*)(v6 + 11) = 0i64;
			v6[10] = 0;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = *(_QWORD**)(a2 + 8);
		if (v7)
			sub_140317C90(v7);
		*(_QWORD*)(a2 + 8) = v6;
		if (a3 && !*((_QWORD*)v6 + 1))
		{
			*((_QWORD*)v6 + 1) = a3;
			*((_QWORD*)v6 + 2) = *a3;
			*a3 = v6;
			v8 = *((_QWORD*)v6 + 2);
			if (v8)
				*(_QWORD*)(v8 + 8) = v6 + 4;
		}
	}
}
// 140B64230: using guessed type __int64 (__fastcall *off_140B64230[5])();

