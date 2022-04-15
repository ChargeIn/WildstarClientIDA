//----- (0000000140561AD0) ----------------------------------------------------
__int64 __fastcall sub_140561AD0(__int64 a1, __int64 a2)
{
	int v5; // ebx
	int v6; // ebx
	int v7; // eax
	unsigned __int64 v8; // rbp
	__int64 v9; // rbx
	__int64 v10; // rcx
	int v11; // [rsp+38h] [rbp+10h] BYREF

	if (!a2)
		return 4i64;
	sub_14053D140(a2);
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
	if (v5 == (unsigned int)sub_1403982A0(qword_140C65898, 1))
		goto LABEL_8;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 8i64))(a2);
	if (v6 == (unsigned int)sub_1403982A0(qword_140C65898, 0))
	{
		v7 = dword_140C45DE0;
		if (*(_DWORD*)qword_140C63750 < dword_140C45DE0)
			v7 = *(_DWORD*)qword_140C63750;
		if (dword_140C45DF0[v7] == 1)
			LABEL_8:
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "SprintStateUpdated", "b", 0i64);
	}
	if (!*(_QWORD*)(a2 + 56))
	{
		v11 = *(_DWORD*)(a2 + 92);
		v8 = (*(__int64(__fastcall**)(int*))(a1 + 1976))(&v11);
		v9 = *(_QWORD*)(a1 + 1968) + 8 * (v8 % *(_QWORD*)(a1 + 1960));
		if (*(_QWORD*)v9)
		{
			while (v8 != **(_QWORD**)v9
				|| !(*(unsigned int(__fastcall**)(int*, __int64))(a1 + 1984))(&v11, *(_QWORD*)v9 + 16i64))
			{
				v9 = *(_QWORD*)v9 + 8i64;
				if (!*(_QWORD*)v9)
					goto LABEL_16;
			}
			v10 = *(_QWORD*)v9;
			*(_QWORD*)v9 = *(_QWORD*)(*(_QWORD*)v9 + 8i64);
			sub_14018B900(v10, 0);
			--* (_QWORD*)(a1 + 1952);
		}
	}
LABEL_16:
	(**(void(__fastcall***)(__int64, __int64))a2)(a2, 1i64);
	return 0i64;
}
// 140C45DE0: using guessed type int dword_140C45DE0;
// 140C45DF0: using guessed type int dword_140C45DF0[];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

