#include "../winhttp.h"

//----- (00000001408734A0) ----------------------------------------------------
__int64 __fastcall sub_1408734A0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // r14
	int v3; // ebp
	int v6; // eax
	int v7; // eax
	float v8; // xmm1_4
	float v9; // xmm0_4
	unsigned int v10; // eax
	float v11; // xmm1_4
	float v12; // xmm0_4
	__m128i v13; // xmm1
	int v14; // eax
	int v15; // eax
	__int64 result; // rax

	v2 = (_QWORD*)(a1 + 128);
	v3 = *(_DWORD*)(a1 + 188) - *(unsigned __int16*)(a1 + 90);
	sub_140872B20(a1 + 72, a1 + 128, *(_DWORD*)(a1 + 184), v3);
	if ((*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) & 0x10000) != 0)
	{
		v6 = *(_DWORD*)(a1 + 140);
		*(_DWORD*)(a1 + 208) += v3;
		if (v6 == 45 || v6 == 17)
		{
			v7 = *(_DWORD*)(a1 + 208);
			v8 = *(float*)(a1 + 200) * 7.0;
			*(_DWORD*)(a1 + 208) = 0;
			v9 = (float)v7;
			v10 = *(unsigned __int16*)(a1 + 146);
			v11 = v8 + v9;
			v12 = *(float*)(a1 + 204) * 7.0;
			*(float*)(a1 + 200) = v11 * 0.125;
			v13 = _mm_cvtsi32_si128(v10);
			v14 = *(_DWORD*)(a1 + 124);
			*(float*)(a1 + 204) = (float)(_mm_cvtepi32_ps(v13).m128_f32[0] + v12) * 0.125;
			*(_DWORD*)(a2 + 52) = v14;
			*(_DWORD*)(a2 + 40) = *(_DWORD*)(a1 + 184) + *(_DWORD*)(a1 + 112);
			*(_DWORD*)(a2 + 48) = *(_DWORD*)(a1 + 120);
			*(float*)(a2 + 44) = *(float*)(a1 + 200) / *(float*)(a1 + 204);
		}
	}
	*(_DWORD*)(a1 + 196) += v3;
	v15 = *(_DWORD*)(a1 + 196);
	*(_DWORD*)(a1 + 184) += v3;
	*(_DWORD*)(a1 + 192) = v15;
	if (!*(_WORD*)(a1 + 90))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 16i64))(*(_QWORD*)(a1 + 8));
		sub_1408683D0(a1 + 72);
		*(_QWORD*)(a1 + 72) = 0i64;
		*(_QWORD*)(a1 + 84) = 43i64;
		*(_DWORD*)(a1 + 112) = -1;
		*(_DWORD*)(a1 + 116) = 1065353216;
		*(_DWORD*)(a1 + 120) = -1;
		*(_DWORD*)(a1 + 124) = 1;
		*(_QWORD*)a2 = 0i64;
		*(_WORD*)(a2 + 18) = 0;
	}
	result = *(unsigned int*)(a1 + 140);
	if ((_DWORD)result == 45 || (_DWORD)result == 17)
	{
		*(_DWORD*)(a1 + 168) = *(_DWORD*)(a2 + 40);
		*(_DWORD*)(a1 + 172) = *(_DWORD*)(a2 + 44);
		*(_DWORD*)(a1 + 176) = *(_DWORD*)(a2 + 48);
		*(_DWORD*)(a1 + 180) = *(_DWORD*)(a2 + 52);
		*(_QWORD*)a2 = *v2;
		*(_QWORD*)(a2 + 8) = v2[1];
		*(_QWORD*)(a2 + 16) = v2[2];
		*(_QWORD*)(a2 + 24) = v2[3];
		*(_QWORD*)(a2 + 32) = v2[4];
		*(_QWORD*)(a2 + 40) = v2[5];
		*(_QWORD*)(a2 + 48) = v2[6];
		result = *(unsigned int*)(a1 + 140);
	}
	*(_DWORD*)(a2 + 56) = result;
	return result;
}

