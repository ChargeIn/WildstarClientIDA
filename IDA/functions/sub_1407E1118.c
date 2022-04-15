//----- (00000001407E1118) ----------------------------------------------------
__int64 __fastcall sub_1407E1118(_DWORD* a1)
{
	int v3; // eax

	if (!a1)
		return sub_1407E1230(0);
	if ((unsigned int)sub_1407E1164(a1))
		return 0xFFFFFFFFi64;
	if ((a1[6] & 0x4000) == 0)
		return 0i64;
	v3 = sub_1407EA35C((__int64)a1);
	return (unsigned int)-((unsigned int)sub_1407EF768(v3) != 0);
}

