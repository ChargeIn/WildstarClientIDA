//----- (0000000140766060) ----------------------------------------------------
void __fastcall sub_140766060(__int64* a1)
{
	unsigned __int64 v1; // rdi
	unsigned __int64 v3; // rbx
	__int64 v4; // rax
	__int64* v5; // rax
	unsigned __int64 v6; // rcx
	__m128i si128; // xmm1
	__m128i v8; // xmm0
	__int64 v9; // rdx
	__int64 v10; // rdi
	int* v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rcx
	__int64* v14; // rcx
	__int64 v15[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64* v16; // [rsp+38h] [rbp-10h]

	v1 = a1[1];
	v15[0] = *a1;
	v3 = 0i64;
	v15[1] = (__int64)sub_140764400;
	v15[2] = 0i64;
	v4 = 8 * v1;
	if (!is_mul_ok(v1, 8ui64))
		v4 = -1i64;
	v5 = (__int64*)sub_14018B280(v4, 0);
	v6 = 0i64;
	v16 = v5;
	if (v1)
	{
		if (v1 >= 2)
		{
			si128 = _mm_load_si128((const __m128i*) & xmmword_140B7A630);
			do
			{
				v8 = (__m128i)v6;
				v6 += 2i64;
				*(__m128i*)& v16[v6 - 2] = _mm_add_epi64(_mm_unpacklo_epi64(v8, v8), si128);
			} while (v6 < v1 - (v1 & 1));
		}
		for (; v6 < v1; ++v6)
			v16[v6] = v6;
	}
	sub_14001FEC0((__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_140766350, v16, v1, (__int64)v15);
	v10 = a1[1];
	if (v10)
	{
		v11 = sub_14018B280((v10 << 6) + 16, 0);
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
		v9 = v12 + 20;
		do
		{
			if (v9 != 20)
			{
				v13 = *a1 + (v16[v3] << 6);
				*(_OWORD*)(v9 - 20) = *(_OWORD*)v13;
				*(_DWORD*)(v9 - 4) = *(_DWORD*)(v13 + 16);
				*(_DWORD*)v9 = *(_DWORD*)(v13 + 20);
				*(_DWORD*)(v9 + 4) = *(_DWORD*)(v13 + 24);
				*(_QWORD*)(v9 + 12) = *(_QWORD*)(v13 + 32);
				*(_DWORD*)(v9 + 20) = *(_DWORD*)(v13 + 40);
				*(_DWORD*)(v9 + 24) = *(_DWORD*)(v13 + 44);
				*(_DWORD*)(v9 + 28) = *(_DWORD*)(v13 + 48);
				*(_DWORD*)(v9 + 32) = *(_DWORD*)(v13 + 52);
			}
			++v3;
			v9 += 64i64;
		} while (v3 < a1[1]);
	}
	if (*a1)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16, v9);
	v14 = v16;
	*a1 = v12;
	sub_14018B900((__int64)v14, 0);
}
// 1407661F2: variable 'v9' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7A630: using guessed type __int128 xmmword_140B7A630;

