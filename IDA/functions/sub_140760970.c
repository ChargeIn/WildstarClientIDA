//----- (0000000140760970) ----------------------------------------------------
__int64 __fastcall sub_140760970(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int i; // r14d
	unsigned int v7; // eax
	__int64 v8; // rcx
	__int64 v9; // rax
	int* v10; // rsi
	int v11; // eax
	__int16* v12; // rax
	unsigned __int16* v13; // rdi
	__int64 v14; // rcx
	__int64 v15; // rbx
	__int64 v16; // rax
	_QWORD* v17; // rax
	__int64 v18; // rdx
	int v19; // r10d
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	int v26; // r11d
	__int64 v27; // rdx
	__int64 v28; // r10
	__int64 v29; // r9
	_DWORD* v30; // rcx
	__int64 v31; // r9
	int v32; // r8d
	__int64 v33; // rdx
	__int64(__fastcall * *v35)(); // [rsp+20h] [rbp-38h] BYREF
	int v36; // [rsp+28h] [rbp-30h]
	__int64 v37; // [rsp+30h] [rbp-28h]
	int v38; // [rsp+38h] [rbp-20h]
	double v39; // [rsp+60h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 32);
	v35 = off_140B569F0;
	v3 = *(_QWORD*)(v1 + 112);
	v37 = a1;
	v38 = 1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v36 = sub_1400578C0(a1);
	for (i = 0; ; ++i)
	{
		if (qword_140C63838)
		{
			v7 = qword_140C63838(off_140A6DEE0, qword_140C63858);
			goto LABEL_9;
		}
		if (dword_140C64070 || (int)sub_140247760() < 0)
			break;
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64930 + 40i64))(qword_140C64930);
	LABEL_9:
		if (i >= v7)
			break;
		if (qword_140C63848)
		{
			v9 = qword_140C63848(off_140A6DEE0, i, qword_140C63858);
		}
		else
		{
			if (dword_140C64070)
			{
				v10 = 0i64;
				goto LABEL_18;
			}
			if ((int)sub_140247760() < 0)
			{
				v10 = 0i64;
				goto LABEL_18;
			}
			v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64930 + 32i64))(qword_140C64930, i);
		}
		v10 = (int*)v9;
	LABEL_18:
		if (v10[10])
		{
			v11 = v10[9];
			if ((v11 & 8) == 0 && (v11 & 4) != 0 && (v11 & 0x10) != 0)
			{
				v12 = sub_14034BDD0(v8, v10[7]);
				v13 = (unsigned __int16*)v12;
				if (v12)
				{
					v14 = 0i64;
					if (*v12)
					{
						do
							++v14;
						while (v12[v14]);
						if (v14)
						{
							if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
								sub_14005E2C0(a1);
							v15 = *(_QWORD*)(a1 + 16);
							v16 = sub_14005C1B0(a1, 0, 0);
							*(_DWORD*)(v15 + 8) = 5;
							*(_QWORD*)v15 = v16;
							*(_QWORD*)(a1 + 16) += 16i64;
							LODWORD(v15) = sub_1400578C0(a1);
							v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v15);
							v18 = *(_QWORD*)(a1 + 16);
							*(_QWORD*)v18 = *v17;
							*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F06F0(a1, v18, L"nId", v19);
							*(_QWORD*)(a1 + 16) -= 16i64;
							v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v15);
							*(_QWORD*)v21 = *v20;
							*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F0870(a1, v22, L"strDisplayName", v13);
							*(_QWORD*)(a1 + 16) -= 16i64;
							v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v15);
							*(_QWORD*)v24 = *v23;
							*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
							*(_QWORD*)(a1 + 16) += 16i64;
							sub_1400F06F0(a1, v25, L"nSortOrder", v26);
							*(_QWORD*)(a1 + 16) -= 16i64;
							sub_1400FB1D0((__int64)&v35);
							sub_1400579E0(a1, v27, v15);
						}
					}
				}
			}
		}
	}
	v28 = v37;
	v29 = *(_QWORD*)(*(_QWORD*)(v37 + 32) + 160i64);
	if ((unsigned int)(v36 - 1) >= *(_DWORD*)(v29 + 56))
	{
		if ((double)v36 == 0.0)
		{
			v30 = *(_DWORD**)(v29 + 32);
		}
		else
		{
			v39 = (double)v36;
			v30 = (_DWORD*)(*(_QWORD*)(v29 + 32)
				+ 40 * ((unsigned int)(LODWORD(v39) + HIDWORD(v39)) % (((1i64 << *(_BYTE*)(v29 + 11)) - 1) | 1)));
		}
		while (v30[6] != 3 || (double)v36 != *((double*)v30 + 2))
		{
			v30 = (_DWORD*)*((_QWORD*)v30 + 4);
			if (!v30)
			{
				v30 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v30 = (_DWORD*)(*(_QWORD*)(v29 + 24) + 16i64 * (v36 - 1));
	}
	v31 = *(_QWORD*)(v37 + 16);
	v32 = v36;
	*(_QWORD*)v31 = *(_QWORD*)v30;
	v33 = (unsigned int)v30[2];
	*(_DWORD*)(v31 + 8) = v33;
	*(_QWORD*)(v28 + 16) += 16i64;
	sub_1400579E0(v28, v33, v32);
	return 1i64;
}
// 140760AB4: variable 'v8' is possibly undefined
// 140760B5A: variable 'v19' is possibly undefined
// 140760B87: variable 'v21' is possibly undefined
// 140760B99: variable 'v22' is possibly undefined
// 140760BCA: variable 'v24' is possibly undefined
// 140760BDC: variable 'v25' is possibly undefined
// 140760BDC: variable 'v26' is possibly undefined
// 140760BF8: variable 'v27' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6DEE0: using guessed type wchar_t *off_140A6DEE0[2];
// 140B4D268: using guessed type wchar_t aNsortorder_0[11];
// 140B4D280: using guessed type wchar_t aStrdisplayname_2[15];
// 140B4D2A0: using guessed type wchar_t aNid_44[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64070: using guessed type int dword_140C64070;
// 140C64930: using guessed type __int64 qword_140C64930;

