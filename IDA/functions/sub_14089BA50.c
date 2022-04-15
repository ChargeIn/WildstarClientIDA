#include "../winhttp.h"

//----- (000000014089BA50) ----------------------------------------------------
__int64 __fastcall sub_14089BA50(__int64 a1, int* a2)
{
	int v2; // r10d
	unsigned int v3; // ebx
	unsigned int v4; // r9d
	__int16 v6; // dx
	unsigned int v8; // r10d
	unsigned int v9; // r11d
	float v10; // xmm1_4
	unsigned int v11; // eax
	unsigned int v12; // ecx
	int v13; // ecx
	__int64 result; // rax

	v2 = *a2;
	v3 = *(_DWORD*)(a1 + 12);
	v4 = 0;
	v6 = *(_WORD*)(a1 + 24);
	v8 = v3 * v2;
	v9 = 45;
	if (v6)
	{
		v10 = *(float*)(*(_QWORD*)(a1 + 32) + 8i64) + *(float*)(a1 + 20);
		if (v10 < 0.001)
			v10 = 0.001;
		v11 = *(_DWORD*)(a1 + 16);
		v12 = v3 * v6 * (int)(float)((float)*(int*)(a1 + 8) * v10);
		if (v11 < v12)
		{
			v4 = v12 - v11;
			if (v8 < v12 - v11)
				v4 = v8;
			*(_DWORD*)(a1 + 16) = v11 + v4;
			v13 = 45;
			if (v4 < v8)
				v13 = 17;
			v9 = v13;
		}
		else
		{
			v9 = 17;
		}
	}
	else
	{
		v4 = v8;
	}
	result = v9;
	*a2 = (unsigned __int16)(v4 / v3);
	return result;
}

