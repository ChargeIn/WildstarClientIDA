//----- (00000001400FFA10) ----------------------------------------------------
double __fastcall sub_1400FFA10(__int64 a1, int* a2, int* a3)
{
	__int64 v4; // rcx
	unsigned __int8 v7; // r12
	unsigned __int8 v8; // r15
	int v9; // r11d
	int v10; // r9d
	__int64* i; // rcx
	int v12; // r10d
	int v13; // r14d
	double result; // xmm0_8
	int v15; // edx
	int v16; // r8d
	int* j; // rcx
	int v18; // edi
	int v19; // ebx
	int v20; // r15d
	int v21; // r9d
	int v22; // r12d
	int v23; // r8d
	int v24; // r8d
	bool v25; // zf
	int v26; // ebx
	int v27; // edi
	int v28; // ebx
	__int64 v29; // rax
	__int64 v30; // rsi
	_DWORD* v31; // rax
	int v32; // r14d
	__int64 v33; // rax
	unsigned __int8 v34; // bl
	_BYTE* v35; // r10
	unsigned __int8 v36; // al
	int v37; // [rsp+30h] [rbp-19h] BYREF
	__int64 v38; // [rsp+38h] [rbp-11h] BYREF
	int v39; // [rsp+40h] [rbp-9h]
	int v40; // [rsp+44h] [rbp-5h]
	_DWORD v41[6]; // [rsp+50h] [rbp+7h] BYREF

	v4 = *(_QWORD*)a1;
	if (!v4 || !sub_1400FE790(v4))
		return 0.0;
	v7 = *(_BYTE*)(a1 + 58);
	sub_1400FF140((_DWORD*)(a1 + 8), (_DWORD*)(a1 + 32), a2, v41, 1, v7);
	v8 = *(_BYTE*)(a1 + 57);
	sub_1400FF140((_DWORD*)(a1 + 8), (_DWORD*)(a1 + 32), a2, &v38, 0, v8);
	v9 = a3[1];
	v10 = 0;
	for (i = &v38; ; i = (__int64*)((char*)i + 4))
	{
		v12 = *(_DWORD*)i;
		if (v9 >= *(_DWORD*)i)
		{
			v13 = *((_DWORD*)i + 1);
			if (v9 < v13)
				break;
		}
		if ((unsigned __int64)++v10 >= 5)
			return 0.0;
	}
	v15 = *a3;
	v16 = 0;
	for (j = v41; ; ++j)
	{
		v18 = *j;
		if (v15 >= *j)
		{
			v19 = j[1];
			if (v15 < v19)
				break;
		}
		if ((unsigned __int64)++v16 >= 5)
			return 0.0;
	}
	if (v8)
	{
		v20 = *(_DWORD*)(a1 + 4 * (12i64 - v10));
		v21 = *(_DWORD*)(a1 + 4 * (13i64 - v10));
	}
	else
	{
		v20 = *(_DWORD*)(a1 + 4i64 * v10 + 32);
		v21 = *(_DWORD*)(a1 + 4i64 * v10 + 36);
	}
	if (v7)
	{
		v22 = *(_DWORD*)(a1 + 4 * (6i64 - v16));
		v23 = *(_DWORD*)(a1 + 4 * (7i64 - v16));
	}
	else
	{
		v22 = *(_DWORD*)(a1 + 4i64 * v16 + 8);
		v23 = *(_DWORD*)(a1 + 4i64 * v16 + 12);
	}
	v24 = v23 - v22;
	v25 = *(_BYTE*)(a1 + 56) == 0;
	LODWORD(v38) = *j;
	HIDWORD(v38) = v12;
	v39 = v19;
	v40 = v13;
	if (v25)
	{
		v27 = v22 + (v15 - v18) % v24;
		v28 = v20 + (v9 - v12) % (v21 - v20);
	}
	else
	{
		v26 = v19 - v18;
		if (v26 == v24 && v13 - v12 == v21 - v20)
		{
			v27 = v15 - v18 + v22;
			v28 = v20 + v9 - v12;
		}
		else
		{
			v27 = v22 + (int)(float)((float)((float)v24 / (float)v26) * (float)(v15 - v18));
			v28 = v20 + (int)(float)((float)((float)(v21 - v20) / (float)(v13 - v12)) * (float)(v9 - v12));
		}
	}
	if (v27 < 0)
		return 0.0;
	if (v28 < 0)
		return 0.0;
	v29 = sub_1400FE790(*(_QWORD*)a1);
	v30 = v29;
	if (!v29)
		return 0.0;
	v31 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 24i64))(v29);
	v32 = v31[6];
	if ((unsigned int)v27 >= v31[1] || (unsigned int)v28 >= v31[2])
		return 0.0;
	if (v32 != 15 && v32)
	{
		*(_QWORD*)&result = 1065353216i64;
		return result;
	}
	v37 = 0;
	v33 = (*(__int64(__fastcall**)(__int64, _QWORD, int*, __int64))(*(_QWORD*)v30 + 72i64))(v30, 0i64, &v37, 1i64);
	if (!v33)
		return 0.0;
	if (v32)
	{
		v38 = 0i64;
		v35 = (_BYTE*)((unsigned int)(v37 * (v28 / 4) + 16 * (v27 / 4)) + v33);
		v36 = v35[1];
		LOBYTE(v38) = *v35;
		BYTE1(v38) = v36;
		if ((unsigned __int8)v38 <= v36)
		{
			HIWORD(v38) = -256;
			BYTE2(v38) = (char)(v36 + 4 * v38) / 5;
			BYTE3(v38) = (char)(3 * v38 + 2 * v36) / 5;
			BYTE4(v38) = (char)(3 * v36 + 2 * v38) / 5;
			BYTE5(v38) = ((unsigned __int8)v38 + 4 * v36) / 5;
		}
		else
		{
			BYTE2(v38) = (char)(v36 + 6 * v38) / 7;
			BYTE3(v38) = (char)(5 * v38 + 2 * v36) / 7;
			BYTE4(v38) = (char)(3 * v36 + 4 * v38) / 7;
			BYTE5(v38) = (char)(3 * v38 + 4 * v36) / 7;
			BYTE6(v38) = (char)(5 * v36 + 2 * v38) / 7;
			HIBYTE(v38) = ((unsigned __int8)v38 + 6 * v36) / 7;
		}
		v34 = *((_BYTE*)&v38 + ((*(_QWORD*)v35 >> 16 >> (3 * (v27 % 4 + 4 * (unsigned __int8)(v28 % 4)))) & 7i64));
	}
	else
	{
		v34 = *(_BYTE*)(v33 + (unsigned int)(v28 * v37) + 4i64 * v27 + 3);
	}
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v30 + 80i64))(v30, 0i64);
	*(_QWORD*)&result = COERCE_UNSIGNED_INT((float)v34);
	*(float*)&result = *(float*)&result * 0.0039215689;
	return result;
}
// 1400FFA10: using guessed type _DWORD var_50[6];

