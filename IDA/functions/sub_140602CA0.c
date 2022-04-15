//----- (0000000140602CA0) ----------------------------------------------------
__int64 __fastcall sub_140602CA0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v6; // rcx

	v3 = *(_QWORD*)(a1 + 64);
	if (v3 && *(_QWORD*)(v3 + 72) == *(_QWORD*)a2)
	{
		v4 = qword_140C65898;
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
		*(_DWORD*)(*(_QWORD*)(a1 + 64) + 8i64) = *(_DWORD*)(a2 + 16);
		sub_1400EA3E0(*(_QWORD*)(v4 + 29504), "Group_FlagsChanged", &unk_1409D0E6E);
		return 0i64;
	}
	else
	{
		v6 = *(_QWORD*)(a1 + 72);
		if (v6)
		{
			if (*(_QWORD*)(v6 + 72) == *(_QWORD*)a2)
				*(_DWORD*)(v6 + 8) = *(_DWORD*)(a2 + 16);
		}
		return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

