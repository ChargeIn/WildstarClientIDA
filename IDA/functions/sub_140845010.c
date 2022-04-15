#include "../winhttp.h"

//----- (0000000140845010) ----------------------------------------------------
__int64 __fastcall sub_140845010(__int64 a1, __int64* a2, unsigned __int64 a3, float* a4)
{
	__int64 v8; // rax
	bool v9; // zf
	float v10; // xmm0_4
	float v11; // xmm0_4
	int v12; // xmm1_4
	__int64 v14; // [rsp+40h] [rbp+8h] BYREF

	*a4 = 0.0;
	v14 = *sub_140852D50((__int64)a2, &v14, a3);
	*(_QWORD*)(a1 + 8) = v14;
	v8 = *a2;
	*(_DWORD*)a1 = v14;
	if ((*(unsigned __int8(__fastcall**)(__int64*, float*))(v8 + 240))(a2, a4))
	{
		v9 = *(float*)(a1 + 12) == 0.0;
		*a4 = *(float*)(a3 + 100) * *a4;
		if (v9)
			return a1;
		v10 = sub_140843DB0(a3 + 8).m128_f32[0];
		if (v10 >= *a4)
			v11 = *(float*)(a1 + 8) + *(float*)(a1 + 12);
		else
			v11 = (float)((float)(v10 / *a4) * *(float*)(a1 + 12)) + *(float*)(a1 + 8);
		if (v11 >= 0.0)
		{
			v12 = 1120403456;
			if (v11 > 100.0)
			{
			LABEL_11:
				*(_DWORD*)a1 = v12;
				return a1;
			}
			if (v11 >= 0.0)
			{
				v12 = LODWORD(v11);
				goto LABEL_11;
			}
		}
		v12 = 0;
		goto LABEL_11;
	}
	return a1;
}

