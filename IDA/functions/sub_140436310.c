//----- (0000000140436310) ----------------------------------------------------
__int64 __fastcall sub_140436310(__int64 a1, unsigned int a2)
{
	int v4; // ecx
	int v5; // eax
	__int64 v6; // rsi
	int v7; // ebx
	unsigned int v9; // eax
	unsigned int v10; // r12d
	unsigned int v11; // r15d
	__int64 v12; // rax
	unsigned int* v13; // rbx
	unsigned int v14; // r14d
	__int64 v15; // rax
	_DWORD* v16; // r14
	int v17; // ecx
	unsigned int v18; // eax
	unsigned int v19; // eax
	__int64 v20; // r9
	int v21; // eax
	__int64 v22; // r9
	int v23; // ecx
	int v24; // edx
	unsigned int v25; // eax
	int v26; // eax
	__int64* v27; // rax
	int v28; // ecx
	unsigned int v29; // eax
	int v30; // eax
	unsigned int v31; // eax
	int v32; // ecx
	unsigned int v33; // eax
	__int64* v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rbx
	__int64 v37; // [rsp+20h] [rbp-60h]
	__int64 v38; // [rsp+28h] [rbp-58h]
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-50h] BYREF
	__int64 v40; // [rsp+38h] [rbp-48h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-40h]
	__int64(__fastcall * *v42)(); // [rsp+50h] [rbp-30h] BYREF
	__int64 v43; // [rsp+58h] [rbp-28h]
	__int64 v44; // [rsp+60h] [rbp-20h]
	int v45; // [rsp+68h] [rbp-18h]
	int v46; // [rsp+6Ch] [rbp-14h]
	__int64 v47; // [rsp+A0h] [rbp+20h] BYREF

	if (a2)
	{
		if (a2 == 1)
			v4 = 2;
		else
			v4 = 3;
	}
	else
	{
		v4 = 1;
	}
	*(_DWORD*)a1 = v4;
	if (!a2 || (v5 = 19, a2 == 1))
		v5 = 11;
	v6 = 0i64;
	*(_DWORD*)(a1 + 8) = v5;
	if (v4 == 3)
	{
		v40 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v42 = TlsValue;
		v47 = 0x141DFC400i64;
		v43 = v40;
		v44 = (__int64)lpTlsValue;
		v7 = sub_1401971E0(&dword_140C8AC50, 122, &v47, a2, &v42);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v7)
			DebugBreak();
		return 2147500037i64;
	}
	if (qword_140C63838)
	{
		v9 = qword_140C63838(off_140A6CAF8, qword_140C63858);
	}
	else
	{
		if (dword_140C653FC)
		{
			v10 = 0;
			goto LABEL_21;
		}
		if ((int)sub_14022F4A0() < 0)
		{
			v10 = 0;
			goto LABEL_21;
		}
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65228 + 40i64))(qword_140C65228);
	}
	v10 = v9;
