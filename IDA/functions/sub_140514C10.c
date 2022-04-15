#include "../winhttp.h"

//----- (0000000140514C10) ----------------------------------------------------
void __fastcall sub_140514C10(
	__int64 a1,
	__int64 a2,
	__m128i* a3,
	void(__fastcall*** a4)(_QWORD),
	unsigned int* a5,
	unsigned int a6)
{
	_QWORD* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rax
	__int64 v14; // rdi
	_QWORD* v15; // rax
	__int64 v16; // rax
	__int64 v17; // rdi
	unsigned __int64 v18; // rcx
	__m128* v19; // rcx
	__m128i v20; // xmm1
	__m128i v21; // xmm1
	__int64 v22; // rsi
	unsigned __int64 v23; // rbp
	int v24; // eax
	__int128 v25; // xmm1
	__int128 v26; // xmm0
	int v27; // [rsp+30h] [rbp-E8h] BYREF
	int v28; // [rsp+34h] [rbp-E4h]
	__int64 v29; // [rsp+38h] [rbp-E0h] BYREF
	__int64 v30; // [rsp+40h] [rbp-D8h]
	__int128 v31[4]; // [rsp+60h] [rbp-B8h] BYREF
	__m128i v32; // [rsp+A0h] [rbp-78h]
	int v33; // [rsp+B0h] [rbp-68h]

	if (a1)
	{
		v9 = sub_1400F52E0(
			*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
			(__m128i*)L"UI\\ActionConfirmButton.xml",
			(int*)L"ItemLine",
			0i64,
			a1,
			-2);
		v10 = (__int64)v9;
		if (v9)
		{
			v11 = sub_1400D3830((__int64)(v9 + 69), L"Icon");
			v12 = v11;
			if (v11)
			{
				sub_1400D2D60(v11, a3);
				v13 = sub_1400D3830(v12 + 552, L"Quality");
				if (v13)
				{
					if (a4)
						sub_1400D2DF0(v13, a4);
					else
						sub_1400D42F0(v13, 0, 1, 4.0);
				}
				if (a6 > 1)
				{
					v14 = sub_1400D3830(v12 + 552, L"Count");
					if (v14)
					{
						v15 = sub_14018EFA0(&v29, (__int64)L"%d", a6);
						(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v14 + 80i64))(v14, v15[1]);
						if (v30)
							sub_14018B900(v30, 0);
					}
				}
			}
			v16 = sub_1400D3830(v10 + 552, L"Label");
			v17 = v16;
			if (v16 && (*(_DWORD*)(v16 + 432) & 0x100000i64) != 0)
			{
				v18 = *a5;
				if (v18 >= *(_QWORD*)(qword_140C63678 + 48))
					v19 = *(__m128**)(qword_140C63678 + 40);
				else
					v19 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v18);
				v20 = _mm_shuffle_epi32(
					_mm_cvttps_epi32(
						_mm_add_ps(
							_mm_mul_ps(
								_mm_min_ps(_mm_max_ps((__m128)0i64, *v19), (__m128)xmmword_140B7B240),
								(__m128)xmmword_140B7B470),
							(__m128)xmmword_140B7AC50)),
					198);
				v21 = _mm_packus_epi16(v20, v20);
				sub_14018EFA0(
					&v29,
					(__int64)L"<T Align=\"Center\" Font=\"CRB_InterfaceSmall\" TextColor=\"%x\">%s</T>",
					(unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v21, v21)),
					a2);
				v22 = v30;
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v17 + 88i64))(v17, v30);
				v31[0] = *(_OWORD*)(v10 + 64);
				v23 = HIDWORD(_mm_srli_si128(*(__m128i*)(v10 + 128), 8).m128i_u64[0]);
				sub_140116830(v17, &v27, 0);
				if ((int)v23 < v28)
				{
					v24 = *(_DWORD*)(v10 + 144);
					v25 = *(_OWORD*)(v10 + 96);
					v31[0] = *(_OWORD*)(v10 + 64);
					v33 = v24;
					v26 = *(_OWORD*)(v10 + 80);
					v31[2] = v25;
					v31[1] = v26;
					v31[3] = *(_OWORD*)(v10 + 112);
					v32 = *(__m128i*)(v10 + 128);
					v32.m128i_i32[3] = v28 + HIDWORD(_mm_srli_si128(v32, 8).m128i_u64[0]) - v23;
					sub_1400CC740(v10, (__int64)v31);
				}
				if (v22)
					sub_14018B900(v22, 0);
			}
		}
	}
}
// 140B12628: using guessed type wchar_t aD_53[3];
// 140B12690: using guessed type wchar_t aCount_5[6];
// 140B126A0: using guessed type wchar_t aTAlignCenterFo[66];
// 140B12728: using guessed type wchar_t aLabel_2[6];
// 140B12738: using guessed type wchar_t aUiActionconfir_3[27];
// 140B12770: using guessed type wchar_t aItemline[9];
// 140B12788: using guessed type wchar_t aQuality_1[8];
// 140B12798: using guessed type wchar_t aIcon_9[5];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65898: using guessed type __int64 qword_140C65898;

