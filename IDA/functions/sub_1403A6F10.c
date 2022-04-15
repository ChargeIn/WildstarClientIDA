//----- (00000001403A6F10) ----------------------------------------------------
__int64 __fastcall sub_1403A6F10(__int64 a1, __int64* a2)
{
	__int64 v2; // r8
	__int64 v4; // r9
	unsigned __int64 v5; // rcx
	unsigned __int64 v6; // rdx
	_QWORD* v7; // rax

	v2 = *(_QWORD*)(a1 + 26392);
	if (v2)
	{
		v4 = *a2;
		if (*(_DWORD*)(v2 + 16) && (!*(_DWORD*)(v2 + 4) || !*(_DWORD*)(v2 + 12)))
		{
			v5 = *(_QWORD*)(v2 + 32);
			v6 = 0i64;
			if (v5)
			{
				v7 = (_QWORD*)(*(_QWORD*)(v2 + 24) + 16i64);
				while (*v7 != v4)
				{
					++v6;
					v7 += 10;
					if (v6 >= v5)
						goto LABEL_11;
				}
				*(_DWORD*)(v2 + 4) = 0;
				*(_DWORD*)(v2 + 12) = 0;
				sub_14079AD50(v2 + 24, v6);
			}
		}
	LABEL_11:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "P2PTradeChange", byte_1409D1277, v4);
	}
	return 0i64;
}
// 1403A6F8D: variable 'v4' is possibly undefined
// 1409D1277: using guessed type _BYTE byte_1409D1277[19];

