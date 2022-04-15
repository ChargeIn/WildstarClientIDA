//----- (000000014041F750) ----------------------------------------------------
__int64 __fastcall sub_14041F750(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rdi
	unsigned int v4; // ecx
	int v5; // edx

	v2 = qword_140C65898;
	if (a2)
	{
		if ((a2[85] & 0x400) != 0 && a2[96])
		{
			v4 = sub_1403B4710(qword_140C65898, a2, 0i64);
			if (v4 == 41)
			{
				if (a2[95] != 20)
					v4 = 0;
			}
			else if (v4 == 42)
			{
				v4 = 0;
			}
		}
		else
		{
			v4 = 31;
		}
	}
	else
	{
		v4 = 6;
	}
	v5 = a2[95];
	if ((unsigned int)(v5 - 1) > 5)
	{
		if (v5 == 20)
			goto LABEL_14;
		return 31i64;
	}
	if ((unsigned int)(v5 - 1) >= 7)
		return 31i64;
LABEL_14:
	if (v4 == 6 || (a2[83] & 0x4000) == 0 || !v5)
		return v4;
	if (v5 != 20 || (unsigned int)sub_1403CA2B0(v2, a2[103]))
		return 0i64;
	return 41i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

