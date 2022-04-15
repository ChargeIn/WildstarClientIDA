//----- (0000000140006930) ----------------------------------------------------
__int64 __fastcall sub_140006930(_QWORD* a1, int a2)
{
	unsigned __int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v6; // r9
	_DWORD* v7; // r8
	unsigned int v8; // edi
	__int64 v9; // rbx
	unsigned int v10; // esi
	__int64 v11; // rax
	__int64 v12; // r15
	unsigned __int64 v13; // rbx
	_QWORD* v14; // rcx
	unsigned int v15; // esi
	__int64 v16; // rax

	v3 = a1[20];
	v4 = 0i64;
	if (v3)
	{
		v6 = a1[19];
		v7 = (_DWORD*)(v6 + 8);
		while (*v7 != a2)
		{
			++v4;
			v7 += 4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v8 = *(_DWORD*)(v6 + 16 * v4 + 12);
	}
	else
	{
	LABEL_5:
		v8 = 0;
	}
	v9 = 0i64;
	if (a1[6])
	{
		while (1)
		{
			v10 = *(_DWORD*)(*(_QWORD*)(a1[5] + 8 * v9) + 8i64);
			if (qword_140C63840)
				break;
			if (!dword_140C64170 && (int)sub_1401E89C0() >= 0)
			{
				v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v10);
				goto LABEL_13;
			}
		LABEL_16:
			if ((unsigned __int64)++v9 >= a1[6])
				goto LABEL_17;
		}
		v11 = qword_140C63840(off_140A690C8, v10, qword_140C63858);
	LABEL_13:
		if (v11 && *(_DWORD*)(v11 + 12) == a2)
			v8 += *(_DWORD*)(v11 + 16);
		goto LABEL_16;
	}
LABEL_17:
	v12 = 0i64;
	if (a1[8])
	{
		while (1)
		{
			v13 = 0i64;
			v14 = *(_QWORD**)(a1[7] + 8 * v12);
			if (v14[1])
				break;
		LABEL_28:
			if ((unsigned __int64)++v12 >= a1[8])
				return v8;
		}
		while (1)
		{
			v15 = *(_DWORD*)(*(_QWORD*)(*v14 + 8 * v13) + 8i64);
			if (qword_140C63840)
				break;
			if (!dword_140C64170 && (int)sub_1401E89C0() >= 0)
			{
				v16 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v15);
				goto LABEL_24;
			}
		LABEL_27:
			++v13;
			v14 = *(_QWORD**)(a1[7] + 8 * v12);
			if (v13 >= v14[1])
				goto LABEL_28;
		}
		v16 = qword_140C63840(off_140A690C8, v15, qword_140C63858);
	LABEL_24:
		if (v16 && *(_DWORD*)(v16 + 12) == a2)
			v8 += *(_DWORD*)(v16 + 16);
		goto LABEL_27;
	}
	return v8;
}
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64170: using guessed type int dword_140C64170;
// 140C652D0: using guessed type __int64 qword_140C652D0;

