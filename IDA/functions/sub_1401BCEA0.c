#include "../winhttp.h"

//----- (00000001401BCEA0) ----------------------------------------------------
__int64 __fastcall sub_1401BCEA0(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rdx
	__int64 result; // rax
	unsigned __int64 v6; // rdi
	int* v7; // rax
	int* v8; // rbp
	int v9; // esi
	unsigned __int64 v10; // r8
	unsigned __int64 v11; // rdx
	unsigned __int64 v12; // r9
	unsigned __int64 v13; // rcx
	unsigned __int64 v14; // rsi
	unsigned __int64 v15; // rdi
	unsigned int* v16; // rax
	unsigned __int64 v17; // rcx
	unsigned __int64 v18; // rdx
	unsigned int* v19; // rcx
	int* v20; // rax
	int* v21; // rdx
	unsigned __int64 v22; // rcx
	__int64 v23; // rax
	__int64 v24; // rsi
	unsigned __int64 v25; // rbp
	int* v26; // rdx
	int v27; // ecx
	unsigned __int64 v28; // rcx
	__int64 v29; // rax
	__int64 v30; // rdx
	__int64 v31; // rcx
	__int64 v32; // rcx
	int* v33; // [rsp+30h] [rbp-38h]
	char* v34; // [rsp+38h] [rbp-30h]
	unsigned int* v35; // [rsp+70h] [rbp+8h]
	unsigned __int64 v37; // [rsp+80h] [rbp+18h] BYREF
	int* v38; // [rsp+88h] [rbp+20h]

	v3 = *(unsigned int*)a1;
	if (!(_DWORD)v3)
		return 0i64;
	result = (*(__int64(__fastcall**)(_QWORD, __int64, unsigned __int64*))(**(_QWORD**)(a2 + 40) + 64i64))(
		*(_QWORD*)(a2 + 40),
		v3,
		&v37);
	if ((int)result >= 0)
	{
		v6 = v37;
		if (v37 < 8)
			return 2684551169i64;
		v7 = sub_14018B280(v37, 9u);
		v8 = v7;
		v33 = v7;
		if (!v7)
			return 2147942414i64;
		v9 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, int*, unsigned __int64))(**(_QWORD**)(a2 + 40) + 88i64))(
			*(_QWORD*)(a2 + 40),
			*(unsigned int*)a1,
			0i64,
			v7,
			v6);
		if (v9 < 0)
		{
			sub_14018B900((__int64)v8, 0);
			return (unsigned int)v9;
		}
		v10 = (unsigned int)v8[1];
		v11 = (unsigned int)*v8;
		v12 = 8 * v11 + 8;
		v13 = v12 + 56 * v10;
		v14 = v6 - v13;
		if (v12 > v6 || v13 > v6)
			goto LABEL_34;
		v15 = 0i64;
		v16 = (unsigned int*)(v8 + 2);
		v38 = (int*)((char*)v8 + v13);
		v35 = (unsigned int*)(v8 + 2);
		v17 = 0i64;
		v34 = (char*)v8 + v12;
		if (v11)
		{
			while (v16[2 * v17] < v14)
			{
				++v17;
				v16 = (unsigned int*)(v8 + 2);
				if (v17 >= v11)
					goto LABEL_15;
			}
			goto LABEL_34;
		}
	LABEL_15:
		v18 = 0i64;
		if (v10)
		{
			v19 = (unsigned int*)((char*)v8 + v12);
			while (*v19 < v14)
			{
				++v18;
				v19 += 14;
				if (v18 >= v10)
					goto LABEL_19;
			}
		LABEL_34:
			sub_14018B900((__int64)v8, 0);
			return 2684551169i64;
		}
	LABEL_19:
		a1[6] = v14;
		v20 = sub_14018B280(v14, 0);
		v21 = v38;
		a1[5] = v20;
		sub_1407DB590(v20, v21, v14);
		v22 = (unsigned int)*v8;
		a1[2] = v22;
		v23 = 16 * v22;
		if (!is_mul_ok(v22, 0x10ui64))
			v23 = -1i64;
		a1[1] = sub_14018B280(v23, 0);
		if (a1[2])
		{
			v24 = 0i64;
			v25 = 0i64;
			do
			{
				*(_QWORD*)(v24 + a1[1]) = a1[5] + v35[2 * v25];
				v26 = sub_14018B280(56i64, 0);
				if (v26)
				{
					v27 = v35[2 * v25 + 1];
					*((_QWORD*)v26 + 1) = 0i64;
					*((_QWORD*)v26 + 2) = 0i64;
					*((_QWORD*)v26 + 3) = 0i64;
					*((_QWORD*)v26 + 4) = 0i64;
					*((_QWORD*)v26 + 5) = 0i64;
					*v26 = v27;
					*((_QWORD*)v26 + 6) = 0i64;
				}
				else
				{
					v26 = 0i64;
				}
				*(_QWORD*)(v24 + a1[1] + 8) = v26;
				sub_1401BCEA0(*(_QWORD*)(v24 + a1[1] + 8), a2);
				++v25;
				v24 += 16i64;
			} while (v25 < a1[2]);
			v8 = v33;
		}
		v28 = (unsigned int)v8[1];
		a1[4] = v28;
		v29 = 56 * v28;
		if (!is_mul_ok(v28, 0x38ui64))
			v29 = -1i64;
		a1[3] = sub_14018B280(v29, 0);
		if (a1[4])
		{
			v30 = 0i64;
			do
			{
				++v15;
				v31 = a1[5] + *(unsigned int*)&v34[v30];
				v30 += 56i64;
				*(_QWORD*)(v30 + a1[3] - 56) = v31;
				*(_QWORD*)(v30 + a1[3] - 48) = *(_QWORD*)&v34[v30 - 48];
				*(_QWORD*)(v30 + a1[3] - 40) = *(_QWORD*)&v34[v30 - 40];
				*(_QWORD*)(v30 + a1[3] - 32) = *(_QWORD*)&v34[v30 - 32];
				v32 = a1[3];
				*(_QWORD*)(v32 + v30 - 24) = *(_QWORD*)&v34[v30 - 24];
				*(_QWORD*)(v32 + v30 - 16) = *(_QWORD*)&v34[v30 - 16];
				*(_DWORD*)(v32 + v30 - 8) = *(_DWORD*)&v34[v30 - 8];
				*(_DWORD*)(v30 + a1[3] - 4) = *(_DWORD*)&v34[v30 - 52];
			} while (v15 < a1[4]);
		}
		sub_14018B900((__int64)v8, 0);
		return 0i64;
	}
	return result;
}

