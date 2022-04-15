#include "../winhttp.h"

//----- (00000001408975E0) ----------------------------------------------------
__int64 __fastcall sub_1408975E0(__int64 a1, int a2)
{
	__int64 v4; // r14
	__int64 v5; // r14
	unsigned int v6; // r12d
	__int64 v7; // rdx
	__int64* v8; // rbx
	__int64* v9; // rax
	int v10; // eax
	__int64* v11; // rbx
	__int64 v12; // rsi
	int v13; // ecx
	int v14; // eax
	__int64 result; // rax
	unsigned int v16; // ebx
	__int64* v17; // [rsp+30h] [rbp-20h] BYREF
	__int64* v18; // [rsp+38h] [rbp-18h]
	int v19; // [rsp+40h] [rbp-10h]
	char v20; // [rsp+80h] [rbp+30h] BYREF

	sub_1408978D0(a1);
	sub_140896A10(a1);
	v4 = *(_QWORD*)a1;
	*(_DWORD*)(a1 + 32) = 0;
	*(_BYTE*)(a1 + 40) = 1;
	v17 = 0i64;
	v18 = 0i64;
	v19 = 0;
	v20 = 0;
	v5 = v4 + 248;
	v6 = 2;
	v8 = (__int64*)sub_1408819F0(dword_140C10F20, 64i64);
	if (!v8)
	{
		v8 = v17;
		goto LABEL_16;
	}
	v7 = (__int64)v17;
	v9 = &v8[(unsigned int)(v18 - v17)];
	v17 = v8;
	v18 = v9 + 1;
	v19 = 8;
	if (!v9)
	{
	LABEL_16:
		v10 = 2;
		goto LABEL_17;
	}
	*v9 = v5;
	if (*(_DWORD*)(v5 + 16) != a2)
	{
		if (!(*(unsigned __int8(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 8i64))(v5, v7))
		{
			v11 = *(__int64**)(v5 + 32);
			if (v20)
				goto LABEL_13;
			while (v11 != *(__int64**)(v5 + 40))
			{
				v10 = sub_140896960(a1, *v11, a2, (__int64)&v17, &v20);
				if (v10 != 1)
					goto LABEL_14;
				++v11;
				if (v20)
				{
					v8 = v17;
					goto LABEL_17;
				}
			}
		}
		if (!v20)
			--v18;
	LABEL_13:
		v10 = 1;
	LABEL_14:
		v8 = v17;
		goto LABEL_17;
	}
	v8 = v17;
	v20 = 1;
	v10 = 1;
LABEL_17:
	if (!v20 || v10 != 1 || v8 == v18)
	{
	LABEL_31:
		if (v8)
		{
			v18 = v8;
			sub_140881720(dword_140C10F20, (__int64)v8);
		}
		return v6;
	}
	while (1)
	{
		v12 = *v8;
		if ((*(unsigned __int8(__fastcall**)(__int64, __int64))(*(_QWORD*)*v8 + 8i64))(*v8, v7))
		{
		LABEL_29:
			v14 = *(_DWORD*)(v12 + 32);
			v6 = 1;
			*(_DWORD*)(a1 + 32) = v14;
			*(_BYTE*)(a1 + 40) = v14 != 0;
			*(_DWORD*)(a1 + 36) = *(_DWORD*)(v12 + 16);
			*(_WORD*)(a1 + 74) = *(_WORD*)(v12 + 20);
		LABEL_30:
			v8 = v17;
			goto LABEL_31;
		}
		if ((unsigned int)sub_140897D50(a1, v12) != 1)
		{
			sub_140897DE0(a1);
			goto LABEL_30;
		}
		if (++v8 == v18)
			break;
		v7 = *v8;
		v13 = *(_DWORD*)(*(_QWORD*)(*v8 + 8) + 56i64);
		if (v13 >= 0)
		{
			if (v13 <= 1)
			{
				sub_140896BE0(a1, v7);
			}
			else if (v13 <= 3)
			{
				sub_140896A80(a1, v7);
			}
		}
		if (v8 == v18)
			goto LABEL_29;
	}
	result = sub_140897440(a1);
	v16 = result;
	if (v17)
	{
		v18 = v17;
		sub_140881720(dword_140C10F20, (__int64)v17);
		return v16;
	}
	return result;
}
// 140897668: conditional instruction was optimized away because %var_20.8==0
// 14089776C: variable 'v7' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;

