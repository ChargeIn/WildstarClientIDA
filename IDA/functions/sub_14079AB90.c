#include "../winhttp.h"

//----- (000000014079AB90) ----------------------------------------------------
__int64 __fastcall sub_14079AB90(__int64 a1, int a2, int a3)
{
	unsigned int v3; // r10d
	int v5; // r8d
	__int64 result; // rax
	__int64 v7; // rbx
	__int64 v8; // r8
	int v9; // edi
	int v10; // esi
	__int64 v11; // rdx
	int v12; // r10d
	int v13; // r11d
	float v14; // xmm0_4
	float v15; // xmm5_4
	float v16; // xmm3_4
	float v17; // xmm4_4
	float v18; // xmm2_4
	float i; // xmm4_4
	__int64 v20; // rax
	float v21; // xmm1_4
	float v22; // xmm1_4
	float v23; // xmm2_4

	v3 = *(_DWORD*)a1;
	if (*(_DWORD*)a1)
	{
		v5 = *(_DWORD*)(a1 + 4);
		result = (unsigned int)dword_140C3A004 >> 1;
		if (a2 - *(_DWORD*)(a1 + 8i64 * (((_BYTE)v5 + (_BYTE)v3 - 1) & 0xF) + 16) - (int)result >= 0)
		{
			if (v3 >= 0x10)
				*(_DWORD*)(a1 + 4) = ((_BYTE)v5 + 1) & 0xF;
			else
				*(_DWORD*)a1 = v3 + 1;
			v7 = (*(_DWORD*)(a1 + 4) + *(_DWORD*)a1 - 1) & 0xF;
			*(_DWORD*)(a1 + 8 * v7 + 20) = a3;
			*(_DWORD*)(a1 + 8 * v7 + 16) = a2;
			v8 = *(unsigned int*)(a1 + 4);
			v9 = *(_DWORD*)(a1 + 8 * v8 + 16);
			v10 = *(_DWORD*)(a1 + 8 * v8 + 20);
			LODWORD(v11) = *(_DWORD*)(a1 + 4);
			v12 = 0;
			v13 = 0;
			if ((_DWORD)v8 != (_DWORD)v7)
			{
				do
				{
					v11 = ((_BYTE)v11 + 1) & 0xF;
					v12 += *(_DWORD*)(a1 + 8 * v11 + 16) - v9;
					v13 += *(_DWORD*)(a1 + 8 * v11 + 20) - v10;
				} while ((_DWORD)v11 != (_DWORD)v7);
			}
			v14 = (float)*(int*)a1;
			v15 = (float)v12 * (float)(1.0 / v14);
			v16 = (float)v13 * (float)(1.0 / v14);
			result = 0i64;
			v17 = (float)0 - v15;
			v18 = (float)((float)0 - v16) * v17;
			for (i = v17 * v17; (_DWORD)v8 != (_DWORD)v7; v18 = v18 + (float)((float)((float)(int)result - v16) * v22))
			{
				v20 = ((_BYTE)v8 + 1) & 0xF;
				LODWORD(v8) = v20;
				v21 = (float)(*(_DWORD*)(a1 + 8 * v20 + 16) - v9);
				result = (unsigned int)(*(_DWORD*)(a1 + 8 * v20 + 20) - v10);
				v22 = v21 - v15;
				i = i + (float)(v22 * v22);
			}
			v23 = v18 / i;
			*(float*)(a1 + 8) = v23;
			*(float*)(a1 + 12) = (float)(v16 - (float)(v23 * v15)) + 0.5;
		}
	}
	else
	{
		*(_QWORD*)a1 = 1i64;
		*(_QWORD*)(a1 + 8) = 1065353216i64;
		*(_DWORD*)(a1 + 16) = a2;
		*(_DWORD*)(a1 + 20) = a3;
	}
	return result;
}
// 140C3A004: using guessed type int dword_140C3A004;

