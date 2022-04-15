#include "../winhttp.h"

//----- (00000001403AB820) ----------------------------------------------------
void __fastcall sub_1403AB820(__int64 a1, unsigned __int8* a2)
{
	unsigned int v4; // r15d
	__int64 v5; // rsi
	__int64 v6; // rbx
	_DWORD* v7; // rcx
	__int64 v8; // rax
	unsigned __int64 v9; // r12
	int* v10; // rax
	int* v11; // rdx
	int* v12; // r14
	__int64 v13; // rcx
	unsigned int v14; // r9d
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rdx
	_DWORD* v18; // r8
	__int64 v19; // rbx
	__int64 v20; // rcx
	char v21[8]; // [rsp+28h] [rbp-69h] BYREF
	int* v22; // [rsp+30h] [rbp-61h]
	__int64 v23; // [rsp+38h] [rbp-59h]
	char v24[8]; // [rsp+48h] [rbp-49h] BYREF
	__int64 v25; // [rsp+50h] [rbp-41h]
	__int64 v26[3]; // [rsp+68h] [rbp-29h] BYREF
	__int64 v27; // [rsp+80h] [rbp-11h]
	__int64 v28; // [rsp+88h] [rbp-9h]
	__int64 v29[6]; // [rsp+90h] [rbp-1h] BYREF
	__int64 v30; // [rsp+100h] [rbp+6Fh] BYREF

	v22 = sub_14018B280(40i64, 0);
	v23 = 0i64;
	*(_BYTE*)v22 = 0;
	v4 = 0;
	*((_QWORD*)v22 + 1) = 0i64;
	*((_QWORD*)v22 + 2) = v22;
	for (*((_QWORD*)v22 + 3) = v22; v4 < *a2; ++v4)
	{
		v5 = 32i64 * v4;
		v30 = *(_QWORD*)(*((_QWORD*)a2 + 1) + v5);
		sub_1403ADFC0((__int64)v21, (__int64)v24, (int*)&v30);
		v26[0] = v30;
		v26[1] = v29[2];
		v28 = 0i64;
		v27 = 0i64;
		v26[2] = v29[3];
		sub_1403AE0E0(a1, (__int64)v29, (int*)v26);
		if (v27)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v27 - 16) + 8i64))(v27 - 16);
		v6 = v29[0];
		v7 = (_DWORD*)(v5 + *((_QWORD*)a2 + 1));
		*(_DWORD*)(v29[0] + 40) = *v7;
		*(_DWORD*)(v6 + 44) = v7[1];
		*(_DWORD*)(v6 + 48) = v7[2];
		*(_DWORD*)(v6 + 52) = v7[3];
		v8 = *((_QWORD*)a2 + 1);
		v9 = *(unsigned __int8*)(v5 + v8 + 16);
		if (*(_QWORD*)(v6 + 64) <= v9)
		{
			v10 = sub_14018DB00(*(_QWORD*)(v6 + 56), *(unsigned __int8*)(v5 + v8 + 16), 16i64);
			v11 = *(int**)(v6 + 56);
			v12 = v10;
			if (v11 != v10)
			{
				sub_1407DB590(v10, v11, 16i64 * *(_QWORD*)(v6 + 64));
				v13 = *(_QWORD*)(v6 + 56);
				if (v13)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
				*(_QWORD*)(v6 + 56) = v12;
			}
		}
		*(_QWORD*)(v6 + 64) = v9;
		v14 = 0;
		v15 = v5 + *((_QWORD*)a2 + 1);
		if (*(_BYTE*)(v15 + 16))
		{
			do
			{
				v16 = *(_QWORD*)(v15 + 24);
				v17 = 16i64 * v14++;
				v18 = (_DWORD*)(v17 + *(_QWORD*)(v6 + 56));
				*v18 = *(_DWORD*)(v16 + v17);
				v18[1] = *(_DWORD*)(v16 + v17 + 4);
				v18[2] = *(_DWORD*)(v16 + v17 + 8);
				v18[3] = *(_DWORD*)(v16 + v17 + 12);
				v15 = v5 + *((_QWORD*)a2 + 1);
			} while (v14 < *(unsigned __int8*)(v15 + 16));
		}
	}
	sub_140030C70((__int64)v24, (__int64)v21);
	v19 = *(_QWORD*)(qword_140C65898 + 29504);
	v20 = v19 + 6064;
	if (*(_QWORD*)(v19 + 6080))
		sub_140433F70(v20, *(_QWORD*)(v25 + 16), v25);
	else
		sub_140433A70(v20, (__int64)v24);
	sub_1400A8020(v19 + 4808);
	sub_140008410((__int64)v24);
	sub_14018B900(v25, 0);
	sub_140008410((__int64)v21);
	sub_14018B900((__int64)v22, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403AB820: using guessed type char var_A0[8];
// 1403AB820: using guessed type char var_C0[8];

