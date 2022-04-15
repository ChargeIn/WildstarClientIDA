#include "../winhttp.h"

//----- (000000014077D8B0) ----------------------------------------------------
void __fastcall sub_14077D8B0(unsigned int** a1, __int64 a2)
{
	int v4; // ebp
	int v5; // eax
	__int64* v6; // rcx
	__int64 i; // rbx
	int* v8; // rcx
	__int64 v9; // rdx
	int* v10; // rax
	__int64 v11; // r8
	__int64 v12; // rcx
	_QWORD* v13; // rax
	int* v14; // rax
	int v15; // eax
	unsigned int* v16; // rbx
	int v17; // edi
	int* v18; // rax
	int* v19; // rbx
	__int64 v20; // rcx
	char v21[8]; // [rsp+20h] [rbp-18h] BYREF
	int* v22; // [rsp+28h] [rbp-10h]

	if (!a2)
		return;
	v4 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 200i64))(a2, **a1);
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
	v6 = (__int64*)a1[4];
	for (i = *v6; (__int64*)i != v6; i = *(_QWORD*)i)
	{
		if (*(_DWORD*)(i + 16) == v5)
			break;
	}
	v22 = sub_14018B280(40i64, 0);
	*(_QWORD*)v22 = v22;
	*((_QWORD*)v22 + 1) = v22;
	(*(void(__fastcall**)(__int64, _QWORD, char*, _QWORD))(*(_QWORD*)a2 + 160i64))(a2, **a1, v21, 0i64);
	v8 = v22;
	v9 = 0i64;
	if (!v4)
		goto LABEL_9;
	v10 = *(int**)v22;
	v11 = 0i64;
	if (*(int**)v22 == v22)
		goto LABEL_9;
	do
	{
		v10 = *(int**)v10;
		++v11;
	} while (v10 != v22);
	if (!v11)
	{
	LABEL_9:
		if ((unsigned int*)i != a1[4])
		{
			v12 = *(_QWORD*)i;
			v13 = *(_QWORD**)(i + 8);
			*v13 = *(_QWORD*)i;
			*(_QWORD*)(v12 + 8) = v13;
			sub_14018B900(i, 0);
		LABEL_19:
			v8 = v22;
			goto LABEL_20;
		}
	}
	if (v4)
	{
		v14 = *(int**)v22;
		if (*(int**)v22 != v22)
		{
			do
			{
				v14 = *(int**)v14;
				++v9;
			} while (v14 != v22);
			if (v9 && (unsigned int*)i == a1[4])
			{
				v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
				v16 = a1[4];
				v17 = v15;
				v18 = sub_14018B280(24i64, 0);
				if (v18 != (int*)-16i64)
					v18[4] = v17;
				*(_QWORD*)v18 = v16;
				*((_QWORD*)v18 + 1) = *((_QWORD*)v16 + 1);
				**((_QWORD**)v16 + 1) = v18;
				*((_QWORD*)v16 + 1) = v18;
				goto LABEL_19;
			}
		}
	}
LABEL_20:
	v19 = *(int**)v8;
	if (*(int**)v8 != v8)
	{
		do
		{
			v20 = (__int64)v19;
			v19 = *(int**)v19;
			sub_14018B900(v20, 0);
			v8 = v22;
		} while (v19 != v22);
	}
	*(_QWORD*)v8 = v8;
	*((_QWORD*)v22 + 1) = v22;
	sub_14018B900((__int64)v22, 0);
}
// 14077D8B0: using guessed type char var_18[8];

