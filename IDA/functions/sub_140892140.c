//----- (0000000140892140) ----------------------------------------------------
char __fastcall sub_140892140(_QWORD* a1, int a2, _QWORD* a3)
{
	__int64* v3; // rbx

	v3 = (__int64*)a1[21];
	if (v3 == (__int64*)a1[22])
		return sub_140852ED0(a1, a2, a3, 0);
	while (!sub_140894300(*v3, a2, a3))
	{
		if (++v3 == (__int64*)a1[22])
			return sub_140852ED0(a1, a2, a3, 0);
	}
	return 1;
}

