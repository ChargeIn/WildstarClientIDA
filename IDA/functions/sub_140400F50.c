#include "../winhttp.h"

//----- (0000000140400F50) ----------------------------------------------------
__int64 __fastcall sub_140400F50(__int64 a1, __int64 a2)
{
	int* v2; // rbp
	__int64 v5; // r15
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rdi
	unsigned __int64 v9; // rbx
	int v10; // eax

	v2 = (int*)(a2 + 24);
	*(_DWORD*)a1 = 0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)a1 = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 16);
	v5 = *(_QWORD*)(a1 + 16);
	if (a2 == -24)
	{
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	else
	{
		v6 = 0i64;
		if (*(_WORD*)v2)
		{
			do
				++v6;
			while (*((_WORD*)v2 + v6));
		}
		v7 = sub_14018B280(2 * v6 + 18, 0);
		if (v7)
		{
			*((_QWORD*)v7 + 1) = v6;
			*(_QWORD*)v7 = off_140B55060;
		}
		else
		{
			v7 = 0i64;
		}
		v8 = v7 + 4;
		v9 = 2 * v6;
		sub_1407DB590(v7 + 4, v2, v9);
		*(_WORD*)((char*)v8 + v9) = 0;
		*(_QWORD*)(a1 + 16) = v8;
	}
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v10 = *(_DWORD*)(a2 + 92);
	*(_DWORD*)(a1 + 28) = 0;
	*(_QWORD*)(a1 + 32) = 4i64;
	*(_DWORD*)(a1 + 24) = v10;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = -1i64;
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

