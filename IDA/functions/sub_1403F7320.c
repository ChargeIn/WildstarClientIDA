//----- (00000001403F7320) ----------------------------------------------------
void __fastcall sub_1403F7320(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int64 v3; // rdi
	unsigned int v4; // ebx
	int v5; // eax

	if (qword_140C65898)
	{
		v2 = dword_140C45050;
		v3 = *(_QWORD*)(a2 + 8);
		if (*(_DWORD*)qword_140C63750 < dword_140C45050)
			v2 = *(_DWORD*)qword_140C63750;
		v4 = dword_140C45060[v2];
		v5 = dword_140C44FF0;
		if (*(_DWORD*)qword_140C63750 < dword_140C44FF0)
			v5 = *(_DWORD*)qword_140C63750;
		sub_1403F7130(qword_140C65898, v3, (unsigned int)dword_140C45000[v5], 3);
		sub_1403F7130(qword_140C65898, v3, v4, 4);
	}
}
// 140C44FF0: using guessed type int dword_140C44FF0;
// 140C45000: using guessed type int dword_140C45000[12];
// 140C45050: using guessed type int dword_140C45050;
// 140C45060: using guessed type int dword_140C45060[12];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

