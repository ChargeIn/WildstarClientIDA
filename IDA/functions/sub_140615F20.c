#include "../winhttp.h"

//----- (0000000140615F20) ----------------------------------------------------
__int64 __fastcall sub_140615F20(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v3; // rdi
	unsigned int i; // r12d
	__int64 v7; // r9
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rdx
	unsigned int* v11; // r15
	__int64* v12; // rcx
	unsigned int v13; // ebx
	__int64 v14; // rax
	unsigned int v15; // ebx
	int v16; // edi
	int v17; // esi
	int v18; // ebp
	int v19; // r14d
	int* v20; // rax
	__int64 v21; // [rsp+40h] [rbp-58h]
	__int64 v23; // [rsp+A8h] [rbp+10h]
	__int64 v24; // [rsp+B0h] [rbp+18h] BYREF
	__int64 v25; // [rsp+B8h] [rbp+20h] BYREF

	v2 = a1 + 8;
	v3 = a1;
	v23 = a1 + 8;
	sub_140008410(a1 + 8);
	if (!a2)
		return 2147500037i64;
	for (i = 0; i < *(_DWORD*)a2; ++i)
	{
		v7 = *(_QWORD*)(v2 + 8);
		v8 = *(_QWORD*)(v3 + 16);
		v9 = *(_QWORD*)(v7 + 8);
		v10 = v7;
		v11 = (unsigned int*)(*(_QWORD*)(a2 + 8) + 16i64 * i);
		while (v9)
		{
			if (*(_DWORD*)(v9 + 32) < *v11)
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v10 = v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		}
		if (v10 == v7 || *v11 < *(_DWORD*)(v10 + 32))
		{
			v25 = *(_QWORD*)(v2 + 8);
			v12 = &v25;
		}
		else
		{
			v24 = v10;
			v12 = &v24;
		}
		if (*v12 != v8)
			continue;
		v13 = *v11;
		if (qword_140C63840)
		{
			v14 = qword_140C63840(off_140A69800, v13, qword_140C63858);
		}
		else
		{
			if (dword_140C63AA8 || (int)sub_1401F1600() < 0)
				goto LABEL_21;
			v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653D0 + 24i64))(qword_140C653D0, v13);
		}
		if (v14)
		{
			v15 = *v11;
			v16 = dword_140C636A8;
			v17 = v11[3];
			v18 = v11[1];
			v19 = v11[2];
			v20 = sub_1403D61D0(v23, v11);
			v20[3] = v16;
			v3 = a1;
			v20[2] = v15;
			v20[4] = v17;
			v20[5] = v18;
			v20[6] = v19;
			*((_QWORD*)v20 + 4) = v21;
		}
	LABEL_21:
		v2 = v23;
	}
	return 0i64;
}
// 14061608D: variable 'v21' is possibly undefined
// 140A69800: using guessed type wchar_t *off_140A69800[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AA8: using guessed type int dword_140C63AA8;
// 140C653D0: using guessed type __int64 qword_140C653D0;

