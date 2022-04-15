//----- (000000014079EB30) ----------------------------------------------------
__int64 __fastcall sub_14079EB30(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
	if (*(_QWORD*)(a1 + 72) || !a2 || (int)sub_14079EB90(a1, a3) < 0)
		return 2147500037i64;
	*(_QWORD*)(a1 + 72) = a2;
	*(_DWORD*)(a1 + 8) = a4;
	return 0i64;
}

