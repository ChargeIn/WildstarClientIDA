//----- (00000001405A4CE0) ----------------------------------------------------
__int64 __fastcall sub_1405A4CE0(__int64 a1, _DWORD* a2)
{
	unsigned int v3; // eax
	__int64 v4; // r9
	int v5; // ebx
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // eax

	v3 = sub_1403BAD30(qword_140C65898, *(_DWORD*)(a1 + 64), *(_BYTE*)(qword_140C65898 + 28140));
	v5 = v3;
	if (!v3)
		return 0i64;
	if (*(_QWORD*)(v4 + 120))
	{
		if (v4)
		{
			v7 = sub_1405A5B90(v4, v3);
			if (v7)
				goto LABEL_8;
		}
		v6 = v5;
	}
	else
	{
		v6 = v3;
	}
	v7 = sub_1407A0FD0(qword_140C65B70, v6);
	if (!v7)
		return 0i64;
LABEL_8:
	if (!*(_DWORD*)(*(_QWORD*)(v7 + 112) + 404i64))
		return 0i64;
	v9 = sub_1403A8000(v8, v5);
	if (!v9)
		return 1i64;
	if (a2)
		*a2 = v9;
	return 2i64;
}
// 1405A4D0D: variable 'v4' is possibly undefined
// 1405A4D4E: variable 'v8' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

