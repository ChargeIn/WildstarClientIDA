#include "../winhttp.h"

//----- (0000000140487570) ----------------------------------------------------
__int64 __fastcall sub_140487570(__int64 a1)
{
	__int64 v1; // r14
	int* v2; // rax
	int* v3; // rbx
	__int64 v4; // rdx
	int* v5; // rax
	__int64 i; // rcx
	unsigned int j; // esi
	unsigned int v8; // eax
	__int64 v9; // rax
	_DWORD* v10; // rbx
	int* v11; // rax
	_QWORD* v12; // rbp
	__int64 v13; // r8
	int* v14; // rax
	__int64 v15; // rcx
	__int64 v17; // [rsp+20h] [rbp-28h] BYREF
	__int64 v18; // [rsp+28h] [rbp-20h]
	__int64 v19; // [rsp+50h] [rbp+8h] BYREF
	int* v20; // [rsp+58h] [rbp+10h] BYREF

	v19 = a1;
	v1 = qword_140C65928;
	v2 = sub_14018B280(24i64, 0);
	v3 = v2;
	if (v2)
	{
		*((_QWORD*)v2 + 2) = 0i64;
		*((_QWORD*)v2 + 1) = 0i64;
		*(_QWORD*)v2 = 0i64;
	}
	else
	{
		v3 = 0i64;
	}
	v4 = *(_QWORD*)(v1 + 8);
	v5 = (int*)v4;
	for (i = *(_QWORD*)(v4 + 8); i; i = *(_QWORD*)(i + 16))
		v5 = (int*)i;
	if (v5 == (int*)v4 || v5[8])
	{
		LODWORD(v17) = 0;
		v18 = 0i64;
		v19 = (__int64)v5;
		sub_140055C60(v1, &v20, &v19, &v17);
		v5 = v20;
	}
	*((_QWORD*)v5 + 5) = v3;
	for (j = 0; ; ++j)
	{
		if (qword_140C63838)
		{
			v8 = qword_140C63838(off_140A6C7B0, qword_140C63858);
			goto LABEL_15;
		}
		if (dword_140C6462C || (int)sub_14022B4E0() < 0)
			break;
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64DF0 + 40i64))(qword_140C64DF0);
	LABEL_15:
		if (j >= v8)
			return 0i64;
		if (qword_140C63848)
		{
			v9 = qword_140C63848(off_140A6C7B0, j, qword_140C63858);
		}
		else
		{
			if (dword_140C6462C)
			{
				v10 = 0i64;
				goto LABEL_24;
			}
			if ((int)sub_14022B4E0() < 0)
			{
				v10 = 0i64;
				goto LABEL_24;
			}
			v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64DF0 + 32i64))(qword_140C64DF0, j);
		}
		v10 = (_DWORD*)v9;
	LABEL_24:
		v11 = sub_14018B280(24i64, 0);
		if (v11)
			v12 = sub_140487C50(v11, (__int64)v10);
		else
			v12 = 0i64;
		v13 = *(_QWORD*)(v1 + 8);
		v14 = (int*)v13;
		v15 = *(_QWORD*)(v13 + 8);
		while (v15)
		{
			if (*(_DWORD*)(v15 + 32) < *v10)
			{
				v15 = *(_QWORD*)(v15 + 24);
			}
			else
			{
				v14 = (int*)v15;
				v15 = *(_QWORD*)(v15 + 16);
			}
		}
		if (v14 == (int*)v13 || *v10 < (unsigned int)v14[8])
		{
			LODWORD(v17) = *v10;
			v18 = 0i64;
			v19 = (__int64)v14;
			sub_140055C60(v1, &v20, &v19, &v17);
			v14 = v20;
		}
		*((_QWORD*)v14 + 5) = v12;
	}
	return 0i64;
}
// 140A6C7B0: using guessed type wchar_t *off_140A6C7B0[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6462C: using guessed type int dword_140C6462C;
// 140C64DF0: using guessed type __int64 qword_140C64DF0;
// 140C65928: using guessed type __int64 qword_140C65928;

