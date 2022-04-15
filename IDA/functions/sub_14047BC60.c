//----- (000000014047BC60) ----------------------------------------------------
__int64 __fastcall sub_14047BC60(int* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	unsigned int v5; // ecx
	int v7; // edx
	__int64 v8; // rcx

	v2 = sub_1403D90D0(qword_140C65898, a1[48]);
	v3 = v2;
	if (!v2)
		return 0i64;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2))
		return 0i64;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 32i64))(v3))
	{
		v4 = *(_QWORD*)(v3 + 184);
		if (v4)
		{
			if (*(_DWORD*)(v4 + 4) == 6)
				return 0i64;
		}
	}
	if (!*(_QWORD*)(v3 + 24) || !*(_QWORD*)(v3 + 184))
		return 0i64;
	v5 = a1[50];
	if (*(_DWORD*)(v3 + 128) == 7)
	{
		if (!a1[49] && !v5)
			return 66i64;
		return 0i64;
	}
	v7 = a1[49];
	if (v7)
	{
		if (v7 == 1 && v5 < 6)
			return dword_140B670D8[a1[50]];
		return 0i64;
	}
	if (v5)
		return 0i64;
	v8 = *(_QWORD*)(v3 + 5864);
	if (!v8 || !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 848i64))(v8, 19i64))
		return 66i64;
	return 19i64;
}
// 140B670D8: using guessed type unsigned int dword_140B670D8[6];
// 140C65898: using guessed type __int64 qword_140C65898;

