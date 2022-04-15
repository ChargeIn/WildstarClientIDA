//----- (0000000140404390) ----------------------------------------------------
__int64 __fastcall sub_140404390(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	unsigned int v5; // esi
	unsigned int v6; // eax
	__int64 v7; // rcx
	unsigned int v8; // r14d
	__int64 v9; // rax
	unsigned int* v10; // rbx
	unsigned __int64 v11; // rax
	unsigned __int16* v12; // r8
	unsigned __int16* v13; // r10
	__int64 v14; // r9
	int v15; // edx
	int v16; // eax
	unsigned __int64 v17; // rax
	unsigned __int16* v18; // r9
	int v19; // edx
	__int64 v20; // r8
	int v21; // eax
	__int16* v22; // rax
	__int64 v23; // rcx
	__int16* v24; // rax
	__int64 v25; // rcx
	__int16* v26; // rax
	__int64 v27; // rcx
	__int16* v28; // rax

	v3 = sub_140404300(qword_140C658A0, a2);
	if (v3)
		return **(unsigned int**)(v3 + 8);
	v5 = 0;
	if (qword_140C63838)
	{
		v6 = qword_140C63838(off_140A69870, qword_140C63858);
	}
	else
	{
		if (dword_140C6528C || (int)sub_1401F1E80() < 0)
			return 18i64;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64728 + 40i64))(qword_140C64728);
	}
	v8 = v6;
	if (!v6)
		return 18i64;
	while (1)
	{
		if (qword_140C63848)
		{
			v9 = qword_140C63848(off_140A69870, v5, qword_140C63858);
		}
		else
		{
			if (dword_140C6528C)
			{
				v10 = 0i64;
				goto LABEL_17;
			}
			if ((int)sub_1401F1E80() < 0)
			{
				v10 = 0i64;
				goto LABEL_17;
			}
			v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64728 + 32i64))(qword_140C64728, v5);
		}
		v10 = (unsigned int*)v9;
	LABEL_17:
		v11 = *((_QWORD*)v10 + 2);
		if (v11)
			v12 = v11 <= qword_140C3FE70 ? (unsigned __int16*)(qword_140C3FE68 + v11) : 0i64;
		else
			v12 = 0i64;
		v13 = *(unsigned __int16**)(a2 + 8);
		v14 = 0i64;
		v15 = *v13;
		if (v15 == *v12)
			break;
	LABEL_25:
		v17 = *((_QWORD*)v10 + 3);
		if (v17)
		{
			if (v17 <= qword_140C3FE70)
				v18 = (unsigned __int16*)(qword_140C3FE68 + v17);
			else
				v18 = 0i64;
		}
		else
		{
			v18 = 0i64;
		}
		v19 = *v13;
		v20 = 0i64;
		if (v19 == *v18)
		{
			while ((_WORD)v19)
			{
				v19 = v13[v20 + 1];
				v21 = v18[++v20];
				if (v19 != v21)
					goto LABEL_33;
			}
			return *v10;
		}
	LABEL_33:
		v22 = sub_14034BDD0(v7, v10[9]);
		if (v22 && sub_14040B320((char*)v22, a2))
			return *v10;
		v24 = sub_14034BDD0(v23, v10[10]);
		if (v24)
		{
			if (sub_14040B320((char*)v24, a2))
				return *v10;
		}
		v26 = sub_14034BDD0(v25, v10[11]);
		if (v26)
		{
			if (sub_14040B320((char*)v26, a2))
				return *v10;
		}
		v28 = sub_14034BDD0(v27, v10[12]);
		if (v28)
		{
			if (sub_14040B320((char*)v28, a2))
				return *v10;
		}
		if (++v5 >= v8)
			return 18i64;
	}
	while ((_WORD)v15)
	{
		v15 = v13[v14 + 1];
		v16 = v12[++v14];
		if (v15 != v16)
			goto LABEL_25;
	}
	return *v10;
}
// 140404516: variable 'v7' is possibly undefined
// 140404532: variable 'v23' is possibly undefined
// 14040454E: variable 'v25' is possibly undefined
// 14040456A: variable 'v27' is possibly undefined
// 140A69870: using guessed type wchar_t *off_140A69870[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64728: using guessed type __int64 qword_140C64728;
// 140C6528C: using guessed type int dword_140C6528C;
// 140C658A0: using guessed type __int64 qword_140C658A0;

