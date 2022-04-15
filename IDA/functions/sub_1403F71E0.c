//----- (00000001403F71E0) ----------------------------------------------------
void __fastcall sub_1403F71E0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdx
	int v3; // eax

	if (qword_140C65898)
	{
		v2 = *(_QWORD*)(a2 + 8);
		v3 = dword_140C44ED0;
		if (*(_DWORD*)qword_140C63750 < dword_140C44ED0)
			v3 = *(_DWORD*)qword_140C63750;
		sub_1403F7130(qword_140C65898, v2, (unsigned int)dword_140C44EE0[v3], 1);
	}
}
// 140C44ED0: using guessed type int dword_140C44ED0;
// 140C44EE0: using guessed type int dword_140C44EE0[12];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

