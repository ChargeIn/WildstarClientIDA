//----- (000000014018A3E0) ----------------------------------------------------
__int64 __fastcall sub_14018A3E0(unsigned __int64 a1)
{
	unsigned __int64 v1; // rcx
	unsigned __int64 v2; // rcx
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // rcx

	if (a1 > 0x100)
	{
		v4 = (a1 + 15) | ((a1 + 15) >> 32) | (((a1 + 15) | ((a1 + 15) >> 32)) >> 16) | (((a1 + 15) | ((a1 + 15) >> 32) | (((a1 + 15) | ((a1 + 15) >> 32)) >> 16)) >> 8);
		v5 = v4 | (v4 >> 4) | ((v4 | (v4 >> 4)) >> 2);
		return (v5 | (v5 >> 1)) - 15;
	}
	else
	{
		v1 = (a1 - 1) | ((a1 - 1) >> 32) | (((a1 - 1) | ((a1 - 1) >> 32)) >> 16) | (((a1 - 1) | ((a1 - 1) >> 32) | (((a1 - 1) | ((a1 - 1) >> 32)) >> 16)) >> 8);
		v2 = v1 | (v1 >> 4) | ((v1 | (v1 >> 4)) >> 2);
		return (v2 | (v2 >> 1)) + 1;
	}
}
