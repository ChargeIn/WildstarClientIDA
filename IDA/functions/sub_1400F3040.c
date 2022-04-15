//----- (00000001400F3040) ----------------------------------------------------
__int64 sub_1400F3040(__int64 a1, LARGE_INTEGER a2, int a3, __int64 a4, _BYTE* a5, ...)
{
	_QWORD* v8; // rbx
	unsigned __int8 v9; // r12
	__int64 v10; // rcx
	unsigned __int64 v11; // rdx
	__int64 v12; // r8
	__int64 v13; // rax
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // r15
	__int64 v17; // rax
	__int64 v18; // r8
	__int64 v19; // rcx
	_QWORD* v20; // rax
	int v21; // r13d
	__int64 v22; // rcx
	__int64 v23; // rdi
	_QWORD* v24; // r10
	char v25; // bl
	__int64 v26; // rax
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	__int64 v30; // rcx
	__int64 v31; // rax
	__int64 v32; // r11
	__int64 v33; // rdx
	_DWORD* v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rax
	__int64 v37; // rcx
	_DWORD* v38; // rax
	_BYTE* v39; // rbx
	_BYTE* v40; // rsi
	_BYTE* v41; // r15
	__int64 v42; // rcx
	__int64 v43; // r13
	__int64 v44; // rbx
	int v45; // edx
	int v46; // edx
	__int64 v47; // rcx
	unsigned __int64 v48; // rax
	int v49; // ebx
	int v50; // ebx
	__int64 v51; // rdx
	__int64 i; // r8
	unsigned int j; // edi
	__int64 v54; // rcx
	int v55; // ebx
	__int64 v56; // rdx
	__int64 k; // r8
	__int64 v58; // rdx
	__int64 m; // r8
	int v61; // [rsp+30h] [rbp-69h]
	__int64(__fastcall * *v62)(); // [rsp+38h] [rbp-61h] BYREF
	__int64 v63; // [rsp+40h] [rbp-59h]
	LPVOID lpTlsValue; // [rsp+48h] [rbp-51h]
	__int64 v65[2]; // [rsp+50h] [rbp-49h] BYREF
	__int64(__fastcall * *v66)(); // [rsp+60h] [rbp-39h] BYREF
	__int64 v67; // [rsp+68h] [rbp-31h]
	LPVOID v68; // [rsp+70h] [rbp-29h]
	__int64 v69; // [rsp+80h] [rbp-19h]
	int v70[2]; // [rsp+88h] [rbp-11h]
	__int64 TlsValue[2]; // [rsp+90h] [rbp-9h] BYREF
	LPVOID Value; // [rsp+A0h] [rbp+7h]
	__int64 v73; // [rsp+A8h] [rbp+Fh]
	__int64 v74; // [rsp+F0h] [rbp+57h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+F8h] [rbp+5Fh]
	__int64 v76; // [rsp+108h] [rbp+6Fh]
	va_list va; // [rsp+118h] [rbp+7Fh] BYREF

	va_start(va, a5);
	v76 = a4;
	PerformanceCount = a2;
	TlsValue[0] = (__int64)&off_140B5E648;
	TlsValue[1] = (__int64)L"Function";
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, TlsValue);
	v73 = a4;
	v8 = *(_QWORD**)(a1 + 16);
	TlsValue[0] = (__int64)off_140B56848;
	if (!v8)
	{
		v9 = 0;
		goto LABEL_78;
	}
	v10 = 0i64;
	v11 = *(_QWORD*)(qword_140C63650 + 768);
	if (v11)
	{
		v12 = *(_QWORD*)(qword_140C63650 + 760);
		v13 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v12 + 8 * v13) + 400i64) != v8)
		{
			v10 = (unsigned int)(v10 + 1);
			v13 = (unsigned int)v10;
			if ((unsigned int)v10 >= v11)
				goto LABEL_7;
		}
		v19 = *(_QWORD*)(v12 + 8 * v10);
		if (v19)
		{
			if (*(_BYTE*)(v19 + 2825))
			{
				v9 = 1;
				goto LABEL_78;
			}
		}
	}
