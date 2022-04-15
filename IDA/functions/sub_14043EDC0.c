#include "../winhttp.h"

//----- (000000014043EDC0) ----------------------------------------------------
__int64 __fastcall sub_14043EDC0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rbx
	unsigned int v8; // r13d
	int v9; // r12d
	__int64 v10; // rdx
	_QWORD* v11; // rsi
	__int64* v12; // rdi
	_QWORD* v13; // rdi
	__int64 v14; // rdx
	_QWORD** v15; // rsi
	_QWORD* v16; // rcx
	__int64 v17; // r8
	__int64 v18; // r14
	_QWORD* v19; // rax
	_QWORD* v20; // rbx
	__int64 v21; // rdx
	_DWORD* v22; // rcx
	__int64 v23; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v26; // [rsp+20h] [rbp-29h] BYREF
	__int64 v27; // [rsp+28h] [rbp-21h]
	__int64 v28; // [rsp+30h] [rbp-19h]
	_QWORD* v29; // [rsp+38h] [rbp-11h]
	__int128 v30; // [rsp+40h] [rbp-9h]
	__int128 v31; // [rsp+50h] [rbp+7h]
	__int128 v32; // [rsp+60h] [rbp+17h]
	_QWORD** v33; // [rsp+70h] [rbp+27h]

	if (a2 == a3)
		return 1i64;
	v5 = sub_14043ED60(a1, a3);
	v7 = v5;
	v8 = 1;
	if (!v5 || (v6 = *(_QWORD*)(v5 + 8), v9 = 1, (*(_BYTE*)(v6 + 28) & 8) == 0))
		v9 = 0;
	if (!v5)
		return 0i64;
	while (1)
	{
		v10 = *(_QWORD*)(v7 + 16);
		if (!v10)
			break;
		v6 = (*(_DWORD*)(*(_QWORD*)(v10 + 8) + 28i64) >> 3) & 1;
		if (v9 != (_DWORD)v6)
			break;
		v7 = *(_QWORD*)(v7 + 16);
	}
	if (!(unsigned int)sub_1403C9450(v6, a2, **(_DWORD**)(v7 + 8)))
		return 0i64;
	if (**(_DWORD**)(v7 + 8) == a2)
		return 1i64;
	v27 = 0i64;
	v28 = 0i64;
	v30 = 0i64;
	v31 = 0i64;
	v32 = 0i64;
	v29 = 0i64;
	v33 = 0i64;
	sub_140172F70(&v26);
	v11 = (_QWORD*)*((_QWORD*)&v32 + 1);
	v12 = (__int64*)*((_QWORD*)&v31 + 1);
	if (*((_QWORD*)&v31 + 1) == *((_QWORD*)&v32 + 1) - 8i64)
	{
		v14 = (__int64)v33;
		if ((unsigned __int64)(v28 - (((__int64)v33 - v27) >> 3)) < 2)
		{
			sub_140173030((__int64)&v26, (__int64)v33);
			v14 = (__int64)v33;
			v12 = (__int64*)*((_QWORD*)&v31 + 1);
		}
		v15 = (_QWORD**)(v14 + 8);
		*(_QWORD*)(v14 + 8) = sub_14018B280(496i64, 0);
		if (v12)
			*v12 = v7;
		v13 = *v15;
		v33 = v15;
		v11 = v13 + 62;
		*(_QWORD*)&v32 = v13;
		*((_QWORD*)&v32 + 1) = v13 + 62;
	}
	else
	{
		if (*((_QWORD*)&v31 + 1))
			**((_QWORD**)&v31 + 1) = v7;
		v13 = v12 + 1;
	}
	v16 = v29;
	*((_QWORD*)&v31 + 1) = v13;
	if (v13 != v29)
	{
		v17 = v30;
		do
		{
			v18 = *v16;
			if (v16 == (_QWORD*)(*((_QWORD*)&v30 + 1) - 8i64))
			{
				sub_14018B900(v17, 0);
				v17 = *(_QWORD*)(v31 + 8);
				*(_QWORD*)&v31 = v31 + 8;
				*(_QWORD*)&v30 = v17;
				*((_QWORD*)&v30 + 1) = v17 + 496;
				v16 = (_QWORD*)v17;
			}
			else
			{
				++v16;
			}
			v19 = *(_QWORD**)(v18 + 32);
			v29 = v16;
			v20 = (_QWORD*)v19[2];
			if (v20 != v19)
			{
				do
				{
					v21 = v20[4];
					v22 = *(_DWORD**)(v21 + 8);
					if (((v22[7] >> 3) & 1) == v9)
					{
						if (*v22 == a2)
							goto LABEL_47;
						if (v13 == v11 - 1)
						{
							sub_14043F3F0(&v26, v20 + 4);
							v11 = (_QWORD*)*((_QWORD*)&v32 + 1);
							v13 = (_QWORD*)*((_QWORD*)&v31 + 1);
						}
						else
						{
							if (v13)
								*v13 = v21;
							*((_QWORD*)&v31 + 1) = ++v13;
						}
					}
					v23 = v20[3];
					if (v23)
					{
						v20 = (_QWORD*)v20[3];
						for (i = *(_QWORD**)(v23 + 16); i; i = (_QWORD*)i[2])
							v20 = i;
					}
					else
					{
						for (j = v20[1]; v20 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
							v20 = (_QWORD*)j;
						if (v20[3] != j)
							v20 = (_QWORD*)j;
					}
				} while (v20 != *(_QWORD**)(v18 + 32));
				v17 = v30;
				v16 = v29;
			}
		} while (v13 != v16);
	}
	v8 = 0;
LABEL_47:
	sub_14033E040(&v26);
	return v8;
}
// 14043EE5D: variable 'v6' is possibly undefined

