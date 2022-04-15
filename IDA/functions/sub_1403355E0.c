//----- (00000001403355E0) ----------------------------------------------------
__int64 __fastcall sub_1403355E0(_QWORD* a1, unsigned int* a2, __int64 a3, unsigned __int64* a4, __int64* a5)
{
	void(__fastcall * v6)(__int64, __int64*, unsigned __int64*); // r9
	unsigned int v9; // r8d
	int* v10; // rsi
	int* v11; // rdi
	__int64 v12; // rax
	char* v14; // r14
	unsigned __int64 v15; // r15
	_BYTE* v16; // r14
	__int64 v17; // r9
	unsigned __int64 v19; // rax
	__int64 v20; // rax
	unsigned __int64 v21; // r15
	__int64 v22; // r8
	__int64 v23; // rdx
	int v24; // r14d
	float v25; // xmm1_4
	__int64(__fastcall * **v26)(); // rax
	__int64(__fastcall * *v27)(); // rax
	__int64 v28; // r9
	__int64(__fastcall * **v29)(); // rax
	__int64(__fastcall * *v30)(); // rax
	__int64 v31; // r9
	__int64 v32; // r8
	__int64(__fastcall * **v33)(); // rcx
	__int64 v34; // r9
	__int64 v35; // r8
	__int64(__fastcall * **v36)(); // rcx
	__int64 v37; // r9
	__int64* v38; // r14
	__int64 v39; // r8
	__int64* v40; // rax
	__int64 v41; // rax
	__int64 v42; // r9
	int v43; // ebx
	int* v44; // rax
	__int64 v45; // rcx
	__int64 v46; // rax
	__int64 v47; // rax
	__int64 v48; // r12
	__int64 v49; // rdx
	int v50; // r14d
	__int64 v51; // r8
	__int64* v52; // rax
	int v53; // eax
	__int64 v54; // r8
	__int64* v55; // rax
	int v56; // ebx
	__int64(__fastcall * v57)(_QWORD*, __int64); // rax
	__int64 v58; // r8
	__int64* v59; // rax
	__int64 v60; // rax
	__int64 v61; // r9
	__int64 v62; // r8
	__int64* v63; // rax
	__int64 v64; // rax
	__int64 v65; // r9
	__int64 v66; // r14
	__int64 v67; // r8
	__int64* v68; // r9
	__int64 v69; // r9
	__int64 v70; // rax
	__int64 v71; // [rsp+28h] [rbp-69h]
	__int64 v72; // [rsp+30h] [rbp-61h]
	__int64 v73; // [rsp+40h] [rbp-51h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+48h] [rbp-49h] BYREF
	int* v75; // [rsp+50h] [rbp-41h]
	LPVOID lpTlsValue; // [rsp+58h] [rbp-39h]
	__int64(__fastcall * *v77)(); // [rsp+60h] [rbp-31h] BYREF
	int* v78; // [rsp+68h] [rbp-29h]
	LPVOID v79; // [rsp+70h] [rbp-21h]
	__int64 v80; // [rsp+80h] [rbp-11h] BYREF
	__int64 v81; // [rsp+88h] [rbp-9h]
	unsigned __int64 v82; // [rsp+A0h] [rbp+Fh] BYREF
	__int64 v83; // [rsp+F8h] [rbp+67h] BYREF
	__int64 v84; // [rsp+100h] [rbp+6Fh]

	v84 = a3;
	v6 = (void(__fastcall*)(__int64, __int64*, unsigned __int64*)) * ((_QWORD*)a2 + 2);
	if (!v6)
	{
		v9 = *a2;
		if (qword_140C65828)
		{
			if (v9 < 3)
			{
				sub_14018EE90(&v77, (__int64)"Base Message Id #%d");
			}
			else
			{
				if (v9 < dword_140C1E564)
				{
					v10 = *(int**)(qword_140C65828 + 16i64 * (v9 - 3) + 8);
					if (v10)
					{
						v11 = 0i64;
						v12 = -1i64;
						while (*((_BYTE*)v10 + ++v12) != 0)
							;
						v14 = (char*)v10 + v12;
						v15 = v12;
						if (v12 != -2)
							v11 = sub_14018B280(v12 + 1, 0);
						sub_1407DB590(v11, v10, v15);
						v16 = (char*)v11 + v14 - (char*)v10;
						if (v16)
							*v16 = 0;
						goto LABEL_16;
					}
				}
				sub_14018EE90(&v77, (__int64)"Invalid or foreign Message Id #%d");
			}
		}
		else
		{
			sub_14018EE90(&v77, (__int64)"Message Id #%d");
		}
		v11 = v78;
	LABEL_16:
		v17 = *a2;
		v73 = 0x141DEC410i64;
		sub_1401A3130(11, 0, &v73, v17, v11);
		if (v11)
			sub_14018B900((__int64)v11, 0);
		return 2147500037i64;
	}
	v19 = *((_QWORD*)a2 + 1);
	v83 = 16i64;
	v82 = v19;
	v6(a3, &v83, &v82);
	v20 = v83;
	if (((a2[18] - 1) & 0xFFFFFFFD) != 0)
	{
		v20 = v83 + 32;
		v83 += 32i64;
	}
	v21 = (unsigned __int64)(v20 + 7) >> 3;
	if (a4)
		*a4 = v21;
	v22 = *a2;
	v23 = qword_140C65828;
	v24 = 131070;
	if ((unsigned int)v22 >= 3)
	{
		if ((unsigned int)v22 >= dword_140C1E564)
		{
			if (((WORD1(v22) - 1) & 0xFFFFFFFD) != 0)
				v24 = 0;
		}
		else if (*(_DWORD*)(qword_140C65828 + 16i64 * (unsigned int)(v22 - 3)))
		{
			v24 = *(_DWORD*)(qword_140C65828 + 16i64 * (unsigned int)(v22 - 3));
		}
	}
	v25 = (float)v24 * 2.0;
	if (v21 > (unsigned int)v24)
	{
		if (qword_140C65828)
		{
			v26 = (__int64(__fastcall***)())sub_140335F10(&v77, v22);
		}
		else
		{
			sub_14018EE90(&v77, (__int64)"Message Id #%d", v22);
			v26 = &v77;
		}
		v27 = v26[1];
		v28 = *a2;
		v73 = 0x141DEC590i64;
		sub_1401A3130(11, 0, &v73, v28, v27, v21, v24);
		if (v78)
		{
			sub_14018B900((__int64)v78, 0);
			return 1i64;
		}
		return 1i64;
	}
	if (v21 > (unsigned int)(int)(float)((float)v24 * 0.89999998))
	{
		if (qword_140C65828)
		{
			v29 = (__int64(__fastcall***)())sub_140335F10(&v77, v22);
		}
		else
		{
			sub_14018EE90(&v77, (__int64)"Message Id #%d", v22);
			v29 = &v77;
		}
		v30 = v29[1];
		v31 = *a2;
		v73 = 0x141DEC4A0i64;
		sub_1401A3130(11, 1, &v73, v31, v30, v21, v24);
		if (v78)
			sub_14018B900((__int64)v78, 0);
		v23 = qword_140C65828;
	}
	if (v21 > (unsigned int)(int)v25)
	{
		v32 = *a2;
		if (v23)
		{
			v33 = (__int64(__fastcall***)())sub_140335F10(&v77, v32);
		}
		else
		{
			sub_14018EE90(&v77, (__int64)"Message Id #%d", v32);
			v33 = &v77;
		}
		v34 = *a2;
		LODWORD(v72) = (int)v25;
		v73 = 0x141DEC750i64;
		sub_1401A3130(11, 0, &v73, v34, v33[1], v82, v72);
		if (v78)
			sub_14018B900((__int64)v78, 0);
		return 1i64;
	}
	if (v82 > (unsigned int)(int)(float)((float)(int)v25 * 0.89999998))
	{
		v35 = *a2;
		if (v23)
		{
			v36 = (__int64(__fastcall***)())sub_140335F10(&v77, v35);
		}
		else
		{
			sub_14018EE90(&v77, (__int64)"Message Id #%d", v35);
			v36 = &v77;
		}
		v37 = *a2;
		LODWORD(v72) = (int)v25;
		v73 = 0x141DEC670i64;
		sub_1401A3130(11, 1, &v73, v37, v36[1], v82, v72);
		if (v78)
			sub_14018B900((__int64)v78, 0);
	}
	if (!a1[1] && !a1[3])
	{
		v38 = a5;
		if (!a5)
		{
			v75 = 0i64;
			TlsValue = &off_140B5E648;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v39 = *a2;
			v77 = TlsValue;
			v78 = v75;
			v79 = lpTlsValue;
			if (qword_140C65828)
			{
				v40 = sub_140335F10(&v80, v39);
			}
			else
			{
				sub_14018EE90(&v80, (__int64)"Message Id #%d", v39);
				v40 = &v80;
			}
			v41 = v40[1];
			v42 = *a2;
			v73 = 0x141DEC870i64;
			v43 = sub_1401971E0(&dword_140C8A628, 11, &v73, v42, v41, &v77);
			if (v81)
				sub_14018B900(v81, 0);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v43)
			{
				DebugBreak();
				return 2147500037i64;
			}
			return 2147500037i64;
		}
		v44 = sub_14018B280(64i64, 0);
		if (v44)
			v45 = sub_140335530((__int64)v44, v21);
		else
			v45 = 0i64;
		a1[1] = v45 + 16;
		*v38 = v45;
	}
	sub_140334A70((__int64)(a2 + 20), v21, 1);
	if (a1[2])
	{
		v46 = a1[1];
		a1[2] = 0i64;
		++* (_QWORD*)(v46 + 32);
	}
	v47 = a1[4];
	if (v47)
	{
		v49 = a1[1];
		if (v49)
		{
			a1[5] = *(_QWORD*)(v47 + 8);
			v48 = a1[2] + 8i64 * (*(_QWORD*)(v49 + 32) - *(_QWORD*)(v49 + 16));
		}
		else
		{
			a1[5] = 0i64;
			v48 = 0i64;
		}
	}
	else
	{
		v48 = sub_1403366F0(a1);
	}
	if (a2[18] != 3)
	{
		v50 = sub_140336380((__int64)a1, (unsigned int)v21, 0x20ui64);
		if (v50 < 0)
		{
			v75 = 0i64;
			TlsValue = &off_140B5E648;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v51 = *a2;
			v77 = TlsValue;
			v78 = v75;
			v79 = lpTlsValue;
			if (qword_140C65828)
			{
				v52 = sub_140335F10(&v80, v51);
			}
			else
			{
				sub_14018EE90(&v80, (__int64)"Message Id #%d", v51);
				v52 = &v80;
			}
			v73 = 0x141DEC820i64;
			v53 = sub_1401971E0(&dword_140C8A624, 11, &v73, *a2, v52[1], &v77);
			goto LABEL_88;
		}
		v50 = sub_140336380((__int64)a1, *(unsigned __int16*)a2, 0x10ui64);
		if (v50 < 0)
		{
			v75 = 0i64;
			TlsValue = &off_140B5E648;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v54 = *a2;
			v77 = TlsValue;
			v78 = v75;
			v79 = lpTlsValue;
			if (qword_140C65828)
			{
				v55 = sub_140335F10(&v80, v54);
			}
			else
			{
				sub_14018EE90(&v80, (__int64)"Message Id #%d", v54);
				v55 = &v80;
			}
			v73 = 0x141DEC970i64;
			v53 = sub_1401971E0(&dword_140C8A620, 11, &v73, *a2, v55[1], &v77);
		LABEL_88:
			v56 = v53;
			if (v81)
				sub_14018B900(v81, 0);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, lpTlsValue);
			if (v56)
			{
				DebugBreak();
				return (unsigned int)v50;
			}
			return (unsigned int)v50;
		}
	}
	v57 = (__int64(__fastcall*)(_QWORD*, __int64)) * ((_QWORD*)a2 + 3);
	if (!v57)
	{
		v58 = *a2;
		if (qword_140C65828)
		{
			v59 = sub_140335F10(&v80, v58);
		}
		else
		{
			sub_14018EE90(&v80, (__int64)"Message Id #%d", v58);
			v59 = &v80;
		}
		v60 = v59[1];
		v61 = *a2;
		v73 = 0x141DEC910i64;
		sub_1401A3130(11, 0, &v73, v61, v60);
		if (v81)
			sub_14018B900(v81, 0);
		return 2147500037i64;
	}
	v50 = v57(a1, v84);
	if (v50 < 0)
	{
		v62 = *a2;
		if (qword_140C65828)
		{
			v63 = sub_140335F10(&v80, v62);
		}
		else
		{
			sub_14018EE90(&v80, (__int64)"Message Id #%d", v62);
			v63 = &v80;
		}
		v64 = v63[1];
		v65 = *a2;
		v73 = 0x141DECAB0i64;
		LODWORD(v71) = v50;
		sub_1401A3130(11, 0, &v73, v65, v64, v71);
		if (v81)
			sub_14018B900(v81, 0);
		return (unsigned int)v50;
	}
	v66 = sub_140336750(a1) - v48;
	if (v66 != v83 && !a2[18])
	{
		v67 = *a2;
		if (qword_140C65828)
		{
			v68 = sub_140335F10(&v80, v67);
		}
		else
		{
			sub_14018EE90(&v80, (__int64)"Message Id #%d", v67);
			v68 = &v80;
		}
		v69 = v68[1];
		v73 = 0x141DEC9D0i64;
		sub_1401A2E50(0xBu, 0, &v73, v69, v66, v83);
		if (v81)
			sub_14018B900(v81, 0);
	}
	if (a1[2])
	{
		v70 = a1[1];
		a1[2] = 0i64;
		++* (_QWORD*)(v70 + 32);
	}
	return 0i64;
}
// 140335924: variable 'v72' is possibly undefined
// 140335DE9: variable 'v71' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C1E564: using guessed type int dword_140C1E564;
// 140C65828: using guessed type __int64 qword_140C65828;
// 140C8A620: using guessed type _DWORD dword_140C8A620;
// 140C8A624: using guessed type _DWORD dword_140C8A624;
// 140C8A628: using guessed type _DWORD dword_140C8A628;

