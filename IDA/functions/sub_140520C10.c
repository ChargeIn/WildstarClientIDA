//----- (0000000140520C10) ----------------------------------------------------
char __fastcall sub_140520C10(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // edi
	unsigned int v4; // r10d
	__int64 v5; // rdx

	v2 = qword_140C65898;
	v3 = 331;
	v4 = *(_DWORD*)(a1 + 16);
	if (v4)
	{
		if (!*(_QWORD*)(qword_140C65898 + 120) || !qword_140C65898 || (v5 = sub_1405A5B90(qword_140C65898, v4)) == 0)
			v5 = sub_1407A0FD0(qword_140C65B70, v4);
	}
	else
	{
		v5 = 0i64;
	}
	if ((*(_DWORD*)(*(_QWORD*)(v5 + 112) + 264i64) & 0x20000000) != 0)
		v3 = sub_1403994F0(v2, v5, *(_DWORD*)(a1 + 20));
	return sub_1400D4040(
		*(_QWORD*)(a1 + 8),
		"ServiceTokenCastResult",
		*(char**)(a1 + 8),
		"ii",
		*(_DWORD*)(a1 + 16),
		v3);
}
// 140520C5C: variable 'v4' is possibly undefined
// 140520C78: variable 'v2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

