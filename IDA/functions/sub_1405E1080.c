//----- (00000001405E1080) ----------------------------------------------------
__int64 __fastcall sub_1405E1080(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	unsigned int** v6; // rbx
	unsigned int* v7; // rbx

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 424))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 416) + 8 * (v4 % *(_QWORD*)(a1 + 408)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 432))(a2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return 0i64;
		}
		v6 = (unsigned int**)(v5 + 3);
		if (v6)
		{
			v7 = *v6;
			if (v7)
			{
				v7[16] = *(_DWORD*)(a2 + 4);
				sub_1405DCBE0(v7, *(_DWORD*)(a2 + 8), *(_QWORD*)(a2 + 16));
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipAccountDataUpdate", byte_1409EACD4, *v7);
			}
		}
	}
	return 0i64;
}
// 1409EACD4: using guessed type _BYTE byte_1409EACD4[24];
// 140C65898: using guessed type __int64 qword_140C65898;

