//----- (000000014077FBA0) ----------------------------------------------------
__int64 sub_14077FBA0()
{
	unsigned __int64 i; // rax

	for (i = 0i64; i < qword_140C7DE20; ++i)
	{
		if (*(_DWORD*)(*(_QWORD*)(qword_140C7DE18 + 8 * i) + 16i64) == 3)
			break;
	}
	return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "WarPartyBattleOpen", byte_1409EA574);
}
// 1409EA574: using guessed type _BYTE byte_1409EA574[88];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

