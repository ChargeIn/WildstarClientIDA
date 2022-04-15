//----- (0000000140605380) ----------------------------------------------------
__int64 __fastcall sub_140605380(__int64 a1, unsigned __int16* a2)
{
	_QWORD* v2; // rdi
	unsigned __int64 v4; // rsi
	unsigned __int64 v5; // rbx
	unsigned __int64 v6; // rcx
	__int64 v7; // rcx

	v2 = *(_QWORD**)(a1 + 64);
	if (!v2)
		return -1i64;
	v4 = v2[12];
	v5 = 0i64;
	if (!v4)
		return -1i64;
	while (1)
	{
		v6 = v5;
		if (v5 >= v4)
		{
			v7 = 0i64;
		}
		else if (v5)
		{
			if (v5 <= v2[13])
				v6 = v5 - 1;
			v7 = *(_QWORD*)(v2[11] + 8 * v6);
		}
		else
		{
			v7 = *(_QWORD*)(v2[11] + 8i64 * v2[13]);
		}
		if (!(unsigned int)sub_14018E2C0(v7 + 32, a2))
			break;
		if (++v5 >= v4)
			return -1i64;
	}
	return v5;
}

