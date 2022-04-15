//----- (00000001403CDE70) ----------------------------------------------------
__int64 __fastcall sub_1403CDE70(__int64 a1, int a2)
{
	__int64 v2; // rax
	unsigned __int16 v3; // di
	unsigned __int64 v6; // r15
	__int64 v7; // rbx
	unsigned int v8; // esi
	__int64 v9; // rax

	v2 = *(unsigned int*)(a1 + 28140);
	v3 = 0;
	if ((unsigned int)v2 < 4)
	{
		v6 = *(_QWORD*)(16 * v2 + a1 + 28280);
		v7 = 0i64;
		if (v6)
		{
			while (1)
			{
				v8 = *(unsigned __int16*)(*(_QWORD*)(a1 + 16 * (*(unsigned int*)(a1 + 28140) + 1767i64)) + 2 * v7);
				if (qword_140C63840)
					break;
				if (!dword_140C65444 && (int)sub_1401FD540() >= 0)
				{
					v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653A0 + 24i64))(qword_140C653A0, v8);
					goto LABEL_8;
				}
			LABEL_12:
				if (++v7 >= v6)
					return v3;
			}
			v9 = qword_140C63840(
				off_140A6A1D8,
				*(unsigned __int16*)(*(_QWORD*)(a1 + 16 * (*(unsigned int*)(a1 + 28140) + 1767i64)) + 2 * v7),
				qword_140C63858);
		LABEL_8:
			if (v9 && (!a2 || a2 == *(_DWORD*)(v9 + 32)))
				v3 += *(_WORD*)(v9 + 16);
			goto LABEL_12;
		}
	}
	return v3;
}
// 140A6A1D8: using guessed type wchar_t *off_140A6A1D8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C653A0: using guessed type __int64 qword_140C653A0;
// 140C65444: using guessed type int dword_140C65444;

