//----- (00000001405DCE30) ----------------------------------------------------
void __fastcall sub_1405DCE30(unsigned int* a1, __int64 a2, int a3)
{
	unsigned __int64 v3; // r11
	__int64 v4; // r9
	__int64 i; // r10
	__int64 v6; // rax

	v3 = *((_QWORD*)a1 + 14);
	v4 = 0i64;
	if (v3)
	{
		for (i = *((_QWORD*)a1 + 13);
			*(_DWORD*)(*(_QWORD*)i + 8i64) != *(_DWORD*)a2 || *(_QWORD*)(*(_QWORD*)i + 16i64) != *(_QWORD*)(a2 + 8);
			i += 8i64)
		{
			if (++v4 >= v3)
				return;
		}
		v6 = *(_QWORD*)(*((_QWORD*)a1 + 13) + 8 * v4);
		if (v6)
		{
			if (*(_DWORD*)(v6 + 40) != a3)
			{
				*(_DWORD*)(v6 + 40) = a3;
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipAccountDataUpdate", byte_1409EACD4, *a1);
			}
		}
	}
}
// 1409EACD4: using guessed type _BYTE byte_1409EACD4[24];
// 140C65898: using guessed type __int64 qword_140C65898;

