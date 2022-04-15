//----- (0000000140894360) ----------------------------------------------------
char __fastcall sub_140894360(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // r8

	v1 = *(_QWORD*)(a1 + 168);
	v2 = *(_QWORD*)(a1 + 176);
	if (v1 == v2)
		return 0;
	while ((*(_DWORD*)(*(_QWORD*)(v1 + 8) + 16i64) & 0x80) == 0)
	{
		v1 += 16i64;
		if (v1 == v2)
			return 0;
	}
	return 1;
}

