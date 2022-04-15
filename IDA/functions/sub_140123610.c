//----- (0000000140123610) ----------------------------------------------------
_BYTE* __fastcall sub_140123610(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rax
	_DWORD* i; // rcx

	if (a2 == a1[128])
	{
		v2 = 0i64;
		for (i = &unk_140C2C750; *i; i += 4)
		{
			v2 = (unsigned int)(v2 + 1);
			if ((unsigned int)v2 >= 6)
			{
				sub_1400EFDD0(byte_140C8E080, 64i64, "DC_Missing_%d", 0i64);
				return byte_140C8E080;
			}
		}
		return (_BYTE*)*((_QWORD*)&unk_140C2C750 + 2 * v2 + 1);
	}
	else if (a2 == a1[129])
	{
		return sub_1400E8DD0(1u);
	}
	else if (a2 == a1[132])
	{
		return sub_1400E8DD0(4u);
	}
	else if (a2 == a1[133])
	{
		return sub_1400E8DD0(5u);
	}
	else if (a2 == a1[130])
	{
		return sub_1400E8DD0(2u);
	}
	else if (a2 == a1[131])
	{
		return sub_1400E8DD0(3u);
	}
	else
	{
		return &unk_1409D050E;
	}
}
// 140C8E080: using guessed type _BYTE byte_140C8E080[64];