LABEL_21:
	v11 = 0;
	if (v10)
	{
		while (!qword_140C63848)
		{
			if (dword_140C653FC)
			{
				v13 = 0i64;
			}
			else
			{
				if ((int)sub_14022F4A0() >= 0)
				{
					v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65228 + 32i64))(qword_140C65228, v11);
					goto LABEL_29;
				}
				v13 = 0i64;
			}
		LABEL_30:
			if (v13[1] == *(_DWORD*)a1)
			{
				v14 = v13[3];
				if (qword_140C63840)
				{
					v15 = qword_140C63840(off_140A6CAC0, v14, qword_140C63858);
				}
				else
				{
					if (dword_140C651A0 || (int)sub_14022F060() < 0)
						goto LABEL_53;
					v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C651A8 + 24i64))(qword_140C651A8, v14);
				}
				v16 = (_DWORD*)v15;
				if (v15)
				{
					v17 = *(_DWORD*)(v15 + 8);
					v18 = v13[2];
					if (v18 > *(_DWORD*)(a1 + 4))
						*(_DWORD*)(a1 + 4) = v18;
					v19 = v13[7];
					if (!v19)
					{
						v31 = v13[3];
						LODWORD(v43) = 6;
						v46 = 0;
						LODWORD(v42) = v31;
						HIDWORD(v42) = v13[4];
						HIDWORD(v43) = *v13;
						v45 = v13[8];
						if (v17)
						{
							v32 = v17 - 1;
							if (v32)
							{
								if (v32 == 1)
								{
									LODWORD(v44) = 2;
									goto LABEL_51;
								}
							}
							else
							{
								v33 = v13[5];
								LODWORD(v44) = 1;
								HIDWORD(v44) = v33;
							}
						}
						else
						{
							LODWORD(v44) = 0;
						LABEL_51:
							HIDWORD(v44) = v13[6];
						}
					LABEL_52:
						v34 = (__int64*)sub_140436ED0(a1, v13[2]);
						sub_140436CA0(v34, (int*)&v42);
						goto LABEL_53;
					}
					if (v17 == 1)
					{
						if (sub_1401FE020(v19))
						{
							v23 = v13[7];
							v24 = v13[2];
							LODWORD(v42) = v13[3];
							v25 = v13[4];
							HIDWORD(v43) = v23;
							HIDWORD(v42) = v25;
							v26 = v13[8];
							v46 = v23;
							LODWORD(v43) = 5;
							v44 = 1i64;
							v45 = v26;
							v27 = (__int64*)sub_140436ED0(a1, v24);
							sub_140436CA0(v27, (int*)&v42);
							v28 = v13[7];
							LODWORD(v42) = v13[3];
							v29 = v13[4];
							LODWORD(v43) = 7;
							HIDWORD(v42) = v29;
							v30 = v13[8];
							HIDWORD(v43) = v28;
							v44 = 1i64;
							v46 = v28;
							v45 = v30;
							goto LABEL_52;
						}
						v21 = v16[2];
						v22 = *v13;
						v47 = 0x141DFC5D0i64;
						LODWORD(v37) = v21;
						sub_1401A3130(122, 0, &v47, v22, v37);
					}
					else
					{
						v20 = *v13;
						v47 = 0x141DFC670i64;
						LODWORD(v38) = v16[2];
						LODWORD(v37) = *v16;
						sub_1401A3130(122, 0, &v47, v20, v37, v38);
					}
				}
			}
		LABEL_53:
			if (++v11 >= v10)
				goto LABEL_54;
		}
		v12 = qword_140C63848(off_140A6CAF8, v11, qword_140C63858);
	LABEL_29:
		v13 = (unsigned int*)v12;
		goto LABEL_30;
	}
LABEL_54:
	if (*(_QWORD*)(a1 + 24))
	{
		while (1)
		{
			v35 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v6);
			if (v35)
				break;
		LABEL_58:
			if ((unsigned __int64)++v6 >= *(_QWORD*)(a1 + 24))
				return 0i64;
		}
		while (1)
		{
			v36 = *(_QWORD*)(v35 + 8);
			if (!(unsigned int)sub_140436700((unsigned int*)(v35 + 16), (_QWORD*)(v35 + 24), a1))
				break;
			v35 = v36;
			if (!v36)
				goto LABEL_58;
		}
	}
	return 0i64;
}
// 140436579: variable 'v37' is possibly undefined
// 140436579: variable 'v38' is possibly undefined
// 140A6CAC0: using guessed type wchar_t *off_140A6CAC0[2];
// 140A6CAF8: using guessed type wchar_t *off_140A6CAF8[2];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C651A0: using guessed type int dword_140C651A0;
// 140C651A8: using guessed type __int64 qword_140C651A8;
// 140C65228: using guessed type __int64 qword_140C65228;
// 140C653FC: using guessed type int dword_140C653FC;
// 140C8AC50: using guessed type _DWORD dword_140C8AC50;

