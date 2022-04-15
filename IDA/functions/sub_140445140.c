//----- (0000000140445140) ----------------------------------------------------
__int64 __fastcall sub_140445140(unsigned int a1, int a2, int a3)
{
	signed int v3; // ebx
	int v5; // r8d
	__int64 result; // rax
	__int64 v7; // rax

	v3 = a2;
	if (a3 >= 0)
	{
		v7 = sub_14020B8E0(a1);
		result = sub_1401DC0D0(v7);
		if (v3 >= 0)
			return result;
		if (a1)
		{
			if ((v3 & 0x3FF) == 0)
				v3 ^= ((unsigned __int16)v3 ^ (unsigned __int16)result) & 0x3FF;
			if ((v3 & 0xFFC00) == 0)
				v3 ^= (v3 ^ result) & 0xFFC00;
			if ((v3 & 0x3FF00000) == 0)
				v3 ^= (v3 ^ result) & 0x3FF00000;
		}
	}
	else
	{
		if (a2 == a3 || a2 >= 0)
			return (unsigned int)a3;
		if ((a3 & 0x3FF) != 0)
			v3 = a3 & 0x3FF | a2 & 0xFFFFFC00;
		if ((a3 & 0xFFC00) != 0)
			v3 = a3 & 0xFFC00 | v3 & 0xFFF003FF;
		v5 = a3 & 0x3FF00000;
		if (v5)
			return v5 | v3 & 0xC00FFFFF;
	}
	return (unsigned int)v3;
}

