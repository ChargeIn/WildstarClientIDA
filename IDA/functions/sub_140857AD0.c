#include "../winhttp.h"

//----- (0000000140857AD0) ----------------------------------------------------
__int64 __fastcall sub_140857AD0(__int64 a1, __int64 a2)
{
	int v3; // edx
	unsigned int v4; // ebp
	__int64 v5; // rdi
	__int64 v6; // rbx
	__int64 v7; // r14
	unsigned __int8* v8; // rbx
	unsigned int v9; // ecx
	unsigned __int8* v10; // rbx
	__int64 v11; // rsi
	__int64 v12; // rdi
	__int64 v13; // rax
	__int64 v14; // r15
	_DWORD* v15; // rcx
	int v16; // esi
	int v17; // r14d
	_DWORD* i; // rax
	_DWORD* v19; // rax
	unsigned __int64 v20; // rbp
	_DWORD* v21; // rcx
	unsigned int v22; // eax
	unsigned __int8* v23; // rbx
	__int64 v24; // rdi
	__int64 v25; // rbp
	int v26; // r15d
	int v27; // r12d
	int v28; // r13d
	__int64 v29; // rsi
	int* v30; // rbx
	unsigned __int64 v31; // r14
	__int64 v32; // rax
	_DWORD* v33; // rcx
	int v36; // [rsp+68h] [rbp+10h]
	unsigned int v37; // [rsp+70h] [rbp+18h]

	v3 = *(_DWORD*)(a2 + 4);
	v4 = 1;
	v5 = *(unsigned int*)(a2 + 8);
	v6 = a2 + 12;
	v7 = a1;
	v37 = 1;
	if (v3 != -1)
	{
		v4 = sub_1408579A0(a1, v3, v6, v5);
		v37 = v4;
	}
	v8 = (unsigned __int8*)(v5 + v6);
	if (v4 != 1)
		return v4;
	v9 = *v8;
	v10 = v8 + 1;
	v11 = v9;
	v12 = v7 + 48;
	if ((_BYTE)v9)
	{
		v13 = sub_1408819F0(dword_140C10F20, 8i64 * v9);
		*(_QWORD*)v12 = v13;
		*(_QWORD*)(v7 + 56) = v13;
		if (v13)
			*(_DWORD*)(v7 + 64) = v11;
	}
	if ((_DWORD)v11)
	{
		v14 = v11;
		do
		{
			v15 = *(_DWORD**)(v12 + 8);
			v16 = *v10;
			v17 = *(_DWORD*)(v10 + 1);
			v10 += 5;
			for (i = *(_DWORD**)v12; i != v15; i += 2)
			{
				if (*i == v16)
					break;
			}
			if (i == v15 || (v19 = i + 1) == 0i64)
			{
				v20 = (unsigned int)(((__int64)v15 - *(_QWORD*)v12) >> 3);
				if ((v20 < *(unsigned int*)(v12 + 16) || sub_140892EF0(v12, 8)) && v20 < *(unsigned int*)(v12 + 16))
				{
					v21 = *(_DWORD**)(v12 + 8);
					*(_QWORD*)(v12 + 8) = v21 + 2;
					if (v21)
					{
						*v21 = v16;
						v21[1] = v17;
					}
				}
			}
			else
			{
				*v19 = v17;
			}
			--v14;
		} while (v14);
		v4 = v37;
		v7 = a1;
	}
	v22 = *(unsigned __int16*)v10;
	v23 = v10 + 2;
	if (!v22)
		return v4;
	v24 = v7 + 72;
	v25 = v22;
	do
	{
		v26 = *((_DWORD*)v23 + 1);
		v27 = *((_DWORD*)v23 + 2);
		v28 = *(_DWORD*)v23;
		v29 = *(unsigned __int16*)(v23 + 13);
		v36 = v23[12];
		v30 = (int*)(v23 + 15);
		sub_140857DB0(v7, v26, v27, 0);
		v31 = (unsigned int)((__int64)(*(_QWORD*)(v24 + 8) - *(_QWORD*)v24) >> 5);
		if ((v31 < *(unsigned int*)(v24 + 16) || sub_140857780(v24, 2)) && v31 < *(unsigned int*)(v24 + 16))
		{
			v32 = *(_QWORD*)(v24 + 8);
			if (v32)
			{
				*(_QWORD*)(v32 + 16) = 0i64;
				*(_QWORD*)(v32 + 24) = 0i64;
			}
			v33 = *(_DWORD**)(v24 + 8);
			*(_QWORD*)(v24 + 8) = v33 + 8;
			if (v33)
			{
				v33[1] = v27;
				*v33 = v28;
				v33[2] = v26;
				if (v30)
				{
					if ((_DWORD)v29)
						sub_140837E30((__int64)(v33 + 4), v30, v29, v36);
				}
			}
		}
		v7 = a1;
		v23 = (unsigned __int8*)&v30[3 * v29];
		--v25;
	} while (v25);
	return v37;
}
// 140C10F20: using guessed type int dword_140C10F20;

