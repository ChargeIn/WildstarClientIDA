#include "../winhttp.h"

//----- (0000000140749E70) ----------------------------------------------------
__int64 __fastcall sub_140749E70(_QWORD* a1)
{
	_DWORD* v1; // rdx
	unsigned __int64 v2; // r9
	_DWORD* v4; // rcx
	_DWORD* v5; // rax
	int v6; // r8d
	BOOL v7; // edi
	int v8; // eax
	BOOL v9; // r15d
	_QWORD* v10; // r14
	unsigned int v11; // ebp
	__int64 v12; // rbx
	__int64 v13; // rax
	_QWORD* v14; // rax
	_QWORD* v15; // rbx
	__int64 v16; // rax
	__m128i v17; // xmm0
	_QWORD* v18; // rax
	_QWORD* v19; // rbx
	__int64 v20; // rax
	__m128i v21; // xmm0
	_QWORD* v22; // rax
	_QWORD* v23; // rbx
	__int64 v24; // rax
	__m128i v25; // xmm0
	__int64 v26; // rcx
	unsigned int v27; // r13d
	_QWORD* v28; // rax
	_QWORD* v29; // rbx
	__int64 v30; // rax
	__m128i v31; // xmm0
	__int64 v32; // r12
	__int64 v33; // rax
	__int64 v34; // r15
	__int64 v35; // rdi
	__int64 v36; // rax
	__int64 v37; // r8
	char v38; // dl
	__int64 v39; // rax
	__int64 v40; // rdi
	__int64 v41; // rax
	__int64 v42; // r9
	__int64 v44; // [rsp+20h] [rbp-38h] BYREF
	int v45; // [rsp+28h] [rbp-30h]

	v1 = (_DWORD*)a1[3];
	v2 = a1[2];
	v4 = dword_140A12138;
	v5 = dword_140A12138;
	if ((unsigned __int64)v1 < v2)
		v5 = v1;
	v6 = v5[2];
	v7 = v6 && (v6 != 1 || *v5);
	if ((unsigned __int64)(v1 + 4) < v2)
		v4 = v1 + 4;
	v8 = v4[2];
	v9 = v8 && (v8 != 1 || *v4);
	v10 = (_QWORD*)qword_140C665D8;
	v11 = 1;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v12 = a1[2];
	v13 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	a1[2] += 16i64;
	v14 = (_QWORD*)v10[7];
	v15 = (_QWORD*)*v14;
	if ((_QWORD*)*v14 != v14)
	{
		do
		{
			v16 = a1[2];
			v17 = _mm_cvtsi32_si128(v11);
			*(_DWORD*)(v16 + 8) = 3;
			++v11;
			*(_QWORD*)v16 = *(_OWORD*)&_mm_cvtepi32_pd(v17);
			a1[2] += 16i64;
			sub_14072D5B0(a1, v15[2]);
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			v15 = (_QWORD*)*v15;
		} while (v15 != (_QWORD*)v10[7]);
	}
	v18 = (_QWORD*)v10[11];
	v19 = (_QWORD*)*v18;
	if ((_QWORD*)*v18 != v18)
	{
		do
		{
			v20 = a1[2];
			v21 = _mm_cvtsi32_si128(v11);
			*(_DWORD*)(v20 + 8) = 3;
			++v11;
			*(_QWORD*)v20 = *(_OWORD*)&_mm_cvtepi32_pd(v21);
			a1[2] += 16i64;
			sub_14072D5B0(a1, v19[2]);
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			v19 = (_QWORD*)*v19;
		} while (v19 != (_QWORD*)v10[11]);
	}
	if (v7)
	{
		v22 = (_QWORD*)v10[9];
		v23 = (_QWORD*)*v22;
		if ((_QWORD*)*v22 != v22)
		{
			do
			{
				v24 = a1[2];
				v25 = _mm_cvtsi32_si128(v11);
				*(_DWORD*)(v24 + 8) = 3;
				++v11;
				*(_QWORD*)v24 = *(_OWORD*)&_mm_cvtepi32_pd(v25);
				a1[2] += 16i64;
				sub_14072D5B0(a1, v23[2]);
				sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 32i64;
				v23 = (_QWORD*)*v23;
			} while (v23 != (_QWORD*)v10[9]);
		}
	}
	if (v9)
	{
		v26 = *(_QWORD*)(qword_140C65898 + 7152);
		v27 = v26 ? (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 24i64))(v26) : 0;
		v28 = (_QWORD*)v10[13];
		v29 = (_QWORD*)*v28;
		if ((_QWORD*)*v28 != v28)
		{
			do
			{
				if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)v29[2] + 128i64))(v29[2], v27))
				{
					v30 = a1[2];
					v31 = _mm_cvtsi32_si128(v11++);
					*(_DWORD*)(v30 + 8) = 3;
					*(_QWORD*)v30 = *(_OWORD*)&_mm_cvtepi32_pd(v31);
					a1[2] += 16i64;
					v32 = v29[2];
					if (v32)
					{
						if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
							sub_14005E2C0((__int64)a1);
						v33 = a1[5];
						if (v33 == a1[10])
							v34 = a1[15];
						else
							v34 = *(_QWORD*)(**(_QWORD**)(v33 + 8) + 24i64);
						v35 = a1[4];
						v36 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v35 + 16))(
							*(_QWORD*)(v35 + 24),
							0i64,
							0i64,
							56i64);
						v37 = v36;
						if (!v36)
							sub_140061040((__int64)a1, 4);
						*(_QWORD*)(v35 + 120) += 56i64;
						v38 = *(_BYTE*)(a1[4] + 32i64);
						*(_BYTE*)(v36 + 8) = 7;
						*(_QWORD*)(v36 + 32) = 8i64;
						*(_QWORD*)(v36 + 16) = 0i64;
						*(_QWORD*)(v36 + 24) = v34;
						*(_BYTE*)(v36 + 9) = v38 & 3;
						*(_QWORD*)v36 = **(_QWORD**)(a1[4] + 176i64);
						**(_QWORD**)(a1[4] + 176i64) = v36;
						v39 = a1[2];
						*(_QWORD*)v39 = v37;
						*(_DWORD*)(v39 + 8) = 7;
						a1[2] += 16i64;
						*(_QWORD*)(v37 + 48) = v32;
						v40 = a1[4];
						v41 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Episode", 0xCui64);
						v42 = a1[2];
						v44 = v41;
						v45 = 4;
						sub_14005E8E0((__int64)a1, v40 + 160, (int*)&v44, v42);
						a1[2] += 16i64;
						sub_140058BF0((__int64)a1, -2);
					}
					sub_14005EA50(
						(__int64)a1,
						(__int64*)(a1[2] - 48i64),
						(int*)(a1[2] - 32i64),
						(unsigned int*)(a1[2] - 16i64));
					a1[2] -= 32i64;
				}
				v29 = (_QWORD*)*v29;
			} while (v29 != (_QWORD*)v10[13]);
		}
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C665D8: using guessed type __int64 qword_140C665D8;

