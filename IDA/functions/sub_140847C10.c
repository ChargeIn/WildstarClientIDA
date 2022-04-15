#include "../winhttp.h"

//----- (0000000140847C10) ----------------------------------------------------
char __fastcall sub_140847C10(__int64 a1)
{
	__int64 v2; // rbx
	char v3; // r14
	double v4; // xmm0_8
	float v5; // xmm8_4
	float v6; // xmm6_4
	float v7; // xmm0_4
	float v8; // xmm1_4
	float v9; // xmm1_4
	unsigned __int8 v10; // al
	__int64 v11; // rdx
	float v12; // xmm7_4
	float v13; // xmm0_4
	int v14; // esi
	__int64 v16[12]; // [rsp+30h] [rbp-A8h] BYREF

	v2 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
	if ((*(_BYTE*)(v2 + 380) & 0x20) == 0)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 120i64))(v2);
	if ((*(_BYTE*)(v2 + 383) & 0x10) != 0)
	{
		*(_QWORD*)(a1 + 48) = *(_QWORD*)(a1 + 40);
		sub_1408606A0(v2);
	}
	else
	{
		v3 = sub_14085EF50(v2);
		*(_BYTE*)(a1 + 92) = v3;
		v4 = sub_14085EB50(v2);
		v5 = 27866352.0;
		v6 = 0.0;
		v7 = (float)(*(float*)&v4 + *(float*)(v2 + 200)) * 0.050000001;
		if (v7 >= -37.0)
		{
			if ((dword_140C61BFC & 1) != 0)
			{
				v9 = *(float*)&dword_140C61BF8;
			}
			else
			{
				v9 = 27866352.0;
				dword_140C61BFC |= 1u;
				dword_140C61BF8 = 1272224376;
			}
			v8 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v9 * v7) + 1065353200.0) & 0x7FFFFF) + 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(((int)(float)((float)(v9 * v7) + 1065353200.0) & 0x7FFFFF) + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v9 * v7) + 1065353200.0) & 0xFF800000);
		}
		else
		{
			v8 = 0.0;
		}
		v10 = *(_BYTE*)(v2 + 379);
		*(float*)(a1 + 64) = v8 * *(float*)(v2 + 204);
		if ((v10 & 3) != 0)
		{
			v14 = (v10 >> 2) & 3;
			if ((unsigned int)sub_14085D800(v2, v14, (_QWORD*)(a1 + 40)))
				sub_14084AB10(v14, v3, v2, (__int64*)(a1 + 40));
		}
		else
		{
			if (*(_QWORD*)(a1 + 48) == *(_QWORD*)(a1 + 40) && !sub_140846EB0(a1 + 40))
				return 0;
			v11 = *(_QWORD*)(v2 + 176);
			*(_BYTE*)(*(_QWORD*)(a1 + 40) + 17i64) = *(_BYTE*)(v11 + 18);
			if (v3)
				v12 = *(float*)(v11 + 96);
			else
				v12 = 1.0;
			v13 = sub_14085EA60(v2).m128_f32[0] * 0.050000001;
			if (v13 >= -37.0)
			{
				if ((dword_140C61BFC & 1) != 0)
				{
					v5 = *(float*)&dword_140C61BF8;
				}
				else
				{
					dword_140C61BF8 = 1272224376;
					dword_140C61BFC |= 1u;
				}
				v6 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v13 * v5) + 1065353200.0) & 0x7FFFFF) + 1065353216)
					* 0.32518977)
					+ 0.020805772)
					* COERCE_FLOAT(((int)(float)((float)(v13 * v5) + 1065353200.0) & 0x7FFFFF) + 1065353216))
					+ 0.65304345)
					* COERCE_FLOAT((int)(float)((float)(v13 * v5) + 1065353200.0) & 0xFF800000);
			}
			*(float*)(*(_QWORD*)(a1 + 40) + 20i64) = v6 * v12;
		}
		if (v3)
		{
			sub_14085E450(v2, (__int64)v16);
			sub_140831430(a1 + 112, (__int64)v16, a1 + 208, *(_BYTE*)(a1 + 91), (_BYTE*)(a1 + 464));
			*(_QWORD*)(a1 + 112) = v16[0];
			*(_QWORD*)(a1 + 120) = v16[1];
			*(_QWORD*)(a1 + 128) = v16[2];
			*(_QWORD*)(a1 + 136) = v16[3];
			*(_QWORD*)(a1 + 144) = v16[4];
			*(_QWORD*)(a1 + 152) = v16[5];
			*(_QWORD*)(a1 + 160) = v16[6];
			*(_QWORD*)(a1 + 168) = v16[7];
			*(_QWORD*)(a1 + 176) = v16[8];
			*(_QWORD*)(a1 + 184) = v16[9];
			*(_QWORD*)(a1 + 192) = v16[10];
			*(_QWORD*)(a1 + 200) = v16[11];
			*(_BYTE*)(a1 + 91) = 1;
			return 1;
		}
	}
	return 0;
}
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