LABEL_7:
	v14 = v8[4];
	v15 = *(_QWORD*)(v14 + 112);
	v61 = 1;
	v16 = (__int64)(v8[2] - v8[3]) >> 4;
	v69 = v16;
	if (*(_QWORD*)(v14 + 120) >= v15)
		sub_14005E2C0((__int64)v8);
	v17 = v8[5];
	if (v17 == v8[10])
		v18 = v8[15];
	else
		v18 = *(_QWORD*)(**(_QWORD**)(v17 + 8) + 24i64);
	v20 = sub_140060AB0((__int64)v8, 0, v18);
	v21 = 0;
	v20[4] = sub_1400F3FF0;
	v22 = v8[2];
	LODWORD(v23) = 0;
	*(_QWORD*)v22 = v20;
	*(_DWORD*)(v22 + 8) = 6;
	v8[2] += 16i64;
	v24 = *(_QWORD**)(a1 + 16);
	v25 = 0;
	v9 = 1;
	v26 = v24[2];
	LODWORD(v74) = 0;
	*(_QWORD*)v70 = (v26 - v24[3]) >> 4;
	if (a3 == -2)
		goto LABEL_23;
	v27 = sub_14005C3C0(*(_QWORD*)(v24[4] + 160i64), a3);
	v29 = *(_QWORD*)(v28 + 16);
	*(_QWORD*)v29 = *v27;
	*(_DWORD*)(v29 + 8) = *((_DWORD*)v27 + 2);
	*(_QWORD*)(v28 + 16) += 16i64;
	v30 = *(_QWORD*)(a1 + 16);
	v31 = *(_QWORD*)(v30 + 16) - 16i64;
	if (v31 == v32 || *(_DWORD*)(v31 + 8) != 5)
		goto LABEL_23;
	sub_140058890(v30, -1);
	v33 = *(_QWORD*)(a1 + 16);
	v61 = 2;
	v34 = (_DWORD*)(*(_QWORD*)(v33 + 16) - 16i64);
	if (v34 == dword_140A12138 || v34[2])
		v25 = 1;
	v35 = *(_QWORD*)(v33 + 16);
	v21 = 1;
	v36 = *(_QWORD*)(v35 - 32);
	LODWORD(v74) = 1;
	*(_QWORD*)v35 = v36;
	*(_DWORD*)(v35 + 8) = *(_DWORD*)(v35 - 24);
	*(_QWORD*)(v33 + 16) += 16i64;
	if (!v25)
	{
	LABEL_23:
		sub_140058890(*(_QWORD*)(a1 + 16), -10002);
		v37 = *(_QWORD*)(a1 + 16);
		v38 = (_DWORD*)(*(_QWORD*)(v37 + 16) - 16i64);
		if (v38 == dword_140A12138 || v38[2] != 6)
		{
			sub_1400582A0(v37, v16);
		LABEL_77:
			v9 = 0;
			goto LABEL_78;
		}
	}
	v39 = a5;
	v40 = 0i64;
	v41 = a5;
	if (*a5)
	{
		do
		{
			if (v40)
			{
				v21 = v74;
				goto LABEL_53;
			}
			v42 = (char)*v41;
			v43 = *(_QWORD*)(a1 + 8 * v42 + 40);
			if (v43)
			{
				v44 = *(_QWORD*)(a1 + 16);
				if (((__int64)(*(_QWORD*)(v44 + 16) - *(_QWORD*)(v44 + 24)) >> 4) + 1 > 8000)
				{
					v63 = 0i64;
					v62 = &off_140B5E648;
					lpTlsValue = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v62);
					v66 = v62;
					v67 = v63;
					v65[0] = 0x141D12AD8i64;
					v68 = lpTlsValue;
					v49 = sub_140196F30(&dword_140C8A0CC, 13, v65, a5, &v66);
					v62 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue);
					if (v49)
						DebugBreak();
					v9 = 0;
				}
				else
				{
					if ((__int64)(*(_QWORD*)(v44 + 56) - *(_QWORD*)(v44 + 16)) <= 16)
					{
						v45 = *(_DWORD*)(v44 + 88);
						if (v45 < 1)
							v46 = v45 + 1;
						else
							v46 = 2 * v45;
						sub_140061210(*(_QWORD*)(a1 + 16), v46);
					}
					v47 = *(_QWORD*)(v44 + 40);
					v48 = *(_QWORD*)(v44 + 16) + 16i64;
					if (*(_QWORD*)(v47 + 16) < v48)
						*(_QWORD*)(v47 + 16) = v48;
				}
				(*(void(__fastcall**)(__int64, _QWORD, char*))(*(_QWORD*)v43 + 8i64))(v43, *(_QWORD*)(a1 + 16), va);
				v39 = a5;
				v21 = v74 + 1;
				LODWORD(v74) = v74 + 1;
			}
			else
			{
				if ((_BYTE)v42 == 62)
				{
					v40 = v41 + 1;
				}
				else
				{
					v63 = 0i64;
					v62 = &off_140B5E648;
					lpTlsValue = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v62);
					v66 = v62;
					v65[0] = 0x141D12B18i64;
					v67 = v63;
					v68 = lpTlsValue;
					v50 = sub_140196F30(&dword_140C8A0C8, 13, v65, v39, &v66);
					v62 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue);
					if (v50)
						DebugBreak();
					v39 = a5;
					v9 = 0;
				}
				v21 = v74;
			}
			++v41;
		} while (*v41);
		if (!v40)
			goto LABEL_47;
	LABEL_53:
		v23 = -1i64;
		do
			++v23;
		while (v40[v23]);
		v61 += v23;
	}
