#include "../winhttp.h"

//----- (0000000140854DF0) ----------------------------------------------------
__int64 __fastcall sub_140854DF0(_QWORD* a1, __int64 a2, int a3, float a4, int a5, int a6, int a7)
{
	__int64* v8; // rcx
	__int64 v9; // rbx
	unsigned __int8* v10; // r8
	__int64 v11; // rsi
	float v12; // xmm6_4
	unsigned int v14; // r10d
	int v15; // r9d
	__int64 v16; // rdx
	__int64 v17; // rdi
	__int64 result; // rax
	__int64* v19; // r11
	unsigned __int8* v20; // r8
	unsigned int v21; // r9d
	__int64 v22; // rcx
	__int64 v23; // rdx
	int* v24; // rax
	float v25; // xmm0_4
	float v26; // xmm2_4
	unsigned __int8* v27; // r8
	unsigned int v28; // r9d
	__int64 v29; // rcx
	__int64 v30; // rdx
	__int64 v31; // rdx
	int* v32; // rax
	char v33; // al
	__int64 v34[2]; // [rsp+40h] [rbp-68h] BYREF
	float v35; // [rsp+50h] [rbp-58h]
	float v36; // [rsp+54h] [rbp-54h]
	int v37; // [rsp+58h] [rbp-50h]
	int v38; // [rsp+5Ch] [rbp-4Ch]
	char v39; // [rsp+60h] [rbp-48h]
	char v40; // [rsp+61h] [rbp-47h]
	int v41; // [rsp+B8h] [rbp+10h] BYREF

	v8 = (__int64*)(a2 + 24);
	v9 = a3;
	v10 = *(unsigned __int8**)(a2 + 24);
	v11 = 0i64;
	v12 = a4;
	if (!v10)
		goto LABEL_7;
	v14 = *v10;
	v15 = 0;
	while (1)
	{
		v16 = (unsigned int)(v15 + 1);
		if (v10[v16] == (_BYTE)v9)
			break;
		++v15;
		if ((unsigned int)v16 >= v14)
			goto LABEL_7;
	}
	v17 = (__int64)&v10[16 * v15 + ((v14 + 4) & 0xFFFFFFFC)];
	if (!v17)
	{
	LABEL_7:
		result = sub_140829BE0(v8, v9);
		v17 = result;
		if (!result)
			return result;
		*(_DWORD*)result = 0;
		*(_QWORD*)(result + 8) = 0i64;
	}
	v19 = *(__int64**)(v17 + 8);
	if (v19)
	{
		if (a5 == 1)
		{
			v20 = (unsigned __int8*)a1[10];
			v41 = dword_140C11000[v9];
			if (v20)
			{
				v21 = *v20;
				v22 = 0i64;
				while (1)
				{
					v23 = (unsigned int)(v22 + 1);
					if (v20[v23] == (_BYTE)v9)
						break;
					v22 = (unsigned int)v23;
					if ((unsigned int)v23 >= v21)
						goto LABEL_17;
				}
				v11 = (__int64)&v20[4 * v22 + ((v21 + 4) & 0xFFFFFFFC)];
			}
		LABEL_17:
			v24 = &v41;
			if (v11)
				v24 = (int*)v11;
			v41 = *v24;
			v12 = a4 - *(float*)&v41;
		}
		return sub_14083AB80(qword_140C61B70, v19, v9, v12, a7, a6, a5);
	}
	else
	{
		v25 = *(float*)v17;
		v26 = 0.0;
		if (a5 == 1)
		{
			v27 = (unsigned __int8*)a1[10];
			v41 = dword_140C11000[v9];
			if (v27)
			{
				v28 = *v27;
				v29 = 0i64;
				while (1)
				{
					v30 = (unsigned int)(v29 + 1);
					if (v27[v30] == (_BYTE)v9)
						break;
					v29 = (unsigned int)v30;
					if ((unsigned int)v30 >= v28)
						goto LABEL_28;
				}
				v31 = (__int64)&v27[4 * v29 + ((v28 + 4) & 0xFFFFFFFC)];
			}
			else
			{
			LABEL_28:
				v31 = 0i64;
			}
			v32 = &v41;
			if (v31)
				v32 = (int*)v31;
			v41 = *v32;
			v26 = a4 - *(float*)&v41;
		}
		else if (a5 == 2)
		{
			v26 = v25 + a4;
		}
		if (v25 == v26 || !a7)
		{
			*(float*)v17 = v26;
			return (*(__int64(__fastcall**)(_QWORD*, _QWORD, _QWORD, _QWORD, _QWORD))(*a1 + 176i64))(
				a1,
				(unsigned int)dword_1409A3530[v9],
				*a1,
				*(_QWORD*)(a2 + 16),
				0i64);
		}
		else
		{
			v37 = a7;
			v35 = v25;
			v36 = v26;
			v38 = a6;
			v33 = byte_1409A35E8[v9];
			v34[0] = a2;
			v39 = v33;
			v34[1] = v9;
			v40 = 1;
			result = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)v34, 1, 0);
			*(_QWORD*)(v17 + 8) = result;
		}
	}
	return result;
}
// 1409A3530: using guessed type int dword_1409A3530[];
// 1409A35E8: using guessed type _BYTE byte_1409A35E8[48];
// 140C11000: using guessed type int dword_140C11000[5];
// 140C61B70: using guessed type __int64 qword_140C61B70;

