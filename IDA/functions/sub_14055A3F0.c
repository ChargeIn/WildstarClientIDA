//----- (000000014055A3F0) ----------------------------------------------------
void __fastcall sub_14055A3F0(_DWORD* a1)
{
	__int64 v1; // rdi
	__int64 v3; // rcx
	BOOL v4; // ebp
	__int64 v5; // rdi
	int v6; // eax
	int v7; // esi
	BOOL v8; // ecx
	int v9; // eax
	int v10; // eax
	bool v11; // zf

	v1 = qword_140C65898;
	if (qword_140C65898)
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29504);
		v4 = *a1 > 0;
		if (v3)
			*a1 = *(_DWORD*)(v3 + 3344) != 0;
		v5 = *(_QWORD*)(v1 + 120);
		if (v5)
		{
			v6 = dword_140C4D320;
			v7 = 1;
			if (*(_DWORD*)qword_140C63750 < dword_140C4D320)
				v6 = *(_DWORD*)qword_140C63750;
			v8 = *((_BYTE*)&dword_140C4D330 + v6)
				&& ((*(_BYTE*)(v5 + 4208) & 2) != 0
					|| sub_14047BD80(v5)
					&& sub_14039DE90(qword_140C65898)
					&& (*(_BYTE*)(sub_14039DE90(qword_140C65898) + 4208) & 2) != 0);
			v9 = dword_140C4D2E0;
			if (*(_DWORD*)qword_140C63750 < dword_140C4D2E0)
				v9 = *(_DWORD*)qword_140C63750;
			if ((!*((_BYTE*)&dword_140C4D2F0 + v9) || (*(_BYTE*)(v5 + 4208) & 2) != 0) && !v8)
			{
				v10 = dword_140C4D360;
				if (*(_DWORD*)qword_140C63750 < dword_140C4D360)
					v10 = *(_DWORD*)qword_140C63750;
				if (!*((_BYTE*)&dword_140C4D370 + v10) || !*(_DWORD*)(v5 + 684))
					v7 = 0;
			}
			v11 = a1[3] == 0;
			a1[1] = v7;
			if (!v11 && ((*(_DWORD*)(qword_140C635F0 + 64) & 0x2000) == 0 || v4))
				a1[3] = 0;
		}
	}
}
// 140C4D2E0: using guessed type int dword_140C4D2E0;
// 140C4D2F0: using guessed type int dword_140C4D2F0;
// 140C4D320: using guessed type int dword_140C4D320;
// 140C4D330: using guessed type int dword_140C4D330;
// 140C4D360: using guessed type int dword_140C4D360;
// 140C4D370: using guessed type int dword_140C4D370;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

