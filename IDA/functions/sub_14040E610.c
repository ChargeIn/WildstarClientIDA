//----- (000000014040E610) ----------------------------------------------------
__int64 __fastcall sub_14040E610(__int64 a1, __int64 a2, int a3, float a4)
{
	unsigned int v4; // ecx
	__int64 v5; // r9
	__int64 v6; // rax
	_DWORD* i; // rcx

	v4 = 0;
	if (a4 < 0.0)
		v4 = 0x80000000;
	if ((int)abs32(v4 - LODWORD(a4)) > 84)
	{
		v5 = a2 + 148;
		v6 = 0i64;
		for (i = (_DWORD*)(a2 + 148); *i != a3; ++i)
		{
			if (*i == 197)
			{
				*(_DWORD*)(v5 + 4 * v6) = a3;
				break;
			}
			v6 = (unsigned int)(v6 + 1);
			if ((unsigned int)v6 >= 0xF)
				return 149i64;
		}
		*(float*)(v5 + 4 * v6 + 60) = a4 + *(float*)(v5 + 4 * v6 + 60);
		if ((unsigned int)(a3 - 48) <= 1)
			*(_DWORD*)(a2 + 32) |= 1u;
	}
	return 0i64;
}

