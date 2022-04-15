//----- (000000014045E9E0) ----------------------------------------------------
__int64 __fastcall sub_14045E9E0(__int64 a1, int a2, int a3)
{
	int v6; // eax
	__int64 v7; // rax
	float v8; // xmm0_4
	__int64 v9; // rax
	float v10; // xmm0_4
	__int64 v11; // rax
	float v12; // xmm0_4
	float v13; // xmm6_4
	float v14; // xmm1_4
	__int64 v15; // rcx
	__int64 v16; // rdi
	__int64 result; // rax
	__int64* v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21[2]; // [rsp+28h] [rbp-19h] BYREF
	float v22; // [rsp+38h] [rbp-9h]
	__int64 v23; // [rsp+3Ch] [rbp-5h]
	__int64 v24[5]; // [rsp+44h] [rbp+3h] BYREF

	v6 = dword_140DC2928;
	if ((dword_140DC2928 & 1) == 0)
	{
		dword_140DC2928 |= 1u;
		v7 = sub_140200220(0x3BAu);
		if (v7)
			v8 = *(float*)(v7 + 24);
		else
			v8 = 10.0;
		v6 = dword_140DC2928;
		*(float*)&dword_140DC292C = v8 * 0.0099999998;
	}
	if ((v6 & 2) == 0)
	{
		dword_140DC2928 = v6 | 2;
		v9 = sub_140200220(0x3BAu);
		if (v9)
			v10 = *(float*)(v9 + 28);
		else
			v10 = 67.0;
		v6 = dword_140DC2928;
		*(float*)&dword_140DC2930 = v10 * 0.0099999998;
	}
	if ((v6 & 4) == 0)
	{
		dword_140DC2928 = v6 | 4;
		v11 = sub_140200220(0x3BAu);
		if (v11)
			v12 = *(float*)(v11 + 32);
		else
			v12 = 33.0;
		*(float*)&dword_140DC2934 = v12 * 0.0099999998;
	}
	v13 = (float)a2
		/ (float)((float)(*(int(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1) * *(float*)&dword_140DC292C);
	if (v13 < 1.0)
	{
		v13 = v13 * *(float*)&dword_140DC2930;
		if (v13 < *(float*)&dword_140DC2934)
			v13 = *(float*)&dword_140DC2934;
	}
	v14 = fminf(fmaxf(*(float*)(a1 + 13772), v13), 1.0);
	if (v14 > *(float*)(a1 + 13772))
	{
		*(float*)(a1 + 13772) = v14;
		if (*(_DWORD*)(a1 + 4856))
		{
			if (v14 > 0.0000099999997)
			{
				v15 = *(_QWORD*)(a1 + 5864);
				v22 = v14;
				v21[0] = 252i64;
				v21[1] = 1065353216i64;
				v23 = 3i64;
				(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v15 + 600i64))(v15, 11i64, v21);
			}
		}
	}
	v16 = qword_140C65898;
	result = *(_QWORD*)(qword_140C65898 + 120);
	if (a1 == result)
	{
		*(float*)(a1 + 13768) = fminf(fmaxf(*(float*)(a1 + 13768), v13), 1.0);
		v18 = *(__int64**)(v16 + 29112);
		v19 = *v18;
		if (v13 < 1.0)
		{
			result = (*(__int64(__fastcall**)(__int64*, __int64))(v19 + 408))(v18, 7717i64);
			if (!(_DWORD)result)
				return result;
			v24[0] = 7717i64;
		}
		else
		{
			result = (*(__int64(__fastcall**)(__int64*, __int64))(v19 + 408))(v18, 7718i64);
			if (!(_DWORD)result)
				return result;
			v24[0] = 7718i64;
		}
		v20 = *(_QWORD*)(v16 + 29112);
		v24[1] = 1065353216i64;
		v24[2] = 0i64;
		v24[3] = 0i64;
		return (*(__int64(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v20 + 584i64))(v20, 5i64, v24);
	}
	else if (result)
	{
		if (a3 == *(_DWORD*)(result + 8))
			*(float*)(a1 + 13768) = fminf(fmaxf(*(float*)(a1 + 13768), v13), 1.0);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC2928: using guessed type int dword_140DC2928;
// 140DC292C: using guessed type int dword_140DC292C;
// 140DC2930: using guessed type int dword_140DC2930;
// 140DC2934: using guessed type int dword_140DC2934;

