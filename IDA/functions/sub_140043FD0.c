//----- (0000000140043FD0) ----------------------------------------------------
__int64 __fastcall sub_140043FD0(__int64 a1)
{
	_DWORD* v2; // rax
	_DWORD* v3; // rcx
	int v4; // eax
	int v5; // edx
	int v6; // r8d

	if (qword_140C65898)
	{
		v2 = *(_DWORD**)(a1 + 24);
		v3 = dword_140A12138;
		if ((unsigned __int64)v2 < *(_QWORD*)(a1 + 16))
			v3 = v2;
		v4 = v3[2];
		if (v4 && (v4 != 1 || *v3))
		{
			v5 = dword_140C3DA70;
			v6 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 2568i64);
			if (*(_DWORD*)qword_140C63750 < dword_140C3DA70)
				v5 = *(_DWORD*)qword_140C63750;
		}
		else
		{
			v5 = dword_140C3DA70;
			if (*(_DWORD*)qword_140C63750 < dword_140C3DA70)
				v5 = *(_DWORD*)qword_140C63750;
			v6 = 0;
		}
		sub_14002C690((__int64)&off_140C3DA60, v5, v6);
		sub_1400437C0();
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C3DA60: using guessed type __int64 (__fastcall *off_140C3DA60)();
// 140C3DA70: using guessed type int dword_140C3DA70;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

