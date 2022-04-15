//----- (0000000140716AC0) ----------------------------------------------------
__int64 __fastcall sub_140716AC0(__int64 a1)
{
	__int64 v1; // rdi
	unsigned int v2; // eax
	unsigned int v3; // r13d
	__int64 v4; // rax
	bool v5; // cf
	__int64 v6; // rax
	int* v7; // rax
	int v8; // esi
	int* v9; // r14
	int** v10; // rbx
	int* v11; // rax
	int* v12; // rax
	unsigned int v13; // esi
	__int64 v14; // r14
	_QWORD* v15; // r12
	_DWORD* v16; // rax
	unsigned __int64 v17; // rax
	__int64 v18; // rcx
	int** v19; // r15
	int* v20; // rax
	int* v21; // rcx
	__int64 v22; // r15
	__int64 v23; // r12
	unsigned int** v24; // rsi
	unsigned __int64 v25; // r14
	_QWORD* v26; // rbx
	unsigned int** v27; // rbx
	unsigned int* v28; // rbx
	unsigned int* v29; // r8
	int v30; // ebx
	int v31; // eax
	unsigned int v32; // r13d
	__int64 v33; // rax
	__int64 v34; // r14
	unsigned __int64 v35; // rsi
	_QWORD* v36; // rbx
	__int64* v37; // rbx
	unsigned __int64 v38; // r15
	_QWORD* v39; // rbx
	unsigned int*** v40; // rbx
	unsigned int** v41; // rbx
	__int64 v43; // [rsp+20h] [rbp-50h]
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-40h] BYREF
	__int128 v45; // [rsp+38h] [rbp-38h]
	__int64(__fastcall * *v46)(); // [rsp+50h] [rbp-20h] BYREF
	__int128 v47; // [rsp+58h] [rbp-18h]
	__int64 v48; // [rsp+B0h] [rbp+40h] BYREF
	__int64 v49; // [rsp+B8h] [rbp+48h] BYREF

	v48 = a1;
	v1 = qword_140C665D0;
	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6A328, qword_140C63858);
	LABEL_8:
		v3 = v2;
		goto LABEL_9;
	}
	if (dword_140C6546C)
	{
		v3 = 0;
	}
	else
	{
		if ((int)sub_1401FEEC0() >= 0)
		{
			v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64D20 + 40i64))(qword_140C64D20);
			goto LABEL_8;
		}
		v3 = 0;
	}
LABEL_9:
	v4 = 48i64 * v3;
	if (!is_mul_ok(v3, 0x30ui64))
		v4 = -1i64;
	v5 = __CFADD__(v4, 8i64);
	v6 = v4 + 8;
	if (v5)
		v6 = -1i64;
	v7 = sub_14018B280(v6, 0);
	if (v7)
	{
		v8 = v3 - 1;
		*v7 = v3;
		v9 = v7 + 2;
		if ((int)(v3 - 1) >= 0)
		{
			v10 = (int**)(v7 + 8);
			do
			{
				*(v10 - 3) = 0i64;
				*(v10 - 2) = 0i64;
				v11 = sub_14018B280(48i64, 0);
				--v8;
				v10[1] = 0i64;
				*v10 = v11;
				*(_BYTE*)v11 = 0;
				*((_QWORD*)*v10 + 1) = 0i64;
				v12 = *v10;
				v10 += 6;
				*((_QWORD*)v12 + 2) = v12;
				*((_QWORD*)*(v10 - 6) + 3) = *(v10 - 6);
			} while (v8 >= 0);
		}
	}
	else
	{
		v9 = 0i64;
	}
	*(_QWORD*)v1 = v9;
	v13 = 0;
	if (!v3)
		goto LABEL_51;
	v14 = 0i64;
	do
	{
		v15 = (_QWORD*)(v14 + *(_QWORD*)v1);
		if (qword_140C63848)
		{
			v16 = (_DWORD*)qword_140C63848(off_140A6A328, v13, qword_140C63858);
		}
		else
		{
			if (dword_140C6546C || (int)sub_1401FEEC0() < 0)
				goto LABEL_32;
			v16 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D20 + 32i64))(
				qword_140C64D20,
				v13);
		}
		if (v16)
		{
			*v15 = v16;
			LODWORD(v48) = *v16;
			if (*(_QWORD*)(v1 + 8) == *(_QWORD*)(v1 + 16))
				sub_1400290D0(v1 + 8);
			v17 = (*(__int64(__fastcall**)(__int64*))(v1 + 32))(&v48);
			v18 = *(_QWORD*)(v1 + 24);
			v49 = v17;
			v19 = (int**)(v18 + 8 * (v17 % *(_QWORD*)(v1 + 16)));
			v20 = sub_14018B280(32i64, 0);
			if (v20)
			{
				v21 = *v19;
				*(_QWORD*)v20 = v49;
				*((_QWORD*)v20 + 1) = v21;
				v20[4] = v48;
				*((_QWORD*)v20 + 3) = v15;
			}
			*v19 = v20;
			++* (_QWORD*)(v1 + 8);
		}
	LABEL_32:
		++v13;
		v14 += 48i64;
	} while (v13 < v3);
	v22 = 0i64;
	v23 = v3;
	do
	{
		v24 = (unsigned int**)(v22 + *(_QWORD*)v1);
		LODWORD(v48) = (*v24)[1];
		if ((_DWORD)v48)
		{
			v25 = (*(__int64(__fastcall**)(__int64*))(v1 + 32))(&v48);
			v26 = *(_QWORD**)(*(_QWORD*)(v1 + 24) + 8 * (v25 % *(_QWORD*)(v1 + 16)));
			if (v26)
			{
				while (v25 != *v26 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v1 + 40))(&v48, v26 + 2))
				{
					v26 = (_QWORD*)v26[1];
					if (!v26)
						goto LABEL_50;
				}
				v27 = (unsigned int**)(v26 + 3);
				if (v27)
				{
					v28 = *v27;
					v29 = v28;
					if (v28)
					{
						while (1)
						{
							v29 = (unsigned int*)*((_QWORD*)v29 + 1);
							if (!v29)
								break;
							if (**(_DWORD**)v29 == **v24)
								goto LABEL_50;
						}
					}
					if (*v24)
					{
						v24[1] = v28;
					}
					else if ((int)sub_1407174A0() < 0)
					{
						TlsValue = &off_140B5E648;
						*(_QWORD*)&v45 = 0i64;
						*((_QWORD*)&v45 + 1) = TlsGetValue(dwTlsIndex);
						TlsSetValue(dwTlsIndex, &TlsValue);
						v46 = TlsValue;
						v47 = v45;
						v49 = 0x141E40360i64;
						LODWORD(v43) = **(_DWORD**)v28;
						v30 = sub_140196F30(&dword_140C8B104, 40, &v49, **v24, v43, &v46);
						TlsValue = &off_140B5E648;
						TlsSetValue(dwTlsIndex, *((LPVOID*)&v45 + 1));
						if (v30)
							DebugBreak();
					}
				}
			}
		}
	LABEL_50:
		v22 += 48i64;
		--v23;
	} while (v23);
