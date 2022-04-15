//----- (0000000140882470) ----------------------------------------------------
__int64 __fastcall sub_140882470(unsigned __int64 a1)
{
	int v1; // eax
	unsigned __int64 v2; // rdx

	v1 = 32;
	v2 = HIDWORD(a1);
	if (HIDWORD(a1))
	{
		if ((a1 & 0xFFFF000000000000ui64) == 0)
		{
			LODWORD(v2) = HIDWORD(a1) << 16;
			v1 = 16;
		}
		if ((v2 & 0xFF000000) == 0)
		{
			LODWORD(v2) = (_DWORD)v2 << 8;
			v1 -= 8;
		}
		if ((v2 & 0xF0000000) == 0)
		{
			LODWORD(v2) = 16 * v2;
			v1 -= 4;
		}
		if ((v2 & 0xC0000000) == 0)
		{
			LODWORD(v2) = 4 * v2;
			v1 -= 2;
		}
		if ((v2 & 0x80000000) == 0i64)
			--v1;
		return (unsigned int)(v1 + 31);
	}
	else
	{
		if (!(_DWORD)a1)
			v1 = 31;
		if ((a1 & 0xFFFF0000) == 0)
		{
			LODWORD(a1) = (_DWORD)a1 << 16;
			v1 -= 16;
		}
		if ((a1 & 0xFF000000) == 0)
		{
			LODWORD(a1) = (_DWORD)a1 << 8;
			v1 -= 8;
		}
		if ((a1 & 0xF0000000) == 0)
		{
			LODWORD(a1) = 16 * a1;
			v1 -= 4;
		}
		if ((a1 & 0xC0000000) == 0)
		{
			LODWORD(a1) = 4 * a1;
			v1 -= 2;
		}
		if ((a1 & 0x80000000) == 0i64)
			--v1;
		return (unsigned int)(v1 - 1);
	}
}

