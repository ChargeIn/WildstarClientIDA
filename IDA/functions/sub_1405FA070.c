#include "../winhttp.h"

//----- (00000001405FA070) ----------------------------------------------------
__int64 __fastcall sub_1405FA070(__int64 a1, unsigned int* a2)
{
	__int64 result; // rax
	__int64 v5; // rsi
	unsigned int v6; // edi
	__int64 v7; // rdx
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	int* v12; // rbx
	int* v13; // rax
	__int64 v14; // rcx
	__int64 v15; // r8
	__int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // rcx
	int* v19; // rax
	__int64* v20; // rbx
	__int64* i; // rcx
	char v22[16]; // [rsp+30h] [rbp-48h] BYREF
	_QWORD v23[7]; // [rsp+40h] [rbp-38h] BYREF
	__int64 v24; // [rsp+88h] [rbp+10h]
	__int64 v25; // [rsp+88h] [rbp+10h]

	result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
		+ 24i64))(
			qword_140C659A0,
			0i64,
			a2[7],
			0i64,
			0i64,
			0);
	if (!(_DWORD)result)
		return result;
	result = sub_1401F3EA0(a2[10]);
	v5 = result;
	if (!result)
		return result;
	v6 = *(_DWORD*)(result + 4);
	if (v6 - 1 <= 2 || v6 == 7)
	{
		v15 = *(_QWORD*)(a1 + 56);
		v16 = a1 + 48;
		v17 = *(_QWORD*)(v15 + 8);
		v18 = v15;
		while (v17)
		{
			if (*(_DWORD*)(v17 + 32) < *(_DWORD*)(v5 + 8))
			{
				v17 = *(_QWORD*)(v17 + 24);
			}
			else
			{
				v18 = v17;
				v17 = *(_QWORD*)(v17 + 16);
			}
		}
		if (v18 == v15 || (v25 = v18, *(_DWORD*)(v5 + 8) < *(_DWORD*)(v18 + 32)))
			v25 = *(_QWORD*)(a1 + 56);
		v11 = v25;
		if (v25 == *(_QWORD*)(a1 + 56))
		{
			v12 = sub_14018B280(16i64, 0);
			if (v12)
			{
				v19 = sub_14018B280(24i64, 0);
				*((_QWORD*)v12 + 1) = v19;
				*(_QWORD*)v19 = v19;
				*(_QWORD*)(*((_QWORD*)v12 + 1) + 8i64) = *((_QWORD*)v12 + 1);
			}
			else
			{
				v12 = 0i64;
			}
			v14 = v16;
			LODWORD(v23[0]) = *(_DWORD*)(v5 + 8);
			goto LABEL_31;
		}
	}
	else
	{
		v7 = *(_QWORD*)(a1 + 24);
		v8 = a1 + 16;
		v9 = *(_QWORD*)(v7 + 8);
		v10 = v7;
		while (v9)
		{
			if (*(_DWORD*)(v9 + 32) < v6)
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v10 = v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		}
		if (v10 == v7 || (v24 = v10, v6 < *(_DWORD*)(v10 + 32)))
			v24 = *(_QWORD*)(a1 + 24);
		v11 = v24;
		if (v24 == *(_QWORD*)(a1 + 24))
		{
			v12 = sub_14018B280(16i64, 0);
			if (v12)
			{
				v13 = sub_14018B280(24i64, 0);
				LODWORD(v23[0]) = v6;
				*((_QWORD*)v12 + 1) = v13;
				*(_QWORD*)v13 = v13;
				*(_QWORD*)(*((_QWORD*)v12 + 1) + 8i64) = *((_QWORD*)v12 + 1);
			}
			else
			{
				v12 = 0i64;
				LODWORD(v23[0]) = v6;
			}
			v14 = v8;
		LABEL_31:
			v23[1] = v12;
			v23[2] = 0i64;
			sub_1405FB040(v14, (__int64)v22, v23);
			goto LABEL_33;
		}
	}
	v12 = *(int**)(v11 + 40);
LABEL_33:
	v20 = (__int64*)*((_QWORD*)v12 + 1);
	result = *v20;
	for (i = (__int64*)*v20; i != v20; i = (__int64*)*i)
	{
		if ((unsigned int*)i[2] == a2)
			break;
	}
	if (i == v20)
	{
		if ((__int64*)result != v20)
		{
			while (a2[8] < *(_DWORD*)(*(_QWORD*)(result + 16) + 32i64))
			{
				result = *(_QWORD*)result;
				if ((__int64*)result == v20)
					goto LABEL_42;
			}
			v20 = (__int64*)result;
		}
	LABEL_42:
		result = (__int64)sub_14018B280(24i64, 0);
		if (result != -16)
			*(_QWORD*)(result + 16) = a2;
		*(_QWORD*)result = v20;
		*(_QWORD*)(result + 8) = v20[1];
		*(_QWORD*)v20[1] = result;
		v20[1] = result;
	}
	return result;
}
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 1405FA070: using guessed type char var_48[16];