LABEL_51:
	if (qword_140C63838)
	{
		v31 = qword_140C63838(off_140A6A360, qword_140C63858);
	}
	else if (dword_140C64064)
	{
		v31 = 0;
	}
	else if ((int)sub_1401FF300() >= 0)
	{
		v31 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64820 + 40i64))(qword_140C64820);
	}
	else
	{
		v31 = 0;
	}
	v32 = 0;
	LODWORD(v48) = v31;
	if (v31)
	{
		while (2)
		{
			if (qword_140C63848)
			{
				v33 = qword_140C63848(off_140A6A360, v32, qword_140C63858);
				goto LABEL_66;
			}
			if (dword_140C64064)
			{
				v34 = 0i64;
			}
			else if ((int)sub_1401FF300() >= 0)
			{
				v33 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64820 + 32i64))(qword_140C64820, v32);
			LABEL_66:
				v34 = v33;
			}
			else
			{
				v34 = 0i64;
			}
			v35 = (*(__int64(__fastcall**)(__int64))(v1 + 32))(v34 + 4);
			v36 = *(_QWORD**)(*(_QWORD*)(v1 + 24) + 8 * (v35 % *(_QWORD*)(v1 + 16)));
			if (v36)
			{
				while (v35 != *v36 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v1 + 40))(v34 + 4, v36 + 2))
				{
					v36 = (_QWORD*)v36[1];
					if (!v36)
						goto LABEL_81;
				}
				v37 = v36 + 3;
				if (v37)
				{
					v49 = *v37;
					v38 = (*(__int64(__fastcall**)(__int64))(v1 + 32))(v34 + 8);
					v39 = *(_QWORD**)(*(_QWORD*)(v1 + 24) + 8 * (v38 % *(_QWORD*)(v1 + 16)));
					if (v39)
					{
						while (v38 != *v39 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v1 + 40))(v34 + 8, v39 + 2))
						{
							v39 = (_QWORD*)v39[1];
							if (!v39)
								goto LABEL_81;
						}
						v40 = (unsigned int***)(v39 + 3);
						if (v40)
						{
							v41 = *v40;
							sub_1407171F0((unsigned int**)v49, v34);
							if (*(_DWORD*)(v34 + 4) != *(_DWORD*)(v34 + 8))
								sub_1407171F0(v41, v34);
						}
					}
				}
			}
		LABEL_81:
			if (++v32 >= (unsigned int)v48)
				return 0i64;
			continue;
		}
	}
	return 0i64;
}
// 140716CAB: conditional instruction was optimized away because r13d.4!=0
// 140716DDE: variable 'v43' is possibly undefined
// 140A6A328: using guessed type wchar_t *off_140A6A328[2];
// 140A6A360: using guessed type wchar_t *off_140A6A360[2];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64064: using guessed type int dword_140C64064;
// 140C64820: using guessed type __int64 qword_140C64820;
// 140C64D20: using guessed type __int64 qword_140C64D20;
// 140C6546C: using guessed type int dword_140C6546C;
// 140C665D0: using guessed type __int64 qword_140C665D0;
// 140C8B104: using guessed type _DWORD dword_140C8B104;

