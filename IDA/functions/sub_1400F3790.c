//----- (00000001400F3790) ----------------------------------------------------
__int64 sub_1400F3790(__int64 a1, LARGE_INTEGER a2, int a3, __int64 a4, __int64 a5, __int64 a6, _BYTE* a7, ...)
{
	_QWORD* v10; // rbx
	unsigned __int8 v11; // r12
	__int64 v12; // rcx
	unsigned __int64 v13; // rdx
	__int64 v14; // r8
	__int64 v15; // rax
	__int64 v16; // rcx
	unsigned __int64 v17; // rax
	__int64 v18; // r15
	__int64 v19; // rax
	__int64 v20; // r8
	__int64 v21; // rcx
	_QWORD* v22; // rax
	int v23; // r13d
	__int64 v24; // rcx
	__int64 v25; // rdi
	_QWORD* v26; // r10
	char v27; // bl
	_QWORD* v28; // rax
	__int64 v29; // r10
	__int64 v30; // rdx
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64 v33; // r11
	__int64 v34; // rdx
	_DWORD* v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rcx
	_DWORD* v38; // rax
	_BYTE* v39; // rsi
	int v40; // r13d
	int v41; // eax
	_BYTE* v42; // rbx
	int v43; // r13d
	_BYTE* v44; // r15
	__int64 v45; // rcx
	__int64 v46; // r13
	__int64 v47; // rbx
	int v48; // edx
	int v49; // edx
	__int64 v50; // rcx
	unsigned __int64 v51; // rax
	int v52; // ebx
	int v53; // ebx
	__int64 v54; // rdx
	__int64 i; // r8
	unsigned int j; // edi
	__int64 v57; // rcx
	int v58; // ebx
	__int64 v59; // rdx
	__int64 k; // r8
	__int64 v61; // rdx
	__int64 m; // r8
	int v64; // [rsp+30h] [rbp-79h]
	__int64(__fastcall * *v65)(); // [rsp+38h] [rbp-71h] BYREF
	__int64 v66; // [rsp+40h] [rbp-69h]
	LPVOID lpTlsValue; // [rsp+48h] [rbp-61h]
	__int64 v68[2]; // [rsp+50h] [rbp-59h] BYREF
	__int64(__fastcall * *v69)(); // [rsp+60h] [rbp-49h] BYREF
	__int64 v70; // [rsp+68h] [rbp-41h]
	LPVOID v71; // [rsp+70h] [rbp-39h]
	__int64 v72; // [rsp+80h] [rbp-29h]
	int v73[2]; // [rsp+88h] [rbp-21h]
	__int64 TlsValue[2]; // [rsp+90h] [rbp-19h] BYREF
	LPVOID Value; // [rsp+A0h] [rbp-9h]
	__int64 v76; // [rsp+A8h] [rbp-1h]
	__int64 v77; // [rsp+F0h] [rbp+47h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+F8h] [rbp+4Fh]
	__int64 v79; // [rsp+108h] [rbp+5Fh]
	va_list va; // [rsp+128h] [rbp+7Fh] BYREF

	va_start(va, a7);
	v79 = a4;
	PerformanceCount = a2;
	TlsValue[0] = (__int64)&off_140B5E648;
	TlsValue[1] = (__int64)L"Function";
	Value = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, TlsValue);
	v76 = a4;
	v10 = *(_QWORD**)(a1 + 16);
	TlsValue[0] = (__int64)off_140B56848;
	if (!v10)
	{
		v11 = 0;
		goto LABEL_78;
	}
	v12 = 0i64;
	v13 = *(_QWORD*)(qword_140C63650 + 768);
	if (v13)
	{
		v14 = *(_QWORD*)(qword_140C63650 + 760);
		v15 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v14 + 8 * v15) + 400i64) != v10)
		{
			v12 = (unsigned int)(v12 + 1);
			v15 = (unsigned int)v12;
			if ((unsigned int)v12 >= v13)
				goto LABEL_7;
		}
		v21 = *(_QWORD*)(v14 + 8 * v12);
		if (v21)
		{
			if (*(_BYTE*)(v21 + 2825))
			{
				v11 = 1;
				goto LABEL_78;
			}
		}
	}
