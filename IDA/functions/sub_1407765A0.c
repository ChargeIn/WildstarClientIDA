//----- (00000001407765A0) ----------------------------------------------------
void __fastcall sub_1407765A0(__int64* a1)
{
	unsigned __int64 v1; // rsi
	unsigned __int64 v3; // rbx
	__int64 v4; // rax
	unsigned __int64 v5; // rax
	__m128i si128; // xmm1
	__m128i v7; // xmm0
	__int64 v8; // rdx
	_DWORD* v9; // r8
	__int64 v10; // rsi
	int* v11; // rax
	__int64 v12; // rsi
	_DWORD* v13; // rcx
	__int64* v14; // rcx
	__int64 v15[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64* v16; // [rsp+38h] [rbp-10h]

	v1 = a1[1];
	if (v1 > 1)
	{
		v15[0] = *a1;
		v3 = 0i64;
		v15[1] = (__int64)sub_14076EFC0;
		v15[2] = 0i64;
		v4 = 8 * v1;
		if (!is_mul_ok(v1, 8ui64))
			v4 = -1i64;
		v16 = (__int64*)sub_14018B280(v4, 0);
		v5 = 0i64;
		si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A630);
		do
		{
			v7 = (__m128i)v5;
			v5 += 2i64;
			*(__m128i*)& v16[v5 - 2] = _mm_add_epi64(_mm_unpacklo_epi64(v7, v7), si128);
		} while (v5 < v1 - (v1 & 1));
		for (; v5 < v1; ++v5)
			v16[v5] = v5;
		sub_14001FEC0((__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_14004F5F0, v16, v1, (__int64)v15);
		v10 = a1[1];
		if (v10)
		{
			v11 = sub_14018B280(8 * v10 + 16, 0);
			if (v11)
			{
				*((_QWORD*)v11 + 1) = v10;
				v12 = (__int64)(v11 + 4);
				*(_QWORD*)v11 = off_140B55060;
			}
			else
			{
				v12 = 16i64;
			}
		}
		else
		{
			v12 = 0i64;
		}
		if (a1[1])
		{
			v9 = (_DWORD*)v12;
			do
			{
				if (v9)
				{
					v8 = *(__int64*)((char*)v16 + (_QWORD)v9 - v12);
					v13 = (_DWORD*)(*a1 + 8 * v8);
					*v9 = *v13;
					v9[1] = v13[1];
				}
				++v3;
				v9 += 2;
			} while (v3 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64, __int64, _DWORD*))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v8, v9);
		v14 = v16;
		*a1 = v12;
		sub_14018B900((__int64)v14, 0);
	}
}
// 140776602: conditional instruction was optimized away because rsi.8>=2u
// 140776608: conditional instruction was optimized away because rsi.8>=2u
// 14077670E: variable 'v8' is possibly undefined
// 14077670E: variable 'v9' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7A630: using guessed type __int128 xmmword_140B7A630;

