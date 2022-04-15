//----- (00000001408828C0) ----------------------------------------------------
_QWORD* __fastcall sub_1408828C0(unsigned int* a1)
{
	_QWORD* result; // rax
	int v3; // eax

	if (!(unsigned __int8)sub_140881950())
		return 0i64;
	result = (_QWORD*)qword_140C62930;
	if (!qword_140C62930)
	{
		v3 = dword_140C111C0;
		word_140C62970 = 0;
		if (dword_140C111C0 == -1)
		{
			v3 = sub_140881BC0(0i64, *a1, 0x20u, 1, 0);
			dword_140C111C0 = v3;
			if (v3 == -1)
				return 0i64;
		}
		result = (_QWORD*)sub_1408819F0(v3, 8i64);
		if (result)
		{
			*result = off_1409A78B8;
			qword_140C62930 = (__int64)result;
		}
		else
		{
			sub_140881DD0(dword_140C111C0);
			return (_QWORD*)qword_140C62930;
		}
	}
	return result;
}
// 1409A78B8: using guessed type __int64 (__fastcall *off_1409A78B8[3])();
// 140C111C0: using guessed type int dword_140C111C0;
// 140C62930: using guessed type __int64 qword_140C62930;
// 140C62970: using guessed type __int16 word_140C62970;

