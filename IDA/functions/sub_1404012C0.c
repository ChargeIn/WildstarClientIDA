#include "../winhttp.h"

//----- (00000001404012C0) ----------------------------------------------------
void __fastcall sub_1404012C0(__int64 a1, int* a2)
{
	__int64 v2; // r14
	__int64 v4; // r15
	__int64 v5; // rbx
	int* v6; // rax
	int* v7; // rdi
	unsigned __int64 v8; // rbx

	v2 = qword_140C658A0;
	v4 = *(_QWORD*)(qword_140C658A0 + 264);
	if (a2)
	{
		v5 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v5;
			while (*((_WORD*)a2 + v5));
		}
		v6 = sub_14018B280(2 * v5 + 18, 0);
		if (v6)
		{
			*((_QWORD*)v6 + 1) = v5;
			*(_QWORD*)v6 = off_140B55060;
		}
		else
		{
			v6 = 0i64;
		}
		v7 = v6 + 4;
		v8 = 2 * v5;
		sub_1407DB590(v6 + 4, a2, v8);
		*(_WORD*)((char*)v7 + v8) = 0;
		*(_QWORD*)(v2 + 264) = v7;
	}
	else
	{
		*(_QWORD*)(qword_140C658A0 + 264) = 0i64;
	}
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C658A0: using guessed type __int64 qword_140C658A0;

