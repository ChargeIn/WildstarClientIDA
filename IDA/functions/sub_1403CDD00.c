//----- (00000001403CDD00) ----------------------------------------------------
__int64 __fastcall sub_1403CDD00(__int64 a1, int a2)
{
	__int64 v2; // rbp
	unsigned __int64 v3; // rbx
	__int64 v5; // rax
	unsigned __int16 v7; // di
	unsigned __int64 v8; // r15
	__int64 v9; // rsi
	unsigned int v10; // r14d
	__int64 v11; // rax
	unsigned __int64 v12; // r14
	unsigned int v13; // esi
	__int64 v14; // rax

	v2 = qword_140C65898;
	v3 = 0i64;
	v5 = *(unsigned int*)(qword_140C65898 + 28140);
	if ((unsigned int)v5 >= 4)
		return 0i64;
	v7 = *(_WORD*)(qword_140C65898 + 28256);
	v8 = *(_QWORD*)(16 * v5 + qword_140C65898 + 28280);
	v9 = 0i64;
	if (v8)
	{
		while (1)
		{
			v10 = *(unsigned __int16*)(*(_QWORD*)(v2 + 16 * (*(unsigned int*)(v2 + 28140) + 1767i64)) + 2 * v9);
			if (qword_140C63840)
				break;
			if (!dword_140C65444 && (int)sub_1401FD540() >= 0)
			{
				v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653A0 + 24i64))(qword_140C653A0, v10);
			LABEL_9:
				if (v11)
					v7 -= *(_WORD*)(v11 + 16);
			}
			if (++v9 >= v8)
				goto LABEL_12;
		}
		v11 = qword_140C63840(
			off_140A6A1D8,
			*(unsigned __int16*)(*(_QWORD*)(v2 + 16 * (*(unsigned int*)(v2 + 28140) + 1767i64)) + 2 * v9),
			qword_140C63858);
		goto LABEL_9;
	}
LABEL_12:
	v12 = *(_QWORD*)(v2 + 28344);
	if (v12 && !a2)
	{
		do
		{
			v13 = *(unsigned __int16*)(*(_QWORD*)(v2 + 28336) + 2 * v3);
			if (qword_140C63840)
			{
				v14 = qword_140C63840(off_140A6A1D8, *(unsigned __int16*)(*(_QWORD*)(v2 + 28336) + 2 * v3), qword_140C63858);
			}
			else
			{
				if (dword_140C65444 || (int)sub_1401FD540() < 0)
					goto LABEL_21;
				v14 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653A0 + 24i64))(qword_140C653A0, v13);
			}
			if (v14)
				v7 -= *(_WORD*)(v14 + 16);
		LABEL_21:
			++v3;
		} while (v3 < v12);
	}
	return v7;
}
// 1403CDDE5: conditional instruction was optimized away because r14.8!=0
// 140A6A1D8: using guessed type wchar_t *off_140A6A1D8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C653A0: using guessed type __int64 qword_140C653A0;
// 140C65444: using guessed type int dword_140C65444;
// 140C65898: using guessed type __int64 qword_140C65898;

