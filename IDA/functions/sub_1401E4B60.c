//----- (00000001401E4B60) ----------------------------------------------------
__int64 __fastcall sub_1401E4B60(
	__int64 a1,
	__int64 a2,
	_DWORD* a3,
	unsigned int a4,
	signed int a5,
	int a6,
	unsigned int a7,
	int a8)
{
	__int64 v10; // r13
	__int64 v11; // rsi
	__int64 result; // rax
	int v13; // eax
	unsigned int v14; // ecx
	__int64 v15; // rax
	int v16; // eax
	_QWORD* v17; // r9
	unsigned __int64 v18; // rax
	__m128i* v19; // rcx
	unsigned __int64 v20; // rax
	__m128i* v21; // rsi
	unsigned __int64 v22; // rax
	__m128i* v23; // rbp
	unsigned __int64 v24; // rax
	__m128i* v25; // rbx
	_QWORD* v26; // r9
	unsigned __int64 v27; // rax
	unsigned __int64 v28; // rax
	unsigned __int64 v29; // rax
	unsigned __int64 v30; // rax
	__int64 v31; // rax
	__int64 v32; // rax
	int v33; // r13d
	__int64 v34; // rax
	__int64 v35; // rax
	_QWORD* v36; // rdi

	*(_DWORD*)a1 = a4;
	v10 = a2;
	v11 = sub_1401F53E0(a4);
	if (!v11)
		return 2147500037i64;
	v13 = a3[2];
	if (v13 >= 0)
	{
		if (*(_QWORD*)a3 && (v14 = *(_DWORD*)(*(_QWORD*)a3 + 244i64)) != 0)
		{
			v15 = sub_14020B8E0(v14);
			*(_DWORD*)(a1 + 4) = sub_1401DC0D0(v15);
		}
		else
		{
			*(_DWORD*)(a1 + 4) = 0;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 4) = v13;
	}
	v16 = *(_DWORD*)(v11 + 16);
	if (!v16)
	{
	LABEL_33:
		v26 = *(_QWORD**)a3;
		v27 = *(_QWORD*)(*(_QWORD*)a3 + 152i64);
		if (v27)
		{
			if (v27 <= qword_140C3FE70)
				v19 = (__m128i*)(qword_140C3FE68 + v27);
			else
				v19 = 0i64;
		}
		else
		{
			v19 = 0i64;
		}
		v28 = v26[22];
		if (v28)
		{
			if (v28 <= qword_140C3FE70)
				v21 = (__m128i*)(qword_140C3FE68 + v28);
			else
				v21 = 0i64;
		}
		else
		{
			v21 = 0i64;
		}
		v29 = v26[20];
		if (v29)
		{
			if (v29 <= qword_140C3FE70)
				v23 = (__m128i*)(qword_140C3FE68 + v29);
			else
				v23 = 0i64;
		}
		else
		{
			v23 = 0i64;
		}
		v30 = v26[21];
		if (v30)
		{
			if (v30 <= qword_140C3FE70)
				v25 = (__m128i*)(qword_140C3FE68 + v30);
			else
				v25 = 0i64;
		}
		else
		{
			v25 = 0i64;
		}
		goto LABEL_53;
	}
	if (v16 != 1)
	{
		if ((unsigned int)(v16 - 2) > 1)
			return 2147500037i64;
		goto LABEL_33;
	}
	v17 = *(_QWORD**)a3;
	v18 = *(_QWORD*)(*(_QWORD*)a3 + 184i64);
	if (v18)
	{
		if (v18 <= qword_140C3FE70)
			v19 = (__m128i*)(qword_140C3FE68 + v18);
		else
			v19 = 0i64;
	}
	else
	{
		v19 = 0i64;
	}
	v20 = v17[26];
	if (v20)
	{
		if (v20 <= qword_140C3FE70)
			v21 = (__m128i*)(qword_140C3FE68 + v20);
		else
			v21 = 0i64;
	}
	else
	{
		v21 = 0i64;
	}
	v22 = v17[24];
	if (v22)
	{
		if (v22 <= qword_140C3FE70)
			v23 = (__m128i*)(v22 + qword_140C3FE68);
		else
			v23 = 0i64;
	}
	else
	{
		v23 = 0i64;
	}
	v24 = v17[25];
	if (v24)
	{
		if (v24 <= qword_140C3FE70)
			v25 = (__m128i*)(v24 + qword_140C3FE68);
		else
			v25 = 0i64;
	}
	else
	{
		v25 = 0i64;
	}
LABEL_53:
	if (a8)
	{
		if (v19->m128i_i16[0])
		{
			v31 = sub_1401DD6D0(v19, *(_DWORD*)a1, a5, a6);
			if (v31)
			{
				result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 136i64))(
					qword_140C65670,
					v31,
					0i64,
					512i64,
					0,
					0,
					a1 + 8);
				if ((int)result < 0)
					return result;
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 48i64))(*(_QWORD*)(a1 + 8), a7);
				v10 = a2;
			}
		}
	}
	if (*(int*)(a1 + 4) < 0)
	{
		if (v21->m128i_i16[0])
		{
			v32 = sub_1401DD6D0(v21, *(_DWORD*)a1, a5, a6);
			if (v32)
			{
				result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 136i64))(
					qword_140C65670,
					v32,
					0i64,
					512i64,
					0,
					0,
					a1 + 32);
				if ((int)result < 0)
					return result;
				(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 32) + 48i64))(*(_QWORD*)(a1 + 32), a7);
			}
		}
	}
	v33 = dword_140B602E8[*(int*)(v10 + 20)];
	if (v23->m128i_i16[0])
	{
		v34 = sub_1401DD6D0(v23, *(_DWORD*)a1, a5, a6);
		if (v34)
		{
			result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, int, __int64))(*(_QWORD*)qword_140C65670
				+ 136i64))(
					qword_140C65670,
					v34,
					0i64,
					512i64,
					0,
					v33,
					a1 + 16);
			if ((int)result < 0)
				return result;
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 48i64))(*(_QWORD*)(a1 + 16), a7);
		}
	}
	if (v25->m128i_i16[0])
	{
		v35 = sub_1401DD6D0(v25, *(_DWORD*)a1, a5, a6);
		if (v35)
		{
			v36 = (_QWORD*)(a1 + 24);
			result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, int, _QWORD*))(*(_QWORD*)qword_140C65670 + 136i64))(
				qword_140C65670,
				v35,
				0i64,
				512i64,
				0,
				v33,
				v36);
			if ((int)result < 0)
				return result;
			(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v36 + 48i64))(*v36, a7);
		}
	}
	return 0i64;
}
// 140B602E8: using guessed type _DWORD dword_140B602E8[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65670: using guessed type __int64 qword_140C65670;