LABEL_7:
	v16 = v10[4];
	v17 = *(_QWORD*)(v16 + 112);
	v64 = 1;
	v18 = (__int64)(v10[2] - v10[3]) >> 4;
	v72 = v18;
	if (*(_QWORD*)(v16 + 120) >= v17)
		sub_14005E2C0((__int64)v10);
	v19 = v10[5];
	if (v19 == v10[10])
		v20 = v10[15];
	else
		v20 = *(_QWORD*)(**(_QWORD**)(v19 + 8) + 24i64);
	v22 = sub_140060AB0((__int64)v10, 0, v20);
	v23 = 0;
	v22[4] = sub_1400F3FF0;
	v24 = v10[2];
	LODWORD(v25) = 0;
	*(_QWORD*)v24 = v22;
	*(_DWORD*)(v24 + 8) = 6;
	v10[2] += 16i64;
	v26 = *(_QWORD**)(a1 + 16);
	v27 = 0;
	v11 = 1;
	*(_QWORD*)v73 = (__int64)(v26[2] - v26[3]) >> 4;
	if (a3 == -2)
		goto LABEL_23;
	v28 = sub_14005C3C0(*(_QWORD*)(v26[4] + 160i64), a3);
	v30 = *(_QWORD*)(v29 + 16);
	*(_QWORD*)v30 = *v28;
	*(_DWORD*)(v30 + 8) = *((_DWORD*)v28 + 2);
	*(_QWORD*)(v29 + 16) += 16i64;
	v31 = *(_QWORD*)(a1 + 16);
	v32 = *(_QWORD*)(v31 + 16) - 16i64;
	if (v32 == v33 || *(_DWORD*)(v32 + 8) != 5)
		goto LABEL_23;
	sub_140058890(v31, -1);
	v34 = *(_QWORD*)(a1 + 16);
	v64 = 2;
	v35 = (_DWORD*)(*(_QWORD*)(v34 + 16) - 16i64);
	if (v35 == dword_140A12138 || v35[2])
		v27 = 1;
	v36 = *(_QWORD*)(v34 + 16);
	v23 = 1;
	*(_QWORD*)v36 = *(_QWORD*)(v36 - 32);
	*(_DWORD*)(v36 + 8) = *(_DWORD*)(v36 - 24);
	*(_QWORD*)(v34 + 16) += 16i64;
	if (!v27)
	{
	LABEL_23:
		sub_140058890(*(_QWORD*)(a1 + 16), -10002);
		v37 = *(_QWORD*)(a1 + 16);
		v38 = (_DWORD*)(*(_QWORD*)(v37 + 16) - 16i64);
		if (v38 == dword_140A12138 || v38[2] != 6)
		{
			sub_1400582A0(v37, v18);
		LABEL_77:
			v11 = 0;
			goto LABEL_78;
		}
	}
	v39 = 0i64;
	v40 = sub_1400D62A0(*(_QWORD**)(a1 + 16), a5) + v23;
	v41 = sub_1400D62A0(*(_QWORD**)(a1 + 16), a6);
	v42 = a7;
	v43 = v41 + v40;
	v44 = a7;
	LODWORD(v77) = v43;
	if (*a7)
	{
		do
		{
			if (v39)
			{
				v43 = v77;
				goto LABEL_53;
			}
			v45 = (char)*v44;
			v46 = *(_QWORD*)(a1 + 8 * v45 + 40);
			if (v46)
			{
				v47 = *(_QWORD*)(a1 + 16);
				if (((__int64)(*(_QWORD*)(v47 + 16) - *(_QWORD*)(v47 + 24)) >> 4) + 1 > 8000)
				{
					v66 = 0i64;
					v65 = &off_140B5E648;
					lpTlsValue = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v65);
					v69 = v65;
					v70 = v66;
					v68[0] = 0x141D12A28i64;
					v71 = lpTlsValue;
					v52 = sub_140196F30(&dword_140C8A0D0, 13, v68, a7, &v69);
					v65 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue);
					if (v52)
						DebugBreak();
					v11 = 0;
				}
				else
				{
					if ((__int64)(*(_QWORD*)(v47 + 56) - *(_QWORD*)(v47 + 16)) <= 16)
					{
						v48 = *(_DWORD*)(v47 + 88);
						if (v48 < 1)
							v49 = v48 + 1;
						else
							v49 = 2 * v48;
						sub_140061210(*(_QWORD*)(a1 + 16), v49);
					}
					v50 = *(_QWORD*)(v47 + 40);
					v51 = *(_QWORD*)(v47 + 16) + 16i64;
					if (*(_QWORD*)(v50 + 16) < v51)
						*(_QWORD*)(v50 + 16) = v51;
				}
				(*(void(__fastcall**)(__int64, _QWORD, char*))(*(_QWORD*)v46 + 8i64))(v46, *(_QWORD*)(a1 + 16), va);
				v42 = a7;
				v43 = v77 + 1;
				LODWORD(v77) = v77 + 1;
			}
			else
			{
				if ((_BYTE)v45 == 62)
				{
					v39 = v44 + 1;
				}
				else
				{
					v66 = 0i64;
					v65 = &off_140B5E648;
					lpTlsValue = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v65);
					v69 = v65;
					v68[0] = 0x141D12A68i64;
					v70 = v66;
					v71 = lpTlsValue;
					v53 = sub_140196F30(&dword_140C8A0C4, 13, v68, v42, &v69);
					v65 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue);
					if (v53)
						DebugBreak();
					v42 = a7;
					v11 = 0;
				}
				v43 = v77;
			}
			++v44;
		} while (*v44);
		if (!v39)
			goto LABEL_47;
	LABEL_53:
		v25 = -1i64;
		do
			++v25;
		while (v39[v25]);
		v64 += v25;
	}
