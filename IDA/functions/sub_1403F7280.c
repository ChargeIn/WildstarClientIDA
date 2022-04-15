//----- (00000001403F7280) ----------------------------------------------------
void __fastcall sub_1403F7280(__int64 a1, __int64 a2)
{
	__int64 v2; // rdx
	int v3; // eax

	if (qword_140C65898)
	{
		v2 = *(_QWORD*)(a2 + 8);
		v3 = dword_140C44F90;
		if (*(_DWORD*)qword_140C63750 < dword_140C44F90)
			v3 = *(_DWORD*)qword_140C63750;
		sub_1403F7130(qword_140C65898, v2, (unsigned int)dword_140C44FA0[v3], 2);
	}
}
// 140C44F90: using guessed type int dword_140C44F90;
// 140C44FA0: using guessed type int dword_140C44FA0[12];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

