//----- (000000014048F960) ----------------------------------------------------
__int64 __fastcall sub_14048F960(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rax
	unsigned int v4; // ecx
	unsigned int v5; // edx

	if ((dword_140DC30A8 & 1) != 0)
	{
		v5 = dword_140DC30AC;
	}
	else
	{
		dword_140DC30A8 |= 1u;
		v3 = sub_140200220(0x416u);
		if (v3)
			v4 = *(_DWORD*)(v3 + 4);
		else
			v4 = 30000;
		v5 = v4 / 0x3E8;
		dword_140DC30AC = v4 / 0x3E8;
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeShared", byte_1409E99B4, *a2, a2[1], v5);
	return 0i64;
}
// 1409E99B4: using guessed type _BYTE byte_1409E99B4[72];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC30A8: using guessed type int dword_140DC30A8;
// 140DC30AC: using guessed type int dword_140DC30AC;

