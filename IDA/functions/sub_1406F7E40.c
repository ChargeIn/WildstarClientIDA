//----- (00000001406F7E40) ----------------------------------------------------
__int64 __fastcall sub_1406F7E40(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ebp
	unsigned int i; // edi
	unsigned int v8; // eax
	__int64 v9; // rax
	__int64 v10; // rbx
	unsigned __int64 v11; // rcx
	_WORD* v12; // rax
	int v13; // eax
	unsigned __int64 v14; // rcx
	__int64 v15; // rdx
	int v16; // ebx
	__int64 v17; // rdx
	__int64 v18; // r9
	_DWORD* v19; // r8
	__int64 v20; // rdx
	__int64(__fastcall * *v22)(); // [rsp+20h] [rbp-48h] BYREF
	int v23; // [rsp+28h] [rbp-40h]
	__int64 v24; // [rsp+30h] [rbp-38h]
	int v25; // [rsp+38h] [rbp-30h]
	char v26[8]; // [rsp+40h] [rbp-28h] BYREF
	int v27; // [rsp+48h] [rbp-20h]
	__int64 v28; // [rsp+50h] [rbp-18h]
	double v29; // [rsp+70h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 32);
	v22 = off_140B569F0;
	v3 = *(_QWORD*)(v1 + 112);
	v24 = a1;
	v25 = 1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = sub_1400578C0(a1);
	v23 = v6;
	for (i = 0; ; ++i)
	{
		if (qword_140C63838)
		{
			v8 = qword_140C63838(off_140A6DEE0, qword_140C63858);
			goto LABEL_9;
		}
		if (dword_140C64070 || (int)sub_140247760() < 0)
			break;
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64930 + 40i64))(qword_140C64930);
	LABEL_9:
		if (i >= v8)
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
		v10 = v9;
	LABEL_18:
		v11 = *(_QWORD*)(v10 + 16);
		if (v11 && v11 <= qword_140C3FE70 && qword_140C3FE68 + v11)
		{
			v12 = v11 <= qword_140C3FE70 ? (_WORD*)(qword_140C3FE68 + v11) : 0i64;
			if (*v12)
			{
				v13 = *(_DWORD*)(v10 + 36);
				if ((v13 & 0x100) != 0 && (v13 & 0x60) != 0)
				{
					sub_140651400((__int64)v26, a1, *(_QWORD*)(qword_140C65898 + 120), (int*)v10);
					v14 = *(_QWORD*)(v10 + 16);
					if (v14)
					{
						if (v14 <= qword_140C3FE70)
							v15 = v14 + qword_140C3FE68;
						else
							v15 = 0i64;
					}
					else
					{
						v15 = 0i64;
					}
					v16 = v27;
					sub_1400FB2A0((__int64)&v22, v15, v27);
					if (v28)
						sub_1400579E0(v28, v17, v16);
				}
			}
		}
	}
	v18 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v18 + 56))
	{
		if ((double)v6 == 0.0)
		{
			v19 = *(_DWORD**)(v18 + 32);
		}
		else
		{
			v29 = (double)v6;
			v19 = (_DWORD*)(*(_QWORD*)(v18 + 32)
				+ 40 * ((unsigned int)(LODWORD(v29) + HIDWORD(v29)) % (((1i64 << *(_BYTE*)(v18 + 11)) - 1) | 1)));
		}
		while (v19[6] != 3 || (double)v6 != *((double*)v19 + 2))
		{
			v19 = (_DWORD*)*((_QWORD*)v19 + 4);
			if (!v19)
			{
				v19 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v19 = (_DWORD*)(*(_QWORD*)(v18 + 24) + 16i64 * (v6 - 1));
	}
	v20 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v20 = *(_QWORD*)v19;
	*(_DWORD*)(v20 + 8) = v19[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v20, v6);
	return 1i64;
}
// 1406F7F81: conditional instruction was optimized away because rcx.8!=0
// 1406F8004: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6DEE0: using guessed type wchar_t *off_140A6DEE0[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64070: using guessed type int dword_140C64070;
// 140C64930: using guessed type __int64 qword_140C64930;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406F7E40: using guessed type char var_28[8];

