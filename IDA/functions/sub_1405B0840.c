//----- (00000001405B0840) ----------------------------------------------------
__int64 __fastcall sub_1405B0840(__int64 a1, __m128* a2)
{
	__m128 v2; // xmm6
	unsigned int v5; // r14d
	unsigned int v6; // edi
	__int64(__fastcall * v7)(wchar_t**, _QWORD, __int64); // r9
	__int64 v8; // rcx
	unsigned int v9; // esi
	__int64 v10; // rax
	unsigned int v11; // esi
	_DWORD* v12; // rax
	__m128 v13; // xmm2
	int v14; // ecx
	double* v15; // rax
	__int64(__fastcall * v16)(wchar_t**, __int64, __int64); // rax
	__int64 v17; // rax
	float v18; // xmm6_4
	__int64 v19; // rax
	float v20; // xmm0_4
	double v22[7]; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v23[3]; // [rsp+78h] [rbp-90h] BYREF
	float v24; // [rsp+ACh] [rbp-5Ch]
	double v25[8]; // [rsp+B8h] [rbp-50h] BYREF
	__m256 v26[2]; // [rsp+F8h] [rbp-10h] BYREF
	__m128* v27[10]; // [rsp+138h] [rbp+30h] BYREF

	v2 = a2[3];
	v5 = 0x7FFFFFFF;
	v6 = 0;
	if (*(_DWORD*)(a1 + 272))
	{
		v7 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		do
		{
			if (v6 >= (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 256) - *(_QWORD*)(a1 + 248)) >> 3))
				v8 = 0i64;
			else
				v8 = *(_QWORD*)(*(_QWORD*)(a1 + 248) + 8i64 * v6);
			v9 = *(_DWORD*)(v8 + 12);
			if (v7)
			{
				v10 = v7(off_140A6A8D8, v9, qword_140C63858);
			}
			else
			{
				if (dword_140C65340)
					goto LABEL_23;
				if ((int)sub_140205D40() < 0)
					goto LABEL_22;
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C30 + 24i64))(qword_140C63C30, v9);
			}
			if (!v10)
				goto LABEL_22;
			v7 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			v11 = *(_DWORD*)(v10 + 4);
			if (qword_140C63840)
			{
				v12 = (_DWORD*)qword_140C63840(off_140A6E298, v11, qword_140C63858);
				goto LABEL_17;
			}
			if (!dword_140C63AB4)
			{
				if ((int)sub_14024BFA0() >= 0)
				{
					v12 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C643C8 + 24i64))(
						qword_140C643C8,
						v11);
				LABEL_17:
					if (v12)
					{
						v13 = _mm_mul_ps(
							_mm_add_ps(
								(__m128)xmmword_140B7AC50,
								_mm_mul_ps(
									_mm_shuffle_ps(v2, v2, 136),
									_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
							(__m128)xmmword_140B7B490);
						v14 = (int)_mm_shuffle_ps(v13, v13, 85).m128_f32[0];
						if ((int)v13.m128_f32[0] >= v12[2] && (int)v13.m128_f32[0] < v12[4] && v14 >= v12[3] && v14 < v12[5])
						{
							v5 = v6;
							break;
						}
					}
				}
			LABEL_22:
				v7 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			}
		LABEL_23:
			++v6;
		} while (v6 < *(_DWORD*)(a1 + 272));
	}
	if (*(_DWORD*)(a1 + 48) != 3)
	{
		if (v5)
		{
			v27[0] = (__m128*)sub_1405B0600(a1, v26);
			sub_1401AFC20((__int64*)v27, v25);
			v15 = v25;
		}
		else
		{
			v27[0] = (__m128*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 280) + 56i64))(*(_QWORD*)(a1 + 280));
			sub_1401AFC20((__int64*)v27, v22);
			v15 = v22;
		}
		v27[1] = (__m128*)v15;
		v27[0] = a2;
		sub_1401AFB10(v27, v23);
		v16 = (__int64(__fastcall*)(wchar_t**, __int64, __int64))qword_140C63840;
		if (qword_140C63840)
		{
			v17 = qword_140C63840(off_140A6A408, 1099i64, qword_140C63858);
		}
		else
		{
			if (dword_140C638AC)
			{
			LABEL_38:
				v18 = -80.0;
			LABEL_39:
				if (v16)
				{
					v19 = v16(off_140A6A408, 1099i64, qword_140C63858);
				}
				else
				{
					if (dword_140C638AC || (int)sub_1401FFFC0() < 0)
						goto LABEL_46;
					v19 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(
						qword_140C64C58,
						1099i64);
				}
				if (v19)
				{
					v20 = *(float*)(v19 + 28);
				LABEL_47:
					if (v24 <= v18 && v24 > v20)
						return 0;
					return v5;
				}
			LABEL_46:
				v20 = -300.0;
				goto LABEL_47;
			}
			if ((int)sub_1401FFFC0() < 0)
			{
			LABEL_37:
				v16 = (__int64(__fastcall*)(wchar_t**, __int64, __int64))qword_140C63840;
				goto LABEL_38;
			}
			v17 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64C58 + 24i64))(qword_140C64C58, 1099i64);
		}
		if (v17)
		{
			v18 = *(float*)(v17 + 24);
			v16 = (__int64(__fastcall*)(wchar_t**, __int64, __int64))qword_140C63840;
			goto LABEL_39;
		}
		goto LABEL_37;
	}
	return v5;
}
// 140A6A408: using guessed type wchar_t *off_140A6A408[2];
// 140A6A8D8: using guessed type wchar_t *off_140A6A8D8[2];
// 140A6E298: using guessed type wchar_t *off_140A6E298[2];
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638AC: using guessed type int dword_140C638AC;
// 140C63AB4: using guessed type int dword_140C63AB4;
// 140C63C30: using guessed type __int64 qword_140C63C30;
// 140C643C8: using guessed type __int64 qword_140C643C8;
// 140C64C58: using guessed type __int64 qword_140C64C58;
// 140C65340: using guessed type int dword_140C65340;
// 1405B0840: using guessed type __m256 var_D0[2];
// 1405B0840: using guessed type double var_110[8];
// 1405B0840: using guessed type __m128 anonymous_0[3];

