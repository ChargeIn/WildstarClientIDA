#include "../winhttp.h"

//----- (00000001404FD530) ----------------------------------------------------
__int64 __fastcall sub_1404FD530(__int64 a1, __int64 a2, int a3)
{
	__int64 v4; // rcx
	__int64 v8; // r14
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // r8
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v19; // rcx
	__int64 v20; // r10
	__int64 v21; // r8
	__int64 v22; // r9
	int* v23; // rcx
	unsigned __int64 v24; // r8
	unsigned __int64 v25; // r9
	__int64 v26; // r11
	int v27; // xmm1_4
	int v28; // edx
	__int64 v29; // rax
	int v30; // eax
	__int64 v31; // rax
	int v32; // eax
	char v33[8]; // [rsp+20h] [rbp-48h] BYREF
	int* v34; // [rsp+28h] [rbp-40h]
	__int64 v35; // [rsp+30h] [rbp-38h]
	__int64 v36; // [rsp+38h] [rbp-30h]
	__int64 v37; // [rsp+70h] [rbp+8h] BYREF
	__int64 v38; // [rsp+88h] [rbp+20h] BYREF

	v4 = *(_QWORD*)(a1 + 2328);
	if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	if (!*(_QWORD*)(a1 + 2168))
	{
		*(_QWORD*)a2 = 0i64;
		*(_QWORD*)(a2 + 8) = 1i64;
		*(_QWORD*)(a2 + 16) = 0i64;
		return a2;
	}
	v8 = 0i64;
	if (*(_QWORD*)(a1 + 7304) == *(_QWORD*)(a1 + 7188))
	{
		v9 = *(_QWORD*)(a1 + 7064);
		v10 = *(_QWORD*)(v9 + 16);
		if (v10 != v9)
		{
			do
			{
				v11 = *(_QWORD*)(a1 + 7248);
				v12 = v11;
				v13 = *(_QWORD*)(v11 + 8);
				while (v13)
				{
					if (*(_DWORD*)(v13 + 32) < *(_DWORD*)(v10 + 32))
					{
						v13 = *(_QWORD*)(v13 + 24);
					}
					else
					{
						v12 = v13;
						v13 = *(_QWORD*)(v13 + 16);
					}
				}
				if (v12 == v11 || *(_DWORD*)(v10 + 32) < *(_DWORD*)(v12 + 32))
				{
					v38 = *(_QWORD*)(a1 + 7248);
					v14 = &v38;
				}
				else
				{
					v37 = v12;
					v14 = &v37;
				}
				v15 = *v14;
				if (v15 == v11 || (v12 = *(unsigned int*)(v10 + 36), *(_DWORD*)(v15 + 36) != (_DWORD)v12))
					v8 += sub_140500700(v12, *(_DWORD*)(v10 + 32), *(_DWORD*)(v10 + 36));
				v16 = *(_QWORD*)(v10 + 24);
				if (v16)
				{
					v10 = *(_QWORD*)(v10 + 24);
					for (i = *(_QWORD*)(v16 + 16); i; i = *(_QWORD*)(i + 16))
						v10 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v10 + 8); v10 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v10 = j;
					if (*(_QWORD*)(v10 + 24) != j)
						v10 = j;
				}
			} while (v10 != *(_QWORD*)(a1 + 7064));
		}
		v19 = *(_QWORD*)(a1 + 2328);
		v34 = 0i64;
		v35 = 0i64;
		v36 = 0i64;
		if (v19 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v19 + 24i64))(v19) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
		v20 = *(_QWORD*)(a1 + 2168);
		if (v20)
		{
			v21 = *(int*)(a1 + 7192);
			if (*(_DWORD*)(a1 + 7188) > 0x10u || (unsigned int)v21 > 2)
				v22 = qword_140C658E8;
			else
				v22 = *(_QWORD*)(32i64 * *(int*)(a1 + 7188) + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v21;
			(*(void(__fastcall**)(_QWORD, char*, __int64, __int64))(*(_QWORD*)v20 + 320i64))(
				*(_QWORD*)(a1 + 2168),
				v33,
				a1 + 7120,
				v22);
		}
		if (sub_1404FF150(a1) || (v23 = v34, v24 = 0i64, (v25 = (v35 - (__int64)v34) >> 2) == 0))
		{
		LABEL_54:
			if (!v8 || !a3)
			{
			LABEL_64:
				if (v34)
					sub_14018B900((__int64)v34, 0);
				goto LABEL_69;
			}
			if ((dword_140DC3260 & 2) != 0)
			{
				if (dword_140DC3274)
				{
					v32 = dword_140DC3270;
				LABEL_63:
					v8 = v32;
					goto LABEL_64;
				}
			}
			else
			{
				dword_140DC3260 |= 2u;
			}
			dword_140DC3274 = 1;
			v31 = sub_140200220(0x498u);
			if (v31)
			{
				v32 = *(_DWORD*)(v31 + 4);
				dword_140DC3270 = v32;
			}
			else
			{
				v32 = 0;
				dword_140DC3270 = 0;
			}
			goto LABEL_63;
		}
		v26 = *(_QWORD*)(a1 + 7280) - (_QWORD)v34;
		while (1)
		{
			v27 = *v23;
			LODWORD(v37) = *(int*)((char*)v23 + v26);
			LODWORD(v38) = v27;
			v28 = v27;
			if ((int)(v27 ^ v37) < 0)
				v28 = 0x80000000 - v27;
			if ((int)abs32(v28 - v37) > 84)
				break;
			++v24;
			++v23;
			if (v24 >= v25)
				goto LABEL_54;
		}
		if ((dword_140DC3260 & 1) != 0)
		{
			if (dword_140DC326C)
			{
				v30 = dword_140DC3268;
			LABEL_53:
				v8 += v30;
				goto LABEL_54;
			}
		}
		else
		{
			dword_140DC3260 |= 1u;
		}
		dword_140DC326C = 1;
		v29 = sub_140200220(0x497u);
		if (v29)
		{
			v30 = *(_DWORD*)(v29 + 4);
			dword_140DC3268 = v30;
		}
		else
		{
			v30 = 0;
			dword_140DC3268 = 0;
		}
		goto LABEL_53;
	}
	if (!a3)
	{
		*(_QWORD*)a2 = 0i64;
	LABEL_73:
		*(_QWORD*)(a2 + 16) = 0i64;
		*(_QWORD*)(a2 + 8) = 1i64;
		return a2;
	}
	v8 = sub_140500700(v4, *(_DWORD*)(a1 + 7184), *(_DWORD*)(a1 + 7188));
LABEL_69:
	if (!v8 || !a3)
	{
		*(_QWORD*)a2 = v8;
		goto LABEL_73;
	}
	*(_QWORD*)a2 = v8;
	*(_QWORD*)(a2 + 8) = 15i64;
	*(_DWORD*)(a2 + 16) = 0;
	*(_DWORD*)(a2 + 20) = 9;
	return a2;
}
// 1404FD8B5: variable 'v4' is possibly undefined
// 140C658E8: using guessed type __int64 qword_140C658E8;
// 140DC3260: using guessed type int dword_140DC3260;
// 140DC3268: using guessed type int dword_140DC3268;
// 140DC326C: using guessed type int dword_140DC326C;
// 140DC3270: using guessed type int dword_140DC3270;
// 140DC3274: using guessed type int dword_140DC3274;
// 1404FD530: using guessed type char var_48[8];

