#include "../winhttp.h"

//----- (0000000140100CD0) ----------------------------------------------------
void __fastcall sub_140100CD0(__int64 a1, __int64 a2, int* a3)
{
	__int64 v3; // r13
	int* v4; // rsi
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx

	v3 = *(_QWORD*)(a1 + 32);
	v4 = (int*)&unk_1409D4C7C;
	if (a3)
		v4 = a3;
	if (v4)
	{
		v7 = 0i64;
		if (*(_WORD*)v4)
		{
			do
				++v7;
			while (*((_WORD*)v4 + v7));
		}
		v8 = sub_14018B280(2 * v7 + 18, 0);
		if (v8)
		{
			*((_QWORD*)v8 + 1) = v7;
			*(_QWORD*)v8 = off_140B55060;
		}
		else
		{
			v8 = 0i64;
		}
		v9 = v8 + 4;
		v10 = 2 * v7;
		sub_1407DB590(v8 + 4, v4, v10);
		*(_WORD*)((char*)v9 + v10) = 0;
		*(_QWORD*)(a1 + 32) = v9;
	}
	else
	{
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	*(_QWORD*)(a1 + 40) = a2;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

