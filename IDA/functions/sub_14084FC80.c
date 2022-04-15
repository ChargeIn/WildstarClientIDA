#include "../winhttp.h"

//----- (000000014084FC80) ----------------------------------------------------
__int64 __fastcall sub_14084FC80(__int64* a1, int a2, float a3, float a4, float a5)
{
	float v5; // xmm9_4
	__int64 v6; // rdi
	unsigned int v7; // ebx
	unsigned __int8* v9; // r8
	unsigned int v10; // r9d
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64 v13; // rdx
	float* v14; // rax
	__int64 result; // rax
	unsigned __int8* v16; // r8
	unsigned int v17; // r9d
	__int64 v18; // rcx
	__int64 v19; // rdx
	__int64 v20; // rdx
	float* v21; // rax
	unsigned __int8* v22; // rdx
	unsigned int v23; // r8d
	__int64 v24; // rcx
	float v25; // [rsp+A8h] [rbp+10h] BYREF

	v5 = a5;
	v6 = a2;
	v7 = 0;
	if ((unsigned int)a2 <= 4 || (unsigned int)(a2 - 8) <= 1 || (unsigned int)(a2 - 18) <= 6)
	{
		v16 = (unsigned __int8*)a1[10];
		v25 = 0.0;
		if (v16)
		{
			v17 = *v16;
			v18 = 0i64;
			while (1)
			{
				v19 = (unsigned int)(v18 + 1);
				if (v16[v19] == (_BYTE)v6)
					break;
				v18 = (unsigned int)v19;
				if ((unsigned int)v19 >= v17)
					goto LABEL_20;
			}
			v20 = (__int64)&v16[4 * v18 + ((v17 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_20:
			v20 = 0i64;
		}
		v21 = &v25;
		if (v20)
			v21 = (float*)v20;
		result = *(unsigned int*)v21;
		v25 = *(float*)&result;
		if ((float)(a3 - *(float*)&result) != 0.0)
		{
			(*(void(__fastcall**)(__int64*, _QWORD, __int64, _QWORD, _QWORD))(*a1 + 176))(
				a1,
				(unsigned int)dword_1409A3530[v6],
				*a1,
				0i64,
				0i64);
			goto LABEL_25;
		}
	}
	else
	{
		if ((unsigned int)(a2 - 11) > 2)
		{
			result = sub_140854370(a1, a2, a3);
			goto LABEL_26;
		}
		v9 = (unsigned __int8*)a1[10];
		v25 = 0.0;
		if (v9)
		{
			v10 = *v9;
			v11 = 0i64;
			while (1)
			{
				v12 = (unsigned int)(v11 + 1);
				if (v9[v12] == (_BYTE)v6)
					break;
				v11 = (unsigned int)v12;
				if ((unsigned int)v12 >= v10)
					goto LABEL_9;
			}
			v13 = (__int64)&v9[4 * v11 + ((v10 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_9:
			v13 = 0i64;
		}
		v14 = &v25;
		if (v13)
			v14 = (float*)v13;
		result = *(unsigned int*)v14;
		v25 = *(float*)&result;
		if ((float)(a3 - *(float*)&result) != 0.0)
		{
			(*(void(__fastcall**)(__int64*, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 560))(
				a1,
				*a1,
				(unsigned int)dword_1409A3530[v6],
				0i64,
				0i64);
		LABEL_25:
			v25 = a3;
			result = sub_14084FB50(a1 + 10, v6, SLODWORD(a3));
		}
	}
LABEL_26:
	if (a4 != 0.0 || v5 != 0.0)
		return sub_14084FAC0(a1 + 16, v6, __SPAIR64__(LODWORD(v5), LODWORD(a4)));
	v22 = (unsigned __int8*)a1[16];
	if (v22)
	{
		v23 = *v22;
		while (1)
		{
			v24 = v7 + 1;
			if (v22[v24] == (_BYTE)v6)
				break;
			++v7;
			if ((unsigned int)v24 >= v23)
				return result;
		}
		result = (__int64)&v22[(v23 + 4) & 0xFFFFFFFC];
		if (result + 8i64 * v7)
			return sub_14084FAC0(a1 + 16, v6, __SPAIR64__(LODWORD(v5), LODWORD(a4)));
	}
	return result;
}
// 1409A3530: using guessed type int dword_1409A3530[];

