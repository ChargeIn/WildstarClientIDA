#include "../winhttp.h"

//----- (0000000140565D40) ----------------------------------------------------
__int64 __fastcall sub_140565D40(__int64 a1, __int64 a2, __m128* a3)
{
	unsigned int v3; // edi
	__int64 v6; // rax
	float v7; // xmm6_4
	__int64 v8; // rax
	float v9; // xmm0_4
	__int64 v10; // rax
	int v11; // ecx
	__int64 v12; // rax
	int v13; // ecx
	__int64 v14; // rax
	int v15; // ecx
	__m128* v16; // rbx
	int v17; // eax
	__m128 v18; // xmm2
	__m128 v19; // xmm1

	v3 = 0;
	if (!*(_DWORD*)(a2 + 40))
		return 1i64;
	while (*(_DWORD*)(168i64 * v3 + *(_QWORD*)(a2 + 48) + 16) != 105)
	{
	LABEL_53:
		if (++v3 >= *(_DWORD*)(a2 + 40))
			return 1i64;
	}
	if ((dword_140DC3400 & 1) == 0)
	{
		dword_140DC3400 |= 1u;
		if (qword_140C63840)
		{
			v6 = qword_140C63840(off_140A6A408, 557i64, qword_140C63858);
		}
		else
		{
			if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
				goto LABEL_11;
			v6 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 557i64);
		}
		if (v6)
		{
			v7 = *(float*)(v6 + 24);
			goto LABEL_12;
		}
	LABEL_11:
		v7 = 0.0;
	LABEL_12:
		if (qword_140C63840)
		{
			v8 = qword_140C63840(off_140A6A408, 557i64, qword_140C63858);
		}
		else
		{
			if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
				goto LABEL_19;
			v8 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 557i64);
		}
		if (v8)
		{
			v9 = *(float*)(v8 + 24);
		LABEL_20:
			*(float*)&dword_140DC3404 = v9 * v7;
			goto LABEL_21;
		}
	LABEL_19:
		v9 = 0.0;
		goto LABEL_20;
	}
LABEL_21:
	if ((dword_140DC3400 & 2) != 0)
		goto LABEL_47;
	dword_140DC3400 |= 2u;
	if (qword_140C63840)
	{
		v10 = qword_140C63840(off_140A6A408, 554i64, qword_140C63858);
	}
	else
	{
		if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
			goto LABEL_29;
		v10 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 554i64);
	}
	if (v10)
	{
		v11 = *(_DWORD*)(v10 + 4);
		goto LABEL_30;
	}
LABEL_29:
	v11 = 0;
LABEL_30:
	dword_140C8AF18 = v11;
	if (qword_140C63840)
	{
		v12 = qword_140C63840(off_140A6A408, 555i64, qword_140C63858);
	}
	else
	{
		if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
			goto LABEL_37;
		v12 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 555i64);
	}
	if (v12)
	{
		v13 = *(_DWORD*)(v12 + 4);
		goto LABEL_38;
	}
LABEL_37:
	v13 = 0;
LABEL_38:
	dword_140C8AF1C = v13;
	if (qword_140C63840)
	{
		v14 = qword_140C63840(off_140A6A408, 556i64, qword_140C63858);
	}
	else
	{
		if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
			goto LABEL_45;
		v14 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 556i64);
	}
	if (!v14)
	{
	LABEL_45:
		v15 = 0;
		goto LABEL_46;
	}
	v15 = *(_DWORD*)(v14 + 4);
LABEL_46:
	dword_140C8AF20 = v15;
LABEL_47:
	v16 = *(__m128**)(qword_140C65898 + 28464);
	if (!v16)
		goto LABEL_53;
	while (1)
	{
		v17 = (*(__int64(__fastcall**)(__m128*))(v16->m128_u64[0] + 8))(v16);
		if (v17 == dword_140C8AF18 || v17 == dword_140C8AF1C || v17 == dword_140C8AF20)
		{
			v18 = _mm_sub_ps(*a3, v16[286]);
			v19 = _mm_mul_ps(v18, v18);
			if ((float)((float)(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0])
				+ _mm_shuffle_ps(v19, v19, 170).m128_f32[0]) <= *(float*)&dword_140DC3404)
				return 0i64;
		}
		v16 = (__m128*)v16[6].m128_u64[0];
		if (!v16)
			goto LABEL_53;
	}
}
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8AF18: using guessed type int dword_140C8AF18;
// 140C8AF1C: using guessed type int dword_140C8AF1C;
// 140C8AF20: using guessed type int dword_140C8AF20;
// 140DC3400: using guessed type int dword_140DC3400;
// 140DC3404: using guessed type int dword_140DC3404;

