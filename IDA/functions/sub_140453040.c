#include "../winhttp.h"

//----- (0000000140453040) ----------------------------------------------------
void __fastcall sub_140453040(__int64 a1, __int64 a2)
{
	__int64 i; // rbx
	unsigned int v5; // edi
	__int64 v6; // rax
	int* v7; // rdi
	int* v8; // rax

	for (i = 0i64; (unsigned int)i < *(_DWORD*)a2; i = (unsigned int)(i + 1))
	{
		v5 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4 * i);
		if (qword_140C63840)
		{
			v6 = qword_140C63840(off_140A6A4E8, v5, qword_140C63858);
		}
		else
		{
			if (dword_140C64C20 || (int)sub_1402010C0() < 0)
				continue;
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E50 + 24i64))(qword_140C64E50, v5);
		}
		if (v6)
		{
			v7 = (int*)(v6 + 28);
			v8 = sub_140453190(a1, (int*)(v6 + 24));
			sub_1404532A0((__int64)v8, v7)[1] = 1;
		}
	}
}
// 140A6A4E8: using guessed type wchar_t *off_140A6A4E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64C20: using guessed type int dword_140C64C20;
// 140C64E50: using guessed type __int64 qword_140C64E50;

