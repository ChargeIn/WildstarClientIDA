#include "../winhttp.h"

//----- (0000000140640F60) ----------------------------------------------------
void __fastcall sub_140640F60(__int64 a1, __m128* a2)
{
	__int64 v2; // rbx
	__int64 v3; // rcx
	__m128 v4; // xmm1
	__m128 v5; // xmm1
	__int64 v6; // rcx
	__m128* v7; // rax
	__m128* v8; // rax
	__int64 v9; // rax
	__int64 v10; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v11; // [rsp+38h] [rbp-C8h]
	__m128 v12; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v13; // [rsp+50h] [rbp-B0h] BYREF
	__int64 v14; // [rsp+58h] [rbp-A8h] BYREF
	int v15; // [rsp+60h] [rbp-A0h]
	__int64 v16; // [rsp+68h] [rbp-98h]
	__int64 v17; // [rsp+70h] [rbp-90h]
	int v18; // [rsp+78h] [rbp-88h]
	__int64 v19; // [rsp+80h] [rbp-80h]
	__m128 v20; // [rsp+90h] [rbp-70h] BYREF
	__m128 v21; // [rsp+A0h] [rbp-60h] BYREF
	char v22[192]; // [rsp+B0h] [rbp-50h] BYREF
	float v23; // [rsp+170h] [rbp+70h]

	if (a2)
	{
		v2 = qword_140C65898;
		if (*(__m128**)(qword_140C65898 + 120) == a2 && !*(_DWORD*)(qword_140C65898 + 7040))
		{
			v3 = *(_QWORD*)(qword_140C65898 + 29256);
			if (v3)
			{
				v4 = (__m128)a2[300].m128_u32[1];
				v4.m128_f32[0] = v4.m128_f32[0] * a2[87].m128_f32[0];
				v12 = _mm_add_ps(a2[286], _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v4, (__m128)0i64)));
				if ((*(unsigned int(__fastcall**)(__int64, __m128*, char*, __int64, _QWORD))(*(_QWORD*)v3 + 440i64))(
					v3,
					&v12,
					v22,
					0x20000i64,
					0i64))
				{
					v5 = (__m128)v12.m128_u32[1];
					if (v12.m128_f32[1] < (float)(v23 - 1.0))
					{
						v5.m128_f32[0] = v12.m128_f32[1] + 1.0;
						v6 = *(_QWORD*)(v2 + 29256);
						v13 = 0i64;
						v14 = 16449i64;
						v15 = 1;
						v16 = 0i64;
						v21 = _mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128)v12.m128_u32[0], (__m128)v12.m128_u32[2]),
							_mm_unpacklo_ps(v5, (__m128)0i64));
						v17 = 0i64;
						v18 = 0;
						v19 = 0i64;
						v20 = _mm_unpacklo_ps(
							_mm_unpacklo_ps((__m128)v12.m128_u32[0], (__m128)v12.m128_u32[2]),
							_mm_unpacklo_ps((__m128)LODWORD(v23), (__m128)0i64));
						v10 = 0x3F80000000000000i64;
						if (!(*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, __int64*, __int64*, __int64*))(*(_QWORD*)v6 + 424i64))(
							v6,
							&v21,
							&v20,
							&v10,
							&v13,
							&v14))
						{
							if (v12.m128_f32[1] < (float)((float)(v23 - 1.0)
								- (float)(*(float*)(*(_QWORD*)(v2 + 25744) + 4804i64)
									* *(float*)(*(_QWORD*)(v2 + 25744) + 1392i64))))
							{
								v7 = *(__m128**)(v2 + 29088);
								if (!v7[5].m128_i32[1])
									v7[4] = v12;
								v8 = *(__m128**)(v2 + 29088);
								if (!v8[5].m128_i32[1])
									v8[38] = v12;
							}
							v10 = 0i64;
							v11 = 0i64;
							v9 = *(_QWORD*)(v2 + 29088);
							LODWORD(v10) = 1;
							HIDWORD(v10) = *(_DWORD*)(v9 + 64);
							v11 = *(_QWORD*)(v9 + 68);
							sub_1403F4900(v2, 0xFCu, (__int64)&v10);
							*(_DWORD*)(*(_QWORD*)(v2 + 29088) + 84i64) = 1;
							*(_DWORD*)(v2 + 7040) = 1;
						}
						if (v13)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
					}
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140640F60: using guessed type char var_F0[192];

