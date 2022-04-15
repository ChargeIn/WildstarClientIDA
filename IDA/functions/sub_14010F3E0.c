#include "../winhttp.h"

//----- (000000014010F3E0) ----------------------------------------------------
__int64 __fastcall sub_14010F3E0(__int64 a1, float* a2, float* a3)
{
	float* v6; // rax
	float v7; // xmm1_4
	float v8; // xmm0_4
	__int64 result; // rax
	__int64* v10; // rbx
	__int64 v11; // rdi
	__int64 v12; // rax
	float v13; // xmm1_4
	__int64* v14; // rbx
	__int64 v15; // rdi
	__int64 v16; // rax
	float v17; // xmm0_4
	float v18; // [rsp+30h] [rbp+8h] BYREF

	v6 = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	v7 = a3[4];
	*a3 = *a3 - *(float*)(a1 + 1068);
	a3[4] = v7 - *(float*)(a1 + 1068);
	if ((*(_BYTE*)(a1 + 704) & 4) != 0)
	{
		v8 = (float)((float)((float)(a2[5] - a2[1]) - *v6) * 0.5) + a3[1];
		a3[1] = v8;
		a3[5] = v8 + *v6;
	}
	result = *(unsigned int*)(a1 + 704);
	if ((result & 2) != 0)
	{
		v10 = *(__int64**)(a1 + 1080);
		v18 = 0.0;
		v11 = *v10;
		v12 = (*(__int64(__fastcall**)(__int64*))(*v10 + 72))(v10);
		result = (*(__int64(__fastcall**)(__int64*, __int64, float*))(v11 + 168))(v10, v12, &v18);
		v13 = (float)(a2[4] - *a2) - v18;
	}
	else
	{
		if ((result & 1) == 0)
			return result;
		v14 = *(__int64**)(a1 + 1080);
		v18 = 0.0;
		v15 = *v14;
		v16 = (*(__int64(__fastcall**)(__int64*))(*v14 + 72))(v14);
		result = (*(__int64(__fastcall**)(__int64*, __int64, float*))(v15 + 168))(v14, v16, &v18);
		v13 = (float)((float)(a2[4] - *a2) - v18) * 0.5;
	}
	v17 = v13 + *a3;
	a3[4] = v13 + a3[4];
	*a3 = v17;
	return result;
}

