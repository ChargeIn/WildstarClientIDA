#include "../winhttp.h"

//----- (00000001403E0630) ----------------------------------------------------
__int64 __fastcall sub_1403E0630(__int64 a1, __int64 a2, int a3)
{
	unsigned __int64 v4; // rbx
	__int64* v6; // r9
	__int64 v7; // r8
	__int64* v8; // rdx
	unsigned __int64 v9; // r10
	__int64 v10; // rcx
	float v11; // xmm1_4
	__int64 v12; // rcx
	float v13; // xmm1_4
	__int64 v14; // rcx
	float v15; // xmm1_4
	__int64 v16; // rcx
	float v17; // xmm1_4
	__int64 v18; // rcx
	float v19; // xmm1_4

	v4 = 0i64;
	v6 = sub_1403E0370(a2 != 0, a3);
	v7 = *v6;
	if (a2 >= 4)
	{
		v8 = (__int64*)(a1 + 16);
		v9 = ((unsigned __int64)(a2 - 4) >> 2) + 1;
		v4 = 4 * v9;
		do
		{
			v10 = *(v8 - 2);
			if (v10)
			{
				v11 = *((float*)v6 + 4);
				v7 += v6[1];
				if (v11 != 0.0)
				{
					if (*(_DWORD*)(v10 + 96) == 1)
						v7 += (unsigned int)(int)(float)((float)(int)*(_QWORD*)(v10 + 88) * v11);
					if (*(_DWORD*)(v10 + 120) == 1)
						v7 += (unsigned int)(int)(float)((float)(int)*(_QWORD*)(v10 + 112) * v11);
				}
			}
			v12 = *(v8 - 1);
			if (v12)
			{
				v13 = *((float*)v6 + 4);
				v7 += v6[1];
				if (v13 != 0.0)
				{
					if (*(_DWORD*)(v12 + 96) == 1)
						v7 += (unsigned int)(int)(float)((float)(int)*(_QWORD*)(v12 + 88) * v13);
					if (*(_DWORD*)(v12 + 120) == 1)
						v7 += (unsigned int)(int)(float)((float)(int)*(_QWORD*)(v12 + 112) * v13);
				}
			}
			v14 = *v8;
			if (*v8)
			{
				v15 = *((float*)v6 + 4);
				v7 += v6[1];
				if (v15 != 0.0)
				{
					if (*(_DWORD*)(v14 + 96) == 1)
						v7 += (unsigned int)(int)(float)((float)(int)*(_QWORD*)(v14 + 88) * v15);
					if (*(_DWORD*)(v14 + 120) == 1)
						v7 += (unsigned int)(int)(float)((float)(int)*(_QWORD*)(v14 + 112) * v15);
				}
			}
			v16 = v8[1];
			if (v16)
			{
				v17 = *((float*)v6 + 4);
				v7 += v6[1];
				if (v17 != 0.0)
				{
					if (*(_DWORD*)(v16 + 96) == 1)
						v7 += (unsigned int)(int)(float)((float)(int)*(_QWORD*)(v16 + 88) * v17);
					if (*(_DWORD*)(v16 + 120) == 1)
						v7 += (unsigned int)(int)(float)((float)(int)*(_QWORD*)(v16 + 112) * v17);
				}
			}
			v8 += 4;
			--v9;
		} while (v9);
	}
	for (; v4 < a2; ++v4)
	{
		v18 = *(_QWORD*)(a1 + 8 * v4);
		if (v18)
		{
			v19 = *((float*)v6 + 4);
			v7 += v6[1];
			if (v19 != 0.0)
			{
				if (*(_DWORD*)(v18 + 96) == 1)
					v7 += (unsigned int)(int)(float)((float)(int)*(_QWORD*)(v18 + 88) * v19);
				if (*(_DWORD*)(v18 + 120) == 1)
					v7 += (unsigned int)(int)(float)((float)(int)*(_QWORD*)(v18 + 112) * v19);
			}
		}
	}
	return v7;
}

