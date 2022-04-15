//----- (000000014047EA60) ----------------------------------------------------
__int64 __fastcall sub_14047EA60(__m128* a1)
{
	__int64 v1; // rdx
	__int64 result; // rax
	int v4; // eax
	unsigned __int64 v5; // rcx
	__int64 v6; // rdi
	_QWORD* v7; // rbx
	__m128* v8; // rax
	__m128 v9; // xmm2
	__m128 v10; // xmm1
	__int64 v11; // rcx
	const wchar_t* v12; // rdx
	int v13[4]; // [rsp+30h] [rbp-38h] BYREF
	__m128 v14; // [rsp+40h] [rbp-28h]
	__m128 v15; // [rsp+50h] [rbp-18h] BYREF

	v1 = qword_140C65898;
	if (!*(_QWORD*)(qword_140C65898 + 120))
		return 0i64;
	v4 = a1->m128_i32[2];
	v5 = a1[889].m128_u64[1];
	v6 = 0i64;
	v13[0] = 6;
	v13[1] = v4;
	v13[2] = 0;
	if (v5)
	{
		v7 = *(_QWORD**)(qword_140C65920 + 8);
		if (v7)
		{
			while (v7[9] != v5)
			{
				v7 = (_QWORD*)v7[4];
				if (!v7)
					goto LABEL_9;
			}
			(*(void(__fastcall**)(_QWORD*))(*v7 + 8i64))(v7);
			(*(void(__fastcall**)(_QWORD*, __int64)) * v7)(v7, 1i64);
			v1 = qword_140C65898;
		}
	}
LABEL_9:
	v8 = *(__m128**)(v1 + 120);
	v14 = a1[286];
	v14.m128_i32[1] = 0;
	v15 = v8[286];
	v15.m128_i32[1] = 0;
	v9 = _mm_sub_ps(v14, v15);
	v10 = _mm_mul_ps(v9, v9);
	if ((float)((float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 85).m128_f32[0])
		+ _mm_shuffle_ps(v10, v10, 170).m128_f32[0]) > 64.0
		|| (unsigned int)sub_14047EE80((__int64)a1))
	{
		v15.m128_u64[0] = (unsigned __int64)a1;
		v15.m128_u64[1] = (unsigned __int64)sub_14047EBD0;
		if (*(_DWORD*)qword_140C65920)
		{
			v12 = L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3";
			v11 = qword_140C65920;
			goto LABEL_15;
		}
	}
	else
	{
		v11 = qword_140C65920;
		v15.m128_u64[0] = (unsigned __int64)a1;
		v15.m128_u64[1] = (unsigned __int64)sub_14047EE40;
		if (*(_DWORD*)qword_140C65920)
		{
			v12 = L"Art\\FX\\Model\\Props\\Alert_LightningBolt\\Alert_LightningBolt.m3";
		LABEL_15:
			v6 = sub_140486DC0(v11, (__int64)v12, v13, &v15, 0, 0);
		}
	}
	result = v6;
	a1[889].m128_u64[1] = v6;
	return result;
}
// 140B082F0: using guessed type wchar_t aArtFxModelProp_6[66];
// 140B08380: using guessed type wchar_t aArtFxModelProp_5[62];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 14047EA60: using guessed type __m128 var_18;

