#include "../winhttp.h"

//----- (000000014012C140) ----------------------------------------------------
__int64 __fastcall sub_14012C140(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v3; // rsi
	__int64 v4; // rax
	_QWORD* v5; // rbx
	unsigned int v6; // ecx
	unsigned __int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // rbp
	__m128* v11; // rax
	__m128i v12; // xmm1
	__m128i v13; // xmm1
	unsigned int v14; // ecx
	unsigned __int64 v15; // rdx
	__int64 v16; // r8
	__int64 v17; // rax
	__int64 v18; // rbx
	_QWORD* v19; // rbx
	char* v20; // rdx
	_DWORD* v21; // rax
	_QWORD* v22; // rbx
	char* v23; // rdx
	_DWORD* v24; // rax
	_QWORD* v25; // rbx
	char* v26; // rdx
	_DWORD* v27; // rax
	__int64 v28; // rax
	_QWORD* v29; // rbx
	int* v30; // rbp
	__int64 v31; // rax
	int* v32; // rdi
	__int64 v33; // rax
	int* v34; // r14
	__int64 v35; // rax
	__int64 v37; // [rsp+20h] [rbp-98h] BYREF
	int* v38; // [rsp+28h] [rbp-90h]
	__int64 v39; // [rsp+30h] [rbp-88h]
	__int64 v40; // [rsp+40h] [rbp-78h] BYREF
	int* v41; // [rsp+48h] [rbp-70h]
	__int64 v42; // [rsp+50h] [rbp-68h]
	__int64 v43; // [rsp+60h] [rbp-58h] BYREF
	int* v44; // [rsp+68h] [rbp-50h]
	__int64 v45; // [rsp+70h] [rbp-48h]
	__int64 v46; // [rsp+80h] [rbp-38h] BYREF
	__int64 v47; // [rsp+88h] [rbp-30h]

	v2 = sub_14012AAF0(a1, 1u);
	v3 = (_QWORD*)v2;
	if (v2)
	{
		LODWORD(v37) = -1;
		sub_14012A290(v2);
		if (!v3[82])
		{
			v4 = (*(__int64(__fastcall**)(_QWORD*))(v3[18] + 16i64))(v3 + 18);
			v5 = (_QWORD*)v4;
			if (v4)
			{
				*(_QWORD*)(v4 + 8) = v3 + 2;
				*(_QWORD*)(v4 + 16) = 0i64;
				*(_DWORD*)(v4 + 24) = 0;
				*(_QWORD*)(v4 + 32) = 0i64;
				*(_QWORD*)(v4 + 40) = 0i64;
				*(_QWORD*)(v4 + 48) = 0i64;
				*(_QWORD*)(v4 + 56) = 0i64;
				*(_QWORD*)(v4 + 64) = 0i64;
				*(_QWORD*)(v4 + 72) = 0i64;
				*(_QWORD*)(v4 + 80) = 0i64;
				*(_QWORD*)v4 = off_140B5EBA0;
				*(_DWORD*)(v4 + 88) = 0;
				*(_QWORD*)(v4 + 96) = 0i64;
			}
			else
			{
				v5 = 0i64;
			}
			v5[10] = v3 + 18;
			sub_1401A4C50((__int64)(v5 + 3), (int*)L"Root");
			v3[82] = v5;
			sub_1401A5A70(v3 + 2, v5);
		}
		v6 = 0;
		v7 = *(_QWORD*)(qword_140C63650 + 768);
		if (v7)
		{
			v8 = *(_QWORD*)(qword_140C63650 + 760);
			v9 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v8 + 8 * v9) + 400i64) != a1)
			{
				v9 = ++v6;
				if (v6 >= v7)
					goto LABEL_11;
			}
			v10 = *(_QWORD*)(v8 + 8i64 * v6);
		}
		else
		{
		LABEL_11:
			v10 = 0i64;
		}
		v11 = (__m128*)sub_140118290((__int64)a1, 2);
		if (v11)
		{
			v12 = _mm_shuffle_epi32(
				_mm_cvttps_epi32(
					_mm_add_ps(
						_mm_mul_ps(
							_mm_min_ps(_mm_max_ps((__m128)0i64, *v11), (__m128)xmmword_140B7B240),
							(__m128)xmmword_140B7B470),
						(__m128)xmmword_140B7AC50)),
				198);
			v13 = _mm_packus_epi16(v12, v12);
			sub_14018EFA0(&v37, (__int64)L"%08x", (unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v13, v13)));
		}
		else
		{
			v14 = 0;
			v15 = *(_QWORD*)(qword_140C63650 + 768);
			if (v15)
			{
				v16 = *(_QWORD*)(qword_140C63650 + 760);
				v17 = 0i64;
				while (*(_QWORD**)(*(_QWORD*)(v16 + 8 * v17) + 400i64) != a1)
				{
					v17 = ++v14;
					if (v14 >= v15)
						goto LABEL_19;
				}
				v18 = *(_QWORD*)(v16 + 8i64 * v14);
			}
			else
			{
			LABEL_19:
				v18 = 0i64;
			}
			v19 = *(_QWORD**)(v18 + 400);
			v20 = (char*)sub_14018F0E0(&v43, L"FFFFFFFF")[1];
			v21 = (_DWORD*)(v19[3] + 16i64);
			if ((unsigned __int64)v21 < v19[2] && v21 != dword_140A12138 && *(int*)(v19[3] + 24i64) > 0)
				v20 = (char*)sub_140056BB0(v19, 2u, 0i64);
			sub_14018F2D0(&v37, v20);
			if (v44)
				sub_14018B900((__int64)v44, 0);
		}
		v22 = *(_QWORD**)(v10 + 400);
		v23 = (char*)sub_14018F0E0(&v43, L"Default")[1];
		v24 = (_DWORD*)(v22[3] + 32i64);
		if ((unsigned __int64)v24 < v22[2] && v24 != dword_140A12138 && *(int*)(v22[3] + 40i64) > 0)
			v23 = (char*)sub_140056BB0(v22, 3u, 0i64);
		sub_14018F2D0(&v40, v23);
		if (v44)
			sub_14018B900((__int64)v44, 0);
		v25 = *(_QWORD**)(v10 + 400);
		v26 = (char*)sub_14018F0E0(&v46, L"Left")[1];
		v27 = (_DWORD*)(v25[3] + 48i64);
		if ((unsigned __int64)v27 < v25[2] && v27 != dword_140A12138 && *(int*)(v25[3] + 56i64) > 0)
			v26 = (char*)sub_140056BB0(v25, 4u, 0i64);
		sub_14018F2D0(&v43, v26);
		if (v47)
			sub_14018B900(v47, 0);
		v28 = (*(__int64(__fastcall**)(_QWORD*))(v3[18] + 16i64))(v3 + 18);
		v29 = (_QWORD*)v28;
		if (v28)
		{
			*(_QWORD*)(v28 + 8) = v3 + 2;
			*(_QWORD*)(v28 + 16) = 0i64;
			*(_DWORD*)(v28 + 24) = 0;
			*(_QWORD*)(v28 + 32) = 0i64;
			*(_QWORD*)(v28 + 40) = 0i64;
			*(_QWORD*)(v28 + 48) = 0i64;
			*(_QWORD*)(v28 + 56) = 0i64;
			*(_QWORD*)(v28 + 64) = 0i64;
			*(_QWORD*)(v28 + 72) = 0i64;
			*(_QWORD*)(v28 + 80) = 0i64;
			*(_QWORD*)v28 = off_140B5EBA0;
			*(_DWORD*)(v28 + 88) = 0;
			*(_QWORD*)(v28 + 96) = 0i64;
		}
		else
		{
			v29 = 0i64;
		}
		v29[10] = v3 + 18;
		sub_1401A4C50((__int64)(v29 + 3), (int*)&word_140A31D40);
		v30 = v38;
		if (((v39 - (_QWORD)v38) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		{
			v31 = sub_1401A6C70((__int64)v29, (int*)&word_140A31AB8);
			sub_1401A4C50(v31 + 32, v30);
		}
		v32 = v41;
		if (((v42 - (_QWORD)v41) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		{
			v33 = sub_1401A6C70((__int64)v29, (int*)L"Font");
			sub_1401A4C50(v33 + 32, v32);
		}
		v34 = v44;
		if (((v45 - (_QWORD)v44) & 0xFFFFFFFFFFFFFFFEui64) != 0)
		{
			v35 = sub_1401A6C70((__int64)v29, (int*)L"Align");
			sub_1401A4C50(v35 + 32, v34);
		}
		sub_1401A5A70((_QWORD*)v3[82], v29);
		if (v34)
			sub_14018B900((__int64)v34, 0);
		if (v32)
			sub_14018B900((__int64)v32, 0);
		if (v30)
			sub_14018B900((__int64)v30, 0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A20818: using guessed type wchar_t a08x[5];
// 140A20828: using guessed type wchar_t aRoot_4[5];
// 140A20838: using guessed type wchar_t aFfffffff_1[9];
// 140A20850: using guessed type wchar_t aDefault_7[8];
// 140A20860: using guessed type wchar_t aLeft_1[5];
// 140A31AA8: using guessed type wchar_t aFont[5];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A31D40: using guessed type __int16 word_140A31D40;
// 140A31DB0: using guessed type wchar_t aAlign[6];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C63650: using guessed type __int64 qword_140C63650;

