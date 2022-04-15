//----- (000000014016C0C0) ----------------------------------------------------
__int64 __fastcall sub_14016C0C0(_QWORD* a1)
{
	unsigned __int64 v2; // rdx
	unsigned int v3; // ecx
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	float* v12; // rsi
	__int64 v13; // rbp
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // eax
	float v17; // xmm6_4
	int v18; // ebx
	_QWORD* v19; // rax
	__int64 v20; // rcx
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // r8
	__int64 v23; // rax
	__int64* v24; // rax
	float v25; // xmm6_4
	_QWORD* v26; // rax
	__int64 v27; // r11
	unsigned __int64* v28; // rdx
	unsigned __int64 v29; // r8
	__int64 v30; // rax
	__int64* v31; // rax
	__int64 v32; // rdx
	_QWORD* v33; // rax
	__int64 v34; // r11
	__int64 v35; // r9
	int v36; // r8d
	__int64 v37; // rdx
	__int64(__fastcall * *v38)(); // [rsp+20h] [rbp-58h] BYREF
	int v39; // [rsp+28h] [rbp-50h]
	_QWORD* v40; // [rsp+30h] [rbp-48h]
	int v41; // [rsp+38h] [rbp-40h]
	__int64 v42; // [rsp+40h] [rbp-38h] BYREF
	__int64 v43; // [rsp+48h] [rbp-30h]

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD**)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v3;
		} while (v3 < v2);
	}
	v5 = sub_1400D66A0(a1, 1u);
	v6 = v5;
	if (!v5 || (*(_BYTE*)(v5 + 432) & 8) == 0)
		return 0i64;
	v8 = a1[4];
	v38 = off_140B569F0;
	v9 = *(_QWORD*)(v8 + 112);
	v40 = a1;
	v41 = 1;
	if (*(_QWORD*)(v8 + 120) >= v9)
		sub_14005E2C0((__int64)a1);
	v10 = a1[2];
	v11 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	a1[2] += 16i64;
	v39 = sub_1400578C0((__int64)a1);
	v12 = (float*)(v6 + 1348);
	v13 = 4i64;
	do
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v14 = a1[2];
		v15 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v14 + 8) = 5;
		*(_QWORD*)v14 = v15;
		a1[2] += 16i64;
		v16 = sub_1400578C0((__int64)a1);
		v17 = *(v12 - 1);
		v18 = v16;
		v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		v20 = a1[2];
		*(_QWORD*)v20 = *v19;
		*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
		a1[2] += 16i64;
		v21 = (unsigned __int64*)sub_14018F0E0(&v42, L"nX")[1];
		if (v21)
		{
			v22 = -1i64;
			do
				++v22;
			while (*((_BYTE*)v21 + v22));
			sub_140058710((__int64)a1, v21, v22);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v43)
			sub_14018B900(v43, 0);
		v23 = a1[2];
		*(_DWORD*)(v23 + 8) = 3;
		*(double*)v23 = v17;
		a1[2] += 16i64;
		v24 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v24, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v25 = *v12;
		v26 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v18);
		*(_QWORD*)v27 = *v26;
		*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
		a1[2] += 16i64;
		v28 = (unsigned __int64*)sub_14018F0E0(&v42, L"nY")[1];
		if (v28)
		{
			v29 = -1i64;
			do
				++v29;
			while (*((_BYTE*)v28 + v29));
			sub_140058710((__int64)a1, v28, v29);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v43)
			sub_14018B900(v43, 0);
		v30 = a1[2];
		*(_DWORD*)(v30 + 8) = 3;
		*(double*)v30 = v25;
		a1[2] += 16i64;
		v31 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v31, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		sub_1400FB1D0((__int64)&v38);
		sub_1400579E0((__int64)a1, v32, v18);
		v12 += 4;
		--v13;
	} while (v13);
	v33 = sub_14005C3C0(*(_QWORD*)(v40[4] + 160i64), v39);
	v35 = *(_QWORD*)(v34 + 16);
	v36 = v39;
	*(_QWORD*)v35 = *v33;
	v37 = *((unsigned int*)v33 + 2);
	*(_DWORD*)(v35 + 8) = v37;
	*(_QWORD*)(v34 + 16) += 16i64;
	sub_1400579E0(v34, v37, v36);
	return 1i64;
}
// 14016C302: variable 'v27' is possibly undefined
// 14016C3AB: variable 'v32' is possibly undefined
// 14016C3D6: variable 'v34' is possibly undefined
// 1409E17FC: using guessed type wchar_t aNx[3];
// 1409E1854: using guessed type wchar_t aNy[3];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;