LABEL_47:
	if (!(unsigned __int8)sub_1400F2730(a1, v21, v23, v70[0], PerformanceCount, v76))
	{
		v51 = *(_QWORD*)(a1 + 16);
		if ((int)v69 < 0)
		{
			*(_QWORD*)(v51 + 16) += 16i64 * ((int)v69 + 1);
		}
		else
		{
			for (i = 16i64 * (int)v69;
				*(_QWORD*)(v51 + 16) < (unsigned __int64)(i + *(_QWORD*)(v51 + 24));
				*(_QWORD*)(v51 + 16) += 16i64)
			{
				*(_DWORD*)(*(_QWORD*)(v51 + 16) + 8i64) = 0;
			}
			*(_QWORD*)(v51 + 16) = i + *(_QWORD*)(v51 + 24);
		}
		goto LABEL_77;
	}
	for (j = -(int)v23; v40; v39 = a5)
	{
		if (!*v40)
			break;
		v54 = *(_QWORD*)(a1 + 8i64 * (char)*v40 + 40);
		if (v54)
		{
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, char*))(*(_QWORD*)v54 + 16i64))(
				v54,
				*(_QWORD*)(a1 + 16),
				j++,
				va);
			++v40;
		}
		else
		{
			++v40;
			v62 = &off_140B5E648;
			v63 = 0i64;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v62);
			v66 = v62;
			v67 = v63;
			v74 = 0x141D129E0i64;
			v68 = lpTlsValue;
			v55 = sub_140196F30(&dword_140C8A0D4, 13, &v74, v76, v39, &v66);
			v62 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v55)
				DebugBreak();
			v9 = 0;
			++j;
		}
	}
	v56 = *(_QWORD*)(a1 + 16);
	if (-1 - v61 < 0)
	{
		*(_QWORD*)(v56 + 16) += 16i64 * -v61;
	}
	else
	{
		for (k = 16i64 * (-1 - v61);
			*(_QWORD*)(v56 + 16) < (unsigned __int64)(k + *(_QWORD*)(v56 + 24));
			*(_QWORD*)(v56 + 16) += 16i64)
		{
			*(_DWORD*)(*(_QWORD*)(v56 + 16) + 8i64) = 0;
		}
		*(_QWORD*)(v56 + 16) = k + *(_QWORD*)(v56 + 24);
	}
	v58 = *(_QWORD*)(a1 + 16);
	if ((_DWORD)v69 != (unsigned int)((__int64)(*(_QWORD*)(v58 + 16) - *(_QWORD*)(v58 + 24)) >> 4))
	{
		if ((int)v69 < 0)
		{
			*(_QWORD*)(v58 + 16) += 16i64 * ((int)v69 + 1);
		}
		else
		{
			for (m = 16i64 * (int)v69;
				*(_QWORD*)(v58 + 16) < (unsigned __int64)(m + *(_QWORD*)(v58 + 24));
				*(_QWORD*)(v58 + 16) += 16i64)
			{
				*(_DWORD*)(*(_QWORD*)(v58 + 16) + 8i64) = 0;
			}
			*(_QWORD*)(v58 + 16) = m + *(_QWORD*)(v58 + 24);
		}
	}
LABEL_78:
	TlsValue[0] = (__int64)&off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	return v9;
}
// 1400F31DC: variable 'v28' is possibly undefined
// 1400F3204: variable 'v32' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A18480: using guessed type wchar_t aFunction_0[9];
// 140B56848: using guessed type __int64 (__fastcall *off_140B56848[51])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C8A0C8: using guessed type _DWORD dword_140C8A0C8;
// 140C8A0CC: using guessed type _DWORD dword_140C8A0CC;
// 140C8A0D4: using guessed type _DWORD dword_140C8A0D4;

