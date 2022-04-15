//----- (0000000140851BA0) ----------------------------------------------------
_WORD* __fastcall sub_140851BA0(_QWORD* a1, unsigned __int16 a2)
{
	_WORD* result; // rax
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rcx

	result = (_WORD*)a1[7];
	if (result)
	{
		--result[37];
		v5 = a1[7];
		if (!*(_WORD*)(v5 + 72)
			&& !*(_WORD*)(v5 + 74)
			&& !*(_WORD*)(v5 + 76)
			&& !*(_WORD*)(v5 + 78)
			&& !*(_QWORD*)(v5 + 24))
		{
			result = *(_WORD**)v5;
			if (*(_QWORD*)(v5 + 8) == *(_QWORD*)v5)
				result = (_WORD*)sub_1408520B0((__int64)a1);
		}
	}
	if ((a2 & 1) != 0)
	{
		v6 = a1[9];
		if (v6)
		{
			a2 &= ~1u;
			result = (_WORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 312i64))(v6, 3i64);
		}
	}
	if ((a2 & 2) != 0)
	{
		result = (_WORD*)a1[13];
		if (result)
		{
			if (*(_QWORD*)result)
			{
				a2 &= ~2u;
				result = (_WORD*)(*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)result + 312i64))(
					*(_QWORD*)result,
					3i64);
			}
		}
	}
	v7 = a1[8];
	if (v7)
		return (_WORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v7 + 312i64))(v7, a2);
	return result;
}

