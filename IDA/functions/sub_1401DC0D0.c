#include "../winhttp.h"

//----- (00000001401DC0D0) ----------------------------------------------------
__int64 __fastcall sub_1401DC0D0(__int64 a1)
{
	int* v2; // rbx
	__int64 v3; // rsi
	__int64 v4; // r14
	unsigned int v5; // edi
	__int64 v6; // rax
	int v7; // eax
	int v8; // [rsp+20h] [rbp-28h] BYREF
	int v9; // [rsp+24h] [rbp-24h]
	int v10; // [rsp+28h] [rbp-20h]

	if (!a1)
		return 0i64;
	v2 = &v8;
	v3 = 3i64;
	v4 = a1 - (_QWORD)&v8 + 4;
	do
	{
		v5 = *(int*)((char*)v2 + v4);
		if (qword_140C63840)
		{
			v6 = qword_140C63840(off_140A6A168, v5, qword_140C63858);
		}
		else
		{
			if (dword_140C63EAC || (int)sub_1401FCCC0() < 0)
				goto LABEL_11;
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AE0 + 24i64))(qword_140C63AE0, v5);
		}
		if (v6)
		{
			v7 = *(_DWORD*)(v6 + 12);
			goto LABEL_12;
		}
	LABEL_11:
		v7 = 0;
	LABEL_12:
		*v2++ = v7;
		--v3;
	} while (v3);
	return v8 & 0x3FF | ((v9 & 0x3FF | ((v10 & 0x3FF | 0xFFFFF800) << 10)) << 10);
}
// 140A6A168: using guessed type wchar_t *off_140A6A168[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AE0: using guessed type __int64 qword_140C63AE0;
// 140C63EAC: using guessed type int dword_140C63EAC;

