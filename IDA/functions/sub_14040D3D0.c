#include "../winhttp.h"

//----- (000000014040D3D0) ----------------------------------------------------
__int64 __fastcall sub_14040D3D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 result; // rax
	float v10; // xmm3_4
	float v11; // xmm2_4
	float* v12; // rcx
	unsigned int v13; // r9d
	_DWORD* v14; // r10
	__int64 v15; // r12
	float v16; // xmm1_4
	float v17; // xmm0_4
	int v18; // edx
	int v19; // edx
	int v20; // ecx

	result = sub_14040D5D0(a1, a2, a3);
	if (!(_DWORD)result)
	{
		result = sub_14040D6B0(a1, a2, a3);
		if (!(_DWORD)result)
		{
			*(_QWORD*)(a1 + 320) = 0i64;
			*(_QWORD*)(a1 + 328) = 0i64;
			v10 = 0.0;
			v11 = 0.0;
			v12 = (float*)(a1 + 340);
			*(_DWORD*)(a1 + 336) = 0;
			*(_QWORD*)(a1 + 340) = 0i64;
			*(_QWORD*)(a1 + 348) = 0i64;
			v13 = 0;
			v14 = (_DWORD*)(a1 + 280);
			v15 = -340 - a1;
			*(_DWORD*)(a1 + 356) = 0;
			do
			{
				v16 = 0.0;
				v17 = *(float*)((char*)v12 + v15 + *(_QWORD*)(a1 + 264) + 4) * *(float*)(a2 + 24);
				*v12 = 0.0;
				*(v12 - 5) = v17;
				if (*v14 == 1)
				{
					*v12 = v17;
					v16 = v17;
					if (*(_DWORD*)(a1 + 72) > v13)
					{
						v16 = v17 * *(float*)((char*)v12 + v15 + *(_QWORD*)(a1 + 80));
						*v12 = v16;
					}
				}
				v10 = v10 + v17;
				v11 = v11 + v16;
				if (a4)
				{
					v18 = LODWORD(v17);
					if (v17 < 0.0)
						v18 = 0x80000000 - LODWORD(v17);
					if ((int)abs32(v18) > 84)
						*(float*)((char*)v12 + a4 - a1 - 340) = v17;
				}
				if (a5)
				{
					v19 = *(_DWORD*)v12;
					if (*(int*)v12 < 0)
						v19 = 0x80000000 - v19;
					if ((int)abs32(v19) > 84)
						*(float*)((char*)v12 + a5 - a1 - 340) = *v12;
				}
				++v13;
				v14 += 2;
				++v12;
			} while (v13 < 5);
			v20 = LODWORD(v10);
			if (v10 < 0.0)
				v20 = 0x80000000 - LODWORD(v10);
			result = 0i64;
			if ((int)abs32(v20) > 84)
				*(float*)(a2 + 28) = v11 / v10;
			else
				*(_DWORD*)(a2 + 28) = 1065353216;
		}
	}
	return result;
}