LABEL_47:
	if (!(unsigned __int8)sub_1400F2730(a1, v43, v25, v73[0], PerformanceCount, v79))
	{
		v54 = *(_QWORD*)(a1 + 16);
		if ((int)v72 < 0)
		{
			*(_QWORD*)(v54 + 16) += 16i64 * ((int)v72 + 1);
		}
		else
		{
			for (i = 16i64 * (int)v72;
				*(_QWORD*)(v54 + 16) < (unsigned __int64)(i + *(_QWORD*)(v54 + 24));
				*(_QWORD*)(v54 + 16) += 16i64)
			{
				*(_DWORD*)(*(_QWORD*)(v54 + 16) + 8i64) = 0;
			}
			*(_QWORD*)(v54 + 16) = i + *(_QWORD*)(v54 + 24);
		}
		goto LABEL_77;
	}
	for (j = -(int)v25; v39; v42 = a7)
	{
		if (!*v39)
			break;
		v57 = *(_QWORD*)(a1 + 8i64 * (char)*v39 + 40);
		if (v57)
		{
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, char*))(*(_QWORD*)v57 + 16i64))(
				v57,
				*(_QWORD*)(a1 + 16),
				j++,
				va);
			++v39;
		}
		else
		{
			++v39;
			v65 = &off_140B5E648;
			v66 = 0i64;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v65);
			v69 = v65;
			v70 = v66;
			v71 = lpTlsValue;
			v77 = 0x141D12B40i64;
			v58 = sub_140196F30(&dword_140C8A0C0, 13, &v77, v79, v42, &v69);
			v65 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v58)
				DebugBreak();
			v11 = 0;
			++j;
		}
	}
	v59 = *(_QWORD*)(a1 + 16);
	if (-1 - v64 < 0)
	{
		*(_QWORD*)(v59 + 16) += 16i64 * -v64;
	}
	else
	{
		for (k = 16i64 * (-1 - v64);
			*(_QWORD*)(v59 + 16) < (unsigned __int64)(k + *(_QWORD*)(v59 + 24));
			*(_QWORD*)(v59 + 16) += 16i64)
		{
			*(_DWORD*)(*(_QWORD*)(v59 + 16) + 8i64) = 0;
		}
		*(_QWORD*)(v59 + 16) = k + *(_QWORD*)(v59 + 24);
	}
	v61 = *(_QWORD*)(a1 + 16);
	if ((_DWORD)v72 != (unsigned int)((__int64)(*(_QWORD*)(v61 + 16) - *(_QWORD*)(v61 + 24)) >> 4))
	{
		if ((int)v72 < 0)
		{
			*(_QWORD*)(v61 + 16) += 16i64 * ((int)v72 + 1);
		}
		else
		{
			for (m = 16i64 * (int)v72;
				*(_QWORD*)(v61 + 16) < (unsigned __int64)(m + *(_QWORD*)(v61 + 24));
				*(_QWORD*)(v61 + 16) += 16i64)
			{
				*(_DWORD*)(*(_QWORD*)(v61 + 16) + 8i64) = 0;
			}
			*(_QWORD*)(v61 + 16) = m + *(_QWORD*)(v61 + 24);
		}
	}
LABEL_78:
	TlsValue[0] = (__int64)&off_140B5E648;
	TlsSetValue(dwTlsIndex, Value);
	return v11;
}
// 1400F3928: variable 'v29' is possibly undefined
// 1400F3950: variable 'v33' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A183D0: using guessed type wchar_t aFunction_1[9];
// 140B56848: using guessed type __int64 (__fastcall *off_140B56848[51])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C8A0C0: using guessed type _DWORD dword_140C8A0C0;
// 140C8A0C4: using guessed type _DWORD dword_140C8A0C4;
// 140C8A0D0: using guessed type _DWORD dword_140C8A0D0;

