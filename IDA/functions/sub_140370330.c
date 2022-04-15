//----- (0000000140370330) ----------------------------------------------------
__int64 __fastcall sub_140370330(_QWORD* a1, __int64 a2)
{
	unsigned __int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v6; // r9
	__int64 v7; // r8

	v3 = a1[8];
	v4 = 0;
	if (v3)
	{
		v6 = a1[7];
		v7 = 0i64;
		while (*(_QWORD*)(v6 + 8 * v7) != a2)
		{
			v7 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		*(_QWORD*)(v6 + 8i64 * v4) = *(_QWORD*)(v6 + 8 * v3 - 8);
		sub_14004EED0(a1 + 7, a1[8] - 1i64);
	}
	else
	{
	LABEL_5:
		if (!a1[6]
			|| !(unsigned int)((__int64 (*)(void))sub_140370330)()
			&& !(unsigned int)sub_140370330(a1[6] + 80i64, a2)
			&& !(unsigned int)sub_140370330(a1[6] + 160i64, a2)
			&& !(unsigned int)sub_140370330(a1[6] + 240i64, a2))
		{
			return 0i64;
		}
	}
	return 1i64;
}

