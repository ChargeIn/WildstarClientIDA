//----- (000000014073C340) ----------------------------------------------------
__int64 __fastcall sub_14073C340(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rax
	__int64 v6; // rax
	unsigned int i; // ebx
	unsigned int v8; // eax
	_DWORD* v9; // rax
	unsigned int v10; // ebp
	__int64 v11; // rax
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // eax
	__int64 v17; // rcx
	_QWORD* v18; // rax
	__int64 v19; // rdx
	__int64(__fastcall * *v20)(); // [rsp+30h] [rbp-28h] BYREF
	int v21; // [rsp+38h] [rbp-20h]
	_QWORD* v22; // [rsp+40h] [rbp-18h]
	int v23; // [rsp+48h] [rbp-10h]

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	v3 = v2;
	if (!v2)
	{
		v4 = a1[2];
		*(_QWORD*)v4 = 0xBFF0000000000000ui64;
		*(_DWORD*)(v4 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	v6 = *(_QWORD*)(v2 + 16);
	if (v6)
	{
		v11 = sub_14024ACC0(*(_DWORD*)(v6 + 20));
		if (v11)
		{
			v10 = *(_DWORD*)(v11 + 88);
			goto LABEL_26;
		}
		goto LABEL_31;
	}
	if (*(_QWORD*)(v3 + 24))
		goto LABEL_31;
	for (i = 0; ; ++i)
	{
		if (qword_140C63838)
		{
			v8 = qword_140C63838(off_140A6B5F8, qword_140C63858);
		}
		else
		{
			if (dword_140C65454 || (int)sub_140215CA0() < 0)
				goto LABEL_31;
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C654D8 + 40i64))(qword_140C654D8);
		}
		if (i >= v8)
			goto LABEL_31;
		if (qword_140C63848)
		{
			v9 = (_DWORD*)qword_140C63848(off_140A6B5F8, i, qword_140C63858);
			goto LABEL_17;
		}
		if (!dword_140C65454 && (int)sub_140215CA0() >= 0)
			break;
	LABEL_19:
		;
	}
	v9 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654D8 + 32i64))(qword_140C654D8, i);
LABEL_17:
	if (!v9 || v9[1] != *(_DWORD*)v3)
		goto LABEL_19;
	v10 = *(_DWORD*)(v3 + 4) ? v9[3] : v9[2];
LABEL_26:
	if (!v10 || !qword_140C65C20)
	{
	LABEL_31:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v12 = a1[4];
	v22 = a1;
	v20 = off_140B569F0;
	v13 = *(_QWORD*)(v12 + 112);
	v23 = 1;
	if (*(_QWORD*)(v12 + 120) >= v13)
		sub_14005E2C0((__int64)a1);
	v14 = a1[2];
	v15 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	*(_QWORD*)v14 = v15;
	a1[2] += 16i64;
	v16 = sub_1400578C0((__int64)a1);
	v17 = *(unsigned int*)(v3 + 4);
	LODWORD(v14) = v16;
	v21 = v16;
	sub_140639060(v17, v10, v10, (__int64)&v20, v17);
	v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v14);
	v19 = a1[2];
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v19, v14);
	return 1i64;
}
// 14073C469: conditional instruction was optimized away because rax.8==0
// 140A6B5F8: using guessed type wchar_t *off_140A6B5F8[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65454: using guessed type int dword_140C65454;
// 140C654D8: using guessed type __int64 qword_140C654D8;
// 140C65C20: using guessed type __int64 qword_140C65C20;

