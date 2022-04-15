#include "../winhttp.h"

//----- (000000014089BD60) ----------------------------------------------------
__int64 __fastcall sub_14089BD60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5)
{
	int v6; // ebx
	__int16 v7; // ax
	float v8; // xmm1_4
	float v9; // xmm0_4
	float v10; // xmm1_4

	*(_QWORD*)(a1 + 40) = a4;
	a5[1] ^= (a5[1] ^ *(_DWORD*)(a4 + 20)) & 0x3FFFF;
	switch (a5[1] & 0x3FFFF)
	{
	case 3:
	case 4:
	case 7:
	case 8:
	case 0xB:
	case 0xC:
	case 0xF:
	case 0x33:
	case 0x37:
	case 0x3B:
	case 0x3F:
		break;
	default:
		a5[1] = a5[1] & 0xFFFC0000 | 4;
		break;
	}
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(*(_QWORD*)(a1 + 40) + 12i64);
	v6 = *a5;
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 144i64))(a3);
	v8 = *(float*)(*(_QWORD*)(a1 + 40) + 16i64);
	*(_DWORD*)(a1 + 16) = v6;
	*(_WORD*)(a1 + 20) = v7;
	*(_DWORD*)(a1 + 12) = 0;
	*(_DWORD*)(a1 + 8) = ((int)(float)((float)v6 * v8) + 3) & 0xFFFFFFFC;
	v9 = (float)*a5;
	v10 = *(float*)(*(_QWORD*)(a1 + 40) + 8i64);
	*(float*)(a1 + 32) = v9;
	*(_DWORD*)(a1 + 24) = 0;
	*(float*)(a1 + 28) = (float)(v10 * 6.2831855) / v9;
	*(_BYTE*)(*(_QWORD*)(a1 + 40) + 24i64) = 0;
	return 1i64;
}

