#include "../winhttp.h"

//----- (00000001408F8D80) ----------------------------------------------------
__int64 __fastcall sub_1408F8D80(__int64 a1, float** a2)
{
	float* v2; // rsi
	__int64 v4; // rdx
	int v5; // eax
	unsigned int v6; // ebp
	float* v7; // rsi
	int v9; // ebx
	__int64 v10; // rax
	float v12; // xmm0_4
	__int64 v13; // rbx
	double v14; // xmm0_8

	v2 = *a2;
	v4 = *(_QWORD*)(a1 + 176);
	v5 = *(__int16*)v2;
	v6 = 0;
	v7 = v2 + 1;
	*(_DWORD*)(a1 + 100) = v5;
	v9 = *((unsigned __int16*)v7 - 1);
	if (v4 && *(_DWORD*)(a1 + 172) != *((unsigned __int16*)v7 - 1))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 160) + 16i64))(*(_QWORD*)(a1 + 160));
		*(_QWORD*)(a1 + 176) = 0i64;
		*(_DWORD*)(a1 + 172) = 0;
	}
	if (v9)
	{
		*(_DWORD*)(a1 + 172) = v9;
		if (!*(_QWORD*)(a1 + 176))
		{
			v10 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 160) + 8i64))(
				*(_QWORD*)(a1 + 160),
				(unsigned int)(12 * v9));
			*(_QWORD*)(a1 + 176) = v10;
			if (!v10)
			{
				*(_DWORD*)(a1 + 172) = 0;
				return 52i64;
			}
		}
		if (*(_DWORD*)(a1 + 172))
		{
			do
			{
				v12 = *v7;
				v7 += 3;
				v13 = 3i64 * v6;
				*(float*)(*(_QWORD*)(a1 + 176) + 4 * v13) = v12;
				*(float*)(*(_QWORD*)(a1 + 176) + 4 * v13 + 4) = *(v7 - 2);
				v14 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), *(v7 - 1) * 0.050000001);
				++v6;
				*(_DWORD*)(*(_QWORD*)(a1 + 176) + 4 * v13 + 8) = LODWORD(v14);
			} while (v6 < *(_DWORD*)(a1 + 172));
		}
	}
	*a2 = v7;
	return 1i64;
}

