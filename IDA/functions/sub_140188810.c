#include "../winhttp.h"

//----- (0000000140188810) ----------------------------------------------------
void __fastcall sub_140188810(__int64 a1, __int64 a2, __int64 a3)
{
	float v3; // xmm1_4
	float v4; // xmm6_4
	int v6; // ebx
	__int64 v7; // rdi
	__int64 v8; // rax
	__int128 v9; // xmm1
	float v10; // xmm0_4
	__int64 v11; // rax
	__int64 v12; // rax
	int v13; // ebx
	__int64 v14; // rdi
	__int64 v15; // rax
	__int128 v16; // xmm1
	float v17; // xmm0_4
	__int64 v18; // rax
	__int64 v19; // rax
	int v20; // ebx
	__int64 v21; // rdi
	__int64 v22; // rax
	__int128 v23; // xmm1
	float v24; // xmm0_4
	__int64 v25; // rax
	__int64 v26; // rax

	v4 = v3;
	v6 = ((__int64)(*(_QWORD*)(a1 + 128) - *(_QWORD*)(a1 + 120)) >> 5) - 1;
	if (v6 >= 0)
	{
		v7 = 32i64 * v6;
		do
		{
			v8 = sub_140188E00(a1 + 104, a2, a3);
			a3 = (unsigned int)v6;
			a2 = *(_QWORD*)(v8 + 8);
			if ((unsigned int)v6 < (unsigned __int64)((*(_QWORD*)(v8 + 16) - a2) >> 5))
			{
				v9 = *(_OWORD*)(v7 + a2);
				v10 = *(float*)(v7 + a2 + 16) * v4;
				if ((unsigned int)v6 < (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 128) - *(_QWORD*)(a1 + 120)) >> 5))
				{
					v11 = *(_QWORD*)(a1 + 128);
					*(_DWORD*)(a1 + 108) = 0;
					*(_QWORD*)(a1 + 144) = v11;
					v12 = *(_QWORD*)(a1 + 120);
					*(_OWORD*)(v7 + v12) = v9;
					*(float*)(v7 + v12 + 16) = v10;
				}
			}
			v7 -= 32i64;
			--v6;
		} while (v6 >= 0);
	}
	v13 = ((__int64)(*(_QWORD*)(a1 + 72) - *(_QWORD*)(a1 + 64)) >> 5) - 1;
	if (v13 >= 0)
	{
		v14 = 32i64 * v13;
		do
		{
			v15 = sub_140188E00(a1 + 48, a2, a3);
			a3 = (unsigned int)v13;
			a2 = *(_QWORD*)(v15 + 8);
			if ((unsigned int)v13 < (unsigned __int64)((*(_QWORD*)(v15 + 16) - a2) >> 5))
			{
				v16 = *(_OWORD*)(a2 + v14);
				v17 = *(float*)(a2 + v14 + 16) * v4;
				if ((unsigned int)v13 < (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 72) - *(_QWORD*)(a1 + 64)) >> 5))
				{
					v18 = *(_QWORD*)(a1 + 72);
					*(_DWORD*)(a1 + 52) = 0;
					*(_QWORD*)(a1 + 88) = v18;
					v19 = *(_QWORD*)(a1 + 64);
					*(_OWORD*)(v14 + v19) = v16;
					*(float*)(v14 + v19 + 16) = v17;
				}
			}
			v14 -= 32i64;
			--v13;
		} while (v13 >= 0);
	}
	v20 = ((__int64)(*(_QWORD*)(a1 + 184) - *(_QWORD*)(a1 + 176)) >> 5) - 1;
	if (v20 >= 0)
	{
		v21 = 32i64 * v20;
		do
		{
			v22 = sub_140188E00(a1 + 160, a2, a3);
			a3 = (unsigned int)v20;
			a2 = *(_QWORD*)(v22 + 8);
			if ((unsigned int)v20 < (unsigned __int64)((*(_QWORD*)(v22 + 16) - a2) >> 5))
			{
				v23 = *(_OWORD*)(a2 + v21);
				v24 = *(float*)(a2 + v21 + 16) * v4;
				if ((unsigned int)v20 < (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 184) - *(_QWORD*)(a1 + 176)) >> 5))
				{
					v25 = *(_QWORD*)(a1 + 184);
					*(_DWORD*)(a1 + 164) = 0;
					*(_QWORD*)(a1 + 200) = v25;
					v26 = *(_QWORD*)(a1 + 176);
					*(_OWORD*)(v21 + v26) = v23;
					*(float*)(v21 + v26 + 16) = v24;
				}
			}
			v21 -= 32i64;
			--v20;
		} while (v20 >= 0);
	}
}
// 14018883D: variable 'v3' is possibly undefined

