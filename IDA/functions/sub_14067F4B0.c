//----- (000000014067F4B0) ----------------------------------------------------
__int64 __fastcall sub_14067F4B0(_QWORD* a1)
{
	_QWORD** v2; // rax
	_QWORD** v3; // rdi
	_QWORD* v4; // rdi
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	unsigned int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rcx
	__m128i v10; // xmm0
	__int64 result; // rax
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]

	v2 = (_QWORD**)sub_14067B760(a1);
	v3 = v2;
	if (v2 && *(_DWORD*)(*v2[6] + 12i64) == 13 && ((int(__fastcall*)(_QWORD**))(*v2)[26])(v2) >= 3)
	{
		v4 = (_QWORD*)sub_140721F50(*v3[6], *(_DWORD*)(*v3[6] + 20i64));
		if (v4)
		{
			v7 = sub_1400584E0((__int64)a1, 2);
			if (v7 < (unsigned int)((__int64)(v4[4] - v4[3]) >> 3))
			{
				v8 = sub_1407209F0(v4, v7);
				if (v8)
				{
					v9 = a1[2];
					v10 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64));
					*(_DWORD*)(v9 + 8) = 3;
					result = 1i64;
					*(_QWORD*)v9 = *(_OWORD*)&_mm_cvtepi32_pd(v10);
					a1[2] += 16i64;
					return result;
				}
				v5 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F5124)[1];
				if (v5)
				{
					v6 = -1i64;
					do
						++v6;
					while (*((_BYTE*)v5 + v6));
					goto LABEL_24;
				}
			}
			else
			{
				v5 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F5154)[1];
				if (v5)
				{
					v6 = -1i64;
					do
						++v6;
					while (*((_BYTE*)v5 + v6));
					goto LABEL_24;
				}
			}
		}
		else
		{
			v5 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F5144)[1];
			if (v5)
			{
				v6 = -1i64;
				do
					++v6;
				while (*((_BYTE*)v5 + v6));
			LABEL_24:
				sub_140058710((__int64)a1, v5, v6);
				goto LABEL_25;
			}
		}
	}
	else
	{
		v5 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F518C)[1];
		if (v5)
		{
			v6 = -1i64;
			do
				++v6;
			while (*((_BYTE*)v5 + v6));
			goto LABEL_24;
		}
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
LABEL_25:
	if (v13)
		sub_14018B900(v13, 0);
	return 1i64;
}
// 1409F5124: using guessed type unsigned __int16 word_1409F5124[2];
// 1409F5144: using guessed type unsigned __int16 word_1409F5144[2];
// 1409F5154: using guessed type unsigned __int16 word_1409F5154[2];
// 1409F518C: using guessed type unsigned __int16 word_1409F518C[2];

