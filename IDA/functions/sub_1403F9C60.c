//----- (00000001403F9C60) ----------------------------------------------------
void __fastcall sub_1403F9C60(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	int v4; // eax
	__int64* v5; // rcx
	__int64 v6; // rax
	int v7; // eax

	v2 = qword_140C65898;
	if (!*(_QWORD*)(a2 + 40))
	{
		v4 = sub_140542F80(a2);
		v5 = (__int64*)(v2 + 5600);
		if (!v4)
			v5 = (__int64*)(v2 + 5608);
		if (!*(_QWORD*)(a2 + 40))
		{
			*(_QWORD*)(a2 + 40) = v5;
			*(_QWORD*)(a2 + 48) = *v5;
			*v5 = a2;
			v6 = *(_QWORD*)(a2 + 48);
			if (v6)
				*(_QWORD*)(v6 + 40) = a2 + 48;
		}
		if (!(unsigned int)sub_140542F80(a2)
			&& !(unsigned int)sub_140543030(a2)
			&& *(float*)(v2 + 5616) <= *(float*)(a2 + 424))
		{
			v7 = dword_140C44E40;
			if (*(_DWORD*)qword_140C63750 < dword_140C44E40)
				v7 = *(_DWORD*)qword_140C63750;
			sub_140543240(a2, *((float*)&xmmword_140C44E50 + v7), 1.0);
		}
	}
}
// 140C44E40: using guessed type int dword_140C44E40;
// 140C44E50: using guessed type __int128 xmmword_140C44E50;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

