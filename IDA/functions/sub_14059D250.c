#include "../winhttp.h"

//----- (000000014059D250) ----------------------------------------------------
__int64 __fastcall sub_14059D250(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64** v3; // rax
	__int64** v4; // r12
	__int64* v5; // rcx
	__int64 v6; // rbx
	_DWORD* v7; // rsi
	_DWORD* v8; // rax
	unsigned int v9; // esi
	unsigned __int64 v10; // r8
	__int64* v11; // rdx
	int v12; // eax
	__int64 v13; // rcx
	unsigned int v14; // edi
	unsigned int* v15; // r14
	_BOOL8 v16; // r13
	__int64 v17; // r15
	__int64* v18; // rcx
	int v19; // edx
	unsigned int v20; // esi
	int* v21; // rax
	__int64 v22; // rcx
	int* v23; // rbp
	__int64 v24; // rcx
	unsigned int v25; // edx
	__int64 v27; // rdi
	__int64 v28; // rax
	int* v29; // rax
	int v30; // ecx
	_DWORD* v31; // [rsp+30h] [rbp-88h]
	unsigned int v32; // [rsp+38h] [rbp-80h]
	_DWORD* v33; // [rsp+40h] [rbp-78h]
	__int64 v34; // [rsp+48h] [rbp-70h] BYREF
	__int64 v35; // [rsp+50h] [rbp-68h]
	int* v36; // [rsp+58h] [rbp-60h]
	__int64* v37; // [rsp+60h] [rbp-58h]
	__int64 v38[4]; // [rsp+68h] [rbp-50h] BYREF

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		goto LABEL_16;
	v3 = (__int64**)sub_140056AB0(a1, 1u);
	v4 = v3;
	if (!v3)
		goto LABEL_16;
	v5 = *v3;
	if (!*v3 || !*v5)
		goto LABEL_16;
	v6 = 0i64;
	if (*((_DWORD*)v5 + 296))
		v31 = (_DWORD*)v5[1];
	else
		v31 = 0i64;
	v7 = v5 + 4;
	if (!*((_DWORD*)v5 + 294))
		v7 = 0i64;
	v33 = v7;
	v37 = *((_DWORD*)v5 + 297) ? v5 + 93 : 0i64;
	if (!v7)
		goto LABEL_16;
	memset(v38, 0, sizeof(v38));
	v8 = (_DWORD*)(a1[3] + 16i64);
	v32 = 0;
	if ((unsigned __int64)v8 < a1[2] && v8 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 5)
	{
		v32 = sub_1400585E0((__int64)a1, 2);
		if (v32 > v7[76])
		{
		LABEL_16:
			sub_1403CC530(qword_140C65898, 1u);
			return 0i64;
		}
		v9 = 0;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		for (a1[2] += 16i64; ; a1[2] -= 16i64)
		{
			v10 = a1[2];
			v11 = (__int64*)dword_140A12138;
			if (a1[3] + 16i64 < v10)
				v11 = (__int64*)(a1[3] + 16i64);
			if (!(unsigned int)sub_14005BA70((__int64)a1, *v11, v10 - 16))
				break;
			a1[2] += 16i64;
			v12 = sub_1400584E0((__int64)a1, -1);
			*((_DWORD*)v38 + v9++) = v12;
		}
		a1[2] -= 16i64;
	}
	if (*v4)
		v13 = **v4;
	else
		v13 = 0i64;
	v14 = 0;
	v15 = (unsigned int*)v38;
	v16 = *(_DWORD*)(v13 + 32) == 0;
	v17 = 1144i64 - (_QWORD)v38;
	do
	{
		v18 = *v4;
		if (*v4 && *((_DWORD*)v18 + 298))
			v19 = *(unsigned int*)((char*)v15 + (_QWORD)v18 + v17);
		else
			v19 = 0;
		v20 = *v15;
		if (v19 != *v15 && v20)
		{
			if (v18 && *((_DWORD*)v18 + 298) && *(unsigned int*)((char*)v15 + (_QWORD)v18 + v17))
			{
				v25 = 32;
				goto LABEL_49;
			}
			v21 = sub_1400B5DF0(qword_140C658F0, v20, 0i64);
			v22 = qword_140C65898;
			v23 = v21;
			if (!v21)
			{
				v25 = 6;
				goto LABEL_50;
			}
			if (!sub_14056AFB0(qword_140C65898, v21, v31, v33, (__int64)v37, v14))
			{
				v25 = 112;
				goto LABEL_49;
			}
			if (v16 && (v23[84] & 2) != 0 && (unsigned int)sub_1403AF9E0(qword_140C65898 + 160, v20))
			{
				v25 = 30;
			LABEL_49:
				v22 = qword_140C65898;
			LABEL_50:
				sub_1403CC530(v22, v25);
				return 0i64;
			}
		}
		++v14;
		++v15;
	} while (v14 < 8);
	v34 = 0i64;
	v35 = 0i64;
	v36 = 0i64;
	if (*v4)
		v24 = **v4;
	else
		v24 = 0i64;
	v34 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 48i64))(v24);
	v27 = v32;
	LODWORD(v35) = v32;
	v28 = 4i64 * v32;
	if (!is_mul_ok(v32, 4ui64))
		v28 = -1i64;
	v29 = sub_14018B280(v28, 0);
	v36 = v29;
	if (v32)
	{
		while (1)
		{
			v30 = *(_DWORD*)((char*)v38 + v6 * 4);
			v29[v6++] = v30;
			if (!--v27)
				break;
			v29 = v36;
		}
	}
	sub_1403F4900(qword_140C65898, 0x85Bu, (__int64)&v34);
	sub_14018B900((__int64)v36, 0);
	return 0i64;
}
// 14059D46A: conditional instruction was optimized away because edi.4<8u
// 14059D49B: conditional instruction was optimized away because edi.4<8u
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

