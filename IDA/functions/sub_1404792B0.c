#include "../winhttp.h"

//----- (00000001404792B0) ----------------------------------------------------
void __fastcall sub_1404792B0(__m128* a1)
{
	__int64 v1; // r10
	__m128* v3; // r12
	int v4; // ebp
	unsigned __int64 v5; // r14
	float v6; // xmm6_4
	int v7; // edi
	int v8; // esi
	int v9; // r11d
	__int32 v10; // eax
	int v11; // r11d
	__int64 v12; // rax
	bool v13; // zf
	unsigned __int64 v14; // rax
	__m128 v15; // xmm2
	__m128 v16; // xmm1
	unsigned __int64 v17; // rcx
	int v18; // eax
	__int64 v19; // rax
	__int64 v20; // rax

	v1 = qword_140C65898;
	v3 = *(__m128**)(qword_140C65898 + 120);
	if (!v3 || !qword_140C65970 || *(int*)(qword_140C65970 + 8) >= 4)
		return;
	v4 = 0;
	v5 = a1[400].m128_u64[1];
	v6 = 3.4028235e38;
	v7 = 0;
	v8 = 2;
	if (*(_BYTE*)(v5 + 4))
	{
		if (!(unsigned int)sub_14046C6A0((__int64)a1))
		{
			v10 = a1[2].m128_i32[3];
			if ((v10 & 0x400) == 0)
			{
				v7 = *(unsigned __int8*)(v5 + 7);
				if (*(_BYTE*)(v5 + 12) || (v10 & 0x80u) != 0)
				{
					if (v9 != 1 || (v8 = 7, (v10 & 0x10000) == 0))
						v8 = v9 + 3;
					goto LABEL_18;
				}
				if (a1[563].m128_i8[4])
				{
					v8 = 9;
				LABEL_18:
					v7 = 1;
					goto LABEL_19;
				}
				if (a1[572].m128_i8[4])
				{
					v8 = 11;
					goto LABEL_18;
				}
				if (a1[846].m128_i8[12])
				{
					v8 = 12;
					goto LABEL_18;
				}
			}
		}
	}
LABEL_19:
	if (*(_BYTE*)(v5 + 4) && !(unsigned int)sub_14046C6A0((__int64)a1) && v11 == 2 && (a1[2].m128_i32[3] & 0x400) == 0)
	{
		if (a1[801].m128_i8[12] && a1[801].m128_i8[15])
		{
			v8 = 5;
		LABEL_29:
			v7 = 1;
			goto LABEL_30;
		}
		if (a1[806].m128_i8[4] && a1[806].m128_i8[7])
		{
			v8 = 8;
			goto LABEL_29;
		}
	}
LABEL_30:
	if (a1 != v3)
	{
		if (*(_BYTE*)(v5 + 4))
		{
			if (a1[747].m128_i8[12])
			{
				v12 = *(_QWORD*)(v1 + 25744);
				if ((!v12 || !*(_DWORD*)(v12 + 684)) && (*(_BYTE*)(v1 + 7020) & 4) != 0 && !*(_DWORD*)(v1 + 7044))
				{
					v7 = 1;
					v8 = 10;
				}
			}
		}
	}
	if (*(_BYTE*)(v5 + 8))
	{
		if (!a1[860].m128_i32[0])
			a1[860].m128_u64[0] = 1i64;
	}
	else
	{
		a1[860].m128_i32[0] = 0;
	}
	v13 = v7 == 0;
	if (v7)
	{
		v14 = a1[1].m128_u64[1];
		if (!v14 || (v6 = *(float*)(v14 + 364), v6 <= (float)(*(float*)&dword_140C45A98 - 1.0)))
			v6 = *(float*)(v5 + 52);
		if (v6 > *(float*)&dword_140C45A98
			&& (v15 = _mm_sub_ps(v3[286], a1[286]),
				v16 = _mm_mul_ps(v15, v15),
				(float)((float)(v16.m128_f32[0] + _mm_shuffle_ps(v16, v16, 85).m128_f32[0])
					+ _mm_shuffle_ps(v16, v16, 170).m128_f32[0]) < (float)(v6 * v6))
			&& ((v17 = a1[367].m128_u64[0]) != 0 || (v17 = a1[367].m128_u64[1]) != 0)
			&& (v18 = (*(__int64(__fastcall**)(unsigned __int64, _QWORD, __int64))(*(_QWORD*)v17 + 264i64))(
				v17,
				0i64,
				1i64),
				v1 = qword_140C65898,
				v18 != 1))
		{
			v19 = *(_QWORD*)(qword_140C65898 + 29096);
			if (v19)
			{
				if (*(_DWORD*)(v19 + 696))
				{
					v20 = *(_QWORD*)(qword_140C65898 + 29080);
					if (v20)
					{
						if (!*(_DWORD*)(v20 + 80))
							v7 = 0;
					}
				}
			}
		}
		else
		{
			v7 = 0;
		}
		v13 = v7 == 0;
	}
	LOBYTE(v4) = !v13;
	sub_140608850(*(__int64**)(v1 + 29688), a1->m128_u32[2], v4, v8, SLODWORD(v6));
}
// 140479375: variable 'v9' is possibly undefined
// 1404793A0: variable 'v11' is possibly undefined
// 1404793F2: variable 'v1' is possibly undefined
// 140C45A98: using guessed type int dword_140C45A98;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

