#include "../winhttp.h"

//----- (000000014084AB10) ----------------------------------------------------
void __fastcall sub_14084AB10(int a1, char a2, __int64 a3, __int64* a4)
{
	float v7; // xmm8_4
	__m128 v8; // xmm0
	float v9; // xmm7_4
	float v10; // xmm1_4
	int v11; // eax
	__int64 v12; // rbx
	float v13; // xmm12_4
	__int64 v14; // r15
	__int64 v15; // rbx
	unsigned __int8 v16; // al
	unsigned __int8 i; // cl
	__int64 v18; // rdi
	__int64 v19; // rsi
	int v20; // ecx
	__int64 v21; // rdi
	__m128 v22; // xmm6
	float v23; // xmm0_4
	float v24; // xmm0_4
	_DWORD v25[4]; // [rsp+40h] [rbp-A8h] BYREF
	float v26; // [rsp+F0h] [rbp+8h] BYREF
	unsigned int v27; // [rsp+F8h] [rbp+10h] BYREF
	float v28; // [rsp+100h] [rbp+18h] BYREF

	if (a2)
		v7 = *(float*)(*(_QWORD*)(a3 + 176) + 96i64);
	else
		v7 = 1.0;
	v8 = sub_14085EA60(a3);
	v8.m128_f32[0] = v8.m128_f32[0] * 0.050000001;
	if (v8.m128_f32[0] >= -37.0)
	{
		if ((dword_140C61BFC & 1) != 0)
		{
			v10 = *(float*)&dword_140C61BF8;
		}
		else
		{
			v10 = 27866352.0;
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC |= 1u;
		}
		v11 = (int)(float)((float)(v8.m128_f32[0] * v10) + 1065353200.0);
		v27 = (v11 & 0x7FFFFF) + 1065353216;
		LODWORD(v26) = v11 & 0xFF800000;
		v8 = (__m128)v27;
		v9 = (float)((float)((float)((float)(*(float*)&v27 * 0.32518977) + 0.020805772) * *(float*)&v27) + 0.65304345)
			* COERCE_FLOAT(v11 & 0xFF800000);
	}
	else
	{
		v9 = 0.0;
	}
	v12 = *(_QWORD*)(a3 + 88);
	v13 = *(float*)(v12 + 16);
	if (!*(_QWORD*)(v12 + 80))
		*(_QWORD*)(v12 + 80) = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 9552), *(_DWORD*)(v12 + 12));
	v14 = *(_QWORD*)(v12 + 80);
	v15 = *a4;
	if (a1 == 1)
	{
		do
		{
			v16 = *(_BYTE*)(v15 + 17);
			for (i = 0; (v16 & 1) == 0; ++i)
				v16 >>= 1;
			v18 = i;
			sub_14084AE70(v14, (float*)v15, v13, (float*)(v15 + 32), (int*)&v27, (int*)&v26, (int*)&v28);
			v19 = (unsigned int)v18;
			v20 = *(unsigned __int8*)(v18 + *(_QWORD*)(a3 + 176) + 88);
			v21 = qword_140C61B90;
			if (*(_BYTE*)(qword_140C61B90 + 2))
			{
				v8.m128_f32[0] = sub_140835CA0(
					(_DWORD*)(qword_140C61B90 + 40),
					(float)((float)v20 * 0.0039215689) * 100.0,
					0,
					v25);
				v22 = v8;
			}
			else
			{
				v22 = (__m128)0x3F800000u;
			}
			if (*(_BYTE*)v21)
				v23 = sub_140835CA0(
					(_DWORD*)(v21 + 8),
					(float)((float)*(unsigned __int8*)(v19 + *(_QWORD*)(a3 + 176) + 80) * 0.0039215689) * 100.0,
					0,
					v25)
				* v22.m128_f32[0];
			else
				v23 = v22.m128_f32[0];
			v15 += 36i64;
			*(float*)(v15 - 16) = (float)((float)(v23 * *(float*)&v27) * v7) * v9;
			v8 = v22;
			v8.m128_f32[0] = v22.m128_f32[0] * v26;
			*(float*)(v15 - 8) = v22.m128_f32[0] * v28;
			*(_DWORD*)(v15 - 12) = v8.m128_i32[0];
		} while (v15 != a4[1]);
	}
	else
	{
		do
		{
			sub_14084AE70(v14, (float*)v15, v13, (float*)(v15 + 32), (int*)&v27, (int*)&v26, (int*)&v28);
			v15 += 36i64;
			v24 = *(float*)&v27 * v7;
			*(float*)(v15 - 8) = v28;
			*(float*)(v15 - 16) = v24 * v9;
			*(float*)(v15 - 12) = v26;
		} while (v15 != a4[1]);
	}
}
// 140C61B90: using guessed type __int64 qword_140C61B90;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;
// 14084AB10: using guessed type _DWORD var_A8[4];

