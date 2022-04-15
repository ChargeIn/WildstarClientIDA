//----- (00000001403F73C0) ----------------------------------------------------
void __fastcall sub_1403F73C0(__int64 a1, unsigned int a2)
{
	int v2; // eax

	if (qword_140C65898)
	{
		v2 = dword_140C7B170;
		if (*(_DWORD*)qword_140C63750 < dword_140C7B170)
			v2 = *(_DWORD*)qword_140C63750;
		sub_1403F7130(qword_140C65898, qword_140C7B188[4 * v2], a2, 3);
	}
}
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7B170: using guessed type int dword_140C7B170;
// 140C7B188: using guessed type _QWORD qword_140C7B188[48];

