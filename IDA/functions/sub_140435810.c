//----- (0000000140435810) ----------------------------------------------------
__int64 __fastcall sub_140435810(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r9

	if (a2)
		v3 = *(unsigned int*)(*(_QWORD*)(a2 + 8) + 4i64);
	else
		v3 = 5i64;
	return sub_1400EA3E0(*(_QWORD*)(a1 + 96), "RewardTrackActive", byte_1409EFD5C, v3, a2, a3);
}
// 1409EFD5C: using guessed type _BYTE byte_1409EFD5C[176];

