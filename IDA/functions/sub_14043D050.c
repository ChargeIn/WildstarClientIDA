//----- (000000014043D050) ----------------------------------------------------
__int64 __fastcall sub_14043D050(__int64 a1, unsigned int a2)
{
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v6; // rax
	_QWORD* v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rbp
	__int64(__fastcall * v10)(wchar_t**, _QWORD, __int64); // r9
	unsigned int v11; // esi
	__int64 v12; // rax
	__int64 v13; // r14
	unsigned __int64 v14; // r15
	_DWORD* v15; // rsi
	__int64 v16; // r8
	__int64 v17; // [rsp+60h] [rbp+8h]

	v3 = *(_QWORD*)(qword_140C7CD18 + 8);
	v4 = qword_140C7CD18;
	if (!v3)
		goto LABEL_8;
	do
	{
		if (*(_DWORD*)(v3 + 32) < a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	} while (v3);
	if (v4 == qword_140C7CD18 || (v17 = v4, a2 < *(_DWORD*)(v4 + 32)))
		LABEL_8:
	v17 = qword_140C7CD18;
	if (v17 == qword_140C7CD18)
		return 0i64;
	v6 = *(_QWORD*)(v17 + 40);
	if (!v6)
		return 0i64;
	v7 = *(_QWORD**)(v6 + 8);
	v8 = (_QWORD*)*v7;
	v9 = 0i64;
	if ((_QWORD*)*v7 != v7)
	{
		v10 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		while (1)
		{
			v11 = *((_DWORD*)v8 + 4);
			if (v10)
				break;
			if (!dword_140C64E70)
			{
				if ((int)sub_1401F4D40() >= 0)
				{
					v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B78 + 24i64))(qword_140C64B78, v11);
					goto LABEL_19;
				}
			LABEL_29:
				v10 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			}
			v8 = (_QWORD*)*v8;
			if (v8 == *(_QWORD**)(*(_QWORD*)(v17 + 40) + 8i64))
				return v9;
		}
		v12 = v10(off_140A69AD8, v11, qword_140C63858);
	LABEL_19:
		v13 = v12;
		if (v12)
		{
			v14 = 0i64;
			v15 = (_DWORD*)(v12 + 48);
			while (1)
			{
				if (*(v15 - 3) == a2 && *v15 == 2)
				{
					v16 = *(unsigned int*)(v13 + 88);
					if (!(_DWORD)v16
						|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
							+ 24i64))(
								qword_140C659A0,
								*(_QWORD*)(qword_140C65898 + 120),
								v16,
								0i64,
								0i64,
								0))
					{
						if (*(_DWORD*)(v13 + 84) == a2)
							return v13;
						if (!v9)
							v9 = v13;
					}
				}
				++v14;
				++v15;
				if (v14 >= 3)
					goto LABEL_29;
			}
		}
		goto LABEL_29;
	}
	return v9;
}
// 140A69AD8: using guessed type wchar_t *off_140A69AD8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B78: using guessed type __int64 qword_140C64B78;
// 140C64E70: using guessed type int dword_140C64E70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C7CD18: using guessed type __int64 qword_140C7CD18;

