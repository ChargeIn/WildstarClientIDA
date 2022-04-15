//----- (000000014074ACC0) ----------------------------------------------------
__int64 __fastcall sub_14074ACC0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	__m128* v6; // r11
	unsigned int v7; // eax
	__int64 v8; // rcx
	__m128i v9; // xmm0
	__int64 result; // rax
	__int64 v11; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = qword_140C65898;
		v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v3 + 8));
		if (v5 && *(_DWORD*)(v5 + 128) == 20)
		{
			if ((unsigned int)sub_1403A6930(v4))
				v7 = sub_1403AD990(*(__m128**)(v4 + 120), v6);
			else
				v7 = 19;
		}
		else
		{
			v7 = 3;
		}
		v8 = *(_QWORD*)(a1 + 16);
		v9 = _mm_cvtsi32_si128(v7);
		*(_DWORD*)(v8 + 8) = 3;
		result = 1i64;
		*(_QWORD*)v8 = *(_OWORD*)&_mm_cvtepi32_pd(v9);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v11 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v11 = 0x4008000000000000i64;
		*(_DWORD*)(v11 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 14074AD31: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

