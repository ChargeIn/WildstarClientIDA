#include "../winhttp.h"

//----- (00000001403AABA0) ----------------------------------------------------
_QWORD* __fastcall sub_1403AABA0(__int64 a1, __int64* a2, int a3)
{
	__int64* v3; // rax
	__int64 v4; // r15
	unsigned __int64 v5; // r12
	__int64 v6; // rsi
	__int64 v7; // rbx
	__int64 v8; // rbp
	unsigned int v9; // edi
	int v10; // r14d
	int v11; // r13d
	int v12; // edx
	int v13; // ecx
	BOOL v14; // ecx
	int v15; // ebx
	__int64 v16; // rax
	__int64 v17; // rdi
	__int64 v18; // r15
	int* v19; // rax
	int* v20; // r14
	int* v21; // rdx
	__int64 v22; // rcx
	_QWORD* result; // rax
	_QWORD* v24; // rbx
	__int64 v25; // rax
	int v26; // [rsp+20h] [rbp-C8h]
	int v27; // [rsp+28h] [rbp-C0h]
	__int64 v28[3]; // [rsp+40h] [rbp-A8h] BYREF
	__int64 v29; // [rsp+58h] [rbp-90h]
	__int64 v30; // [rsp+60h] [rbp-88h]
	__int64 v31[8]; // [rsp+68h] [rbp-80h] BYREF

	v3 = a2;
	v4 = a1;
	v5 = 0i64;
	if (a2[1])
	{
		v6 = 0i64;
		while (1)
		{
			v7 = *v3;
			v30 = 0i64;
			v29 = 0i64;
			v28[0] = *(_QWORD*)(v6 + v7);
			v28[1] = v31[2];
			v28[2] = v31[3];
			sub_1403AE0E0(v4, (__int64)v31, (int*)v28);
			if (v29)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v29 - 16) + 8i64))(v29 - 16);
			v8 = v31[0];
			*(_DWORD*)(v31[0] + 40) = *(_DWORD*)(v6 + v7);
			*(_DWORD*)(v8 + 44) = *(_DWORD*)(v6 + v7 + 4);
			*(_DWORD*)(v8 + 48) = *(_DWORD*)(v6 + v7 + 16);
			v9 = *(_DWORD*)(v6 + v7 + 28);
			v10 = *(_DWORD*)(v6 + v7 + 8);
			v11 = *(_DWORD*)(v6 + v7 + 16);
			v27 = v10;
			v26 = *(_DWORD*)(v6 + v7 + 12);
			if (!v9)
				break;
			if (a3)
			{
				if (qword_140C63840)
				{
					v16 = qword_140C63840(off_140A6A248, v9, qword_140C63858);
				}
				else
				{
					if (dword_140C63F1C || (int)sub_1401FDDC0() < 0)
						goto LABEL_31;
					v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64018 + 24i64))(qword_140C64018, v9);
				}
				if (v16 && v10 != 7)
				{
					v15 = *(_DWORD*)(v16 + 4);
					goto LABEL_26;
				}
			}
		LABEL_31:
			v3 = a2;
			++v5;
			v6 += 32i64;
			if (v5 >= a2[1])
				goto LABEL_32;
		}
		if (v11)
		{
			if (v11 == 1)
			{
				v14 = *(_DWORD*)(v6 + v7 + 20) == 0;
				goto LABEL_15;
			}
			if (v11 != 2)
				goto LABEL_16;
			v12 = 1065353216;
			v13 = *(_DWORD*)(v6 + v7 + 20);
		}
		else
		{
			v12 = 0;
			v13 = *(_DWORD*)(v6 + v7 + 20);
		}
		if ((v13 ^ v12) < 0)
			v13 = 0x80000000 - v13;
		v14 = (int)abs32(v13 - v12) <= 84;
	LABEL_15:
		if (!v14)
		{
		LABEL_16:
			v15 = *(_DWORD*)(v6 + v7 + 20);
		LABEL_26:
			v17 = *(_QWORD*)(v8 + 64);
			v18 = v17 + 1;
			v19 = sub_14018DB00(*(_QWORD*)(v8 + 56), v17 + 1, 16i64);
			v17 *= 2i64;
			v20 = v19;
			v19[2 * v17] = v27;
			v19[2 * v17 + 1] = v26;
			v19[2 * v17 + 2] = v11;
			v19[2 * v17 + 3] = v15;
			v21 = *(int**)(v8 + 56);
			if (v21 != v19)
			{
				sub_1407DB590(v19, v21, 16i64 * *(_QWORD*)(v8 + 64));
				v22 = *(_QWORD*)(v8 + 56);
				if (v22)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
				*(_QWORD*)(v8 + 56) = v20;
			}
			*(_QWORD*)(v8 + 64) = v18;
			v4 = a1;
			goto LABEL_31;
		}
		goto LABEL_31;
	}
LABEL_32:
	result = *(_QWORD**)(v4 + 8);
	v24 = (_QWORD*)result[2];
	if (v24 != result)
	{
		do
		{
			sub_1403AAEC0((__int64)(v24 + 5));
			v25 = v24[3];
			if (v25)
			{
				v24 = (_QWORD*)v24[3];
				for (result = *(_QWORD**)(v25 + 16); result; result = (_QWORD*)result[2])
					v24 = result;
			}
			else
			{
				for (result = (_QWORD*)v24[1]; v24 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v24 = result;
				if ((_QWORD*)v24[3] != result)
					v24 = result;
			}
		} while (v24 != *(_QWORD**)(v4 + 8));
	}
	return result;
}
// 140A6A248: using guessed type wchar_t *off_140A6A248[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F1C: using guessed type int dword_140C63F1C;
// 140C64018: using guessed type __int64 qword_140C64018;

