#include "../winhttp.h"

//----- (00000001404C4560) ----------------------------------------------------
void __fastcall sub_1404C4560(__int64 a1, __m128* a2)
{
	__int64* v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rax
	__m128 v7; // xmm1
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // r10
	__int64 v11; // r11
	int v12; // eax
	__int64 v13; // rax
	char* v14; // [rsp+38h] [rbp-D0h] BYREF
	_BYTE v15[12]; // [rsp+40h] [rbp-C8h]
	__int64 v16; // [rsp+4Ch] [rbp-BCh]
	int v17; // [rsp+54h] [rbp-B4h]
	__m128 v18[4]; // [rsp+58h] [rbp-B0h] BYREF
	char v19[64]; // [rsp+98h] [rbp-70h] BYREF
	char v20[64]; // [rsp+D8h] [rbp-30h] BYREF
	__m128* v21[10]; // [rsp+118h] [rbp+10h] BYREF

	if (((*(_DWORD*)(a1 + 128) - 5) & 0xFFFFFFFA) == 0)
	{
		v4 = (__int64*)(a1 + 288);
		if (*(_QWORD*)(a1 + 288))
		{
			(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 120i64))(a1, v19);
			*(_QWORD*)v15 = a2;
			v21[1] = a2;
			v14 = v19;
			v21[0] = (__m128*)v19;
			sub_1401AFB10(v21, v18);
			if ((*(unsigned int(__fastcall**)(__int64, __m128*))(*(_QWORD*)a1 + 280i64))(a1, v18))
			{
				v5 = sub_1404BD000((__int64)&v14, v18);
				*(_OWORD*)(a1 + 512) = *(_OWORD*)v5;
				*(_DWORD*)(a1 + 528) = *(_DWORD*)(v5 + 16);
				*(_DWORD*)(a1 + 532) = *(_DWORD*)(v5 + 20);
				*(_DWORD*)(a1 + 536) = *(_DWORD*)(v5 + 24);
				*(_DWORD*)(a1 + 540) = *(_DWORD*)(v5 + 28);
				if (sub_140203DA0(*(_DWORD*)(a1 + 96)))
				{
					v6 = *(_QWORD*)a1;
					v7 = _mm_mul_ps(v18[0], v18[0]);
					*(float*)(a1 + 540) = fsqrt(
						(float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
						+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0]);
					(*(void(__fastcall**)(__int64, char*, __int64))(v6 + 144))(a1, v20, 1i64);
					v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)*v4 + 336i64))(*v4);
					(**(void(__fastcall***)(__int64))v8)(v8);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 936i64))(v8);
					sub_1404C2960(a1);
					v14 = *(char**)(a1 + 88);
					v9 = sub_1404C2740(a1);
					if ((*(int(__fastcall**)(__int64, char*, __int64, char**, __int64*, __int64))(v10 + 200))(
						v11,
						v20,
						v8,
						&v14,
						v4,
						v9) >= 0)
					{
						(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64, __int64, __int64, int), __int64))(*(_QWORD*)v8 + 648i64))(
							v8,
							sub_1404C2880,
							a1);
						v12 = sub_1401AE6F0(0, -1);
						*(_DWORD*)v15 = 1065353216;
						HIDWORD(v14) = v12;
						*(_QWORD*)&v15[4] = 0i64;
						v16 = 0i64;
						v17 = 0;
						v13 = *(_QWORD*)v8;
						LODWORD(v14) = 6691;
						(*(void(__fastcall**)(__int64, _QWORD, char**))(v13 + 584))(v8, 0i64, &v14);
						sub_1404C7FF0(*(_QWORD*)(a1 + 296), *v4, a1);
					}
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)*v4 + 296i64))(*v4, 0i64);
					sub_1404C69F0(a1);
					sub_1404C3B50((__int64*)a1);
					sub_1404C6650(a1, *(_DWORD*)(a1 + 764));
				}
			}
		}
	}
}
// 1404C46FE: variable 'v10' is possibly undefined
// 1404C46FE: variable 'v11' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

