//----- (00000001406F85C0) ----------------------------------------------------
__int64 sub_1406F85C0()
{
	_DWORD* v0; // rbx
	int v1; // eax
	int v2; // eax

	v0 = (_DWORD*)qword_140C65898;
	v1 = *(_DWORD*)(qword_140C65898 + 29820);
	if (v1 <= 0)
	{
		if (*(float*)(qword_140C65898 + 29760) != 1.0 || (float)0.0 != *(float*)(qword_140C65898 + 29764))
		{
			v2 = dword_140C636A8;
			*(_QWORD*)(qword_140C65898 + 29760) = 1065353216i64;
			v0[7438] = 1065353216;
			v0[7436] = v2;
		}
	}
	else
	{
		sub_1400C3230(qword_140C65898 + 29736, 0.0, 1.0, 1000.0 / (float)v1);
	}
	v0[7442] = 1;
	v0[7443] = 1065353216;
	v0[7444] = 1;
	return 0i64;
}
// 140B7B510: using guessed type __int128 xmmword_140B7B510;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

