//----- (0000000140619730) ----------------------------------------------------
__int64 __fastcall sub_140619730(__int64 a1, _DWORD* a2, unsigned __int8 a3)
{
	unsigned int v3; // ebx
	__int64 v4; // rax

	if (((a3 ^ *(_BYTE*)a2) & 2) != 0)
	{
		v3 = (*a2 >> 1) & 1;
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "CommodityAuctionsDisabled", byte_1409EC70C, v3);
		v4 = qword_140C65898;
		if (v3 && *(_DWORD*)(qword_140C65898 + 26180) == 75)
		{
			sub_1403A71F0(qword_140C65898, 0, 0x65u, 1);
			v4 = qword_140C65898;
		}
		*(_DWORD*)(v4 + 28568) = 1;
	}
	return 0i64;
}
// 1409EC70C: using guessed type _BYTE byte_1409EC70C[4];
// 140C65898: using guessed type __int64 qword_140C65898;

