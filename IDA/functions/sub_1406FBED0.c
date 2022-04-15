//----- (00000001406FBED0) ----------------------------------------------------
__int64 __fastcall sub_1406FBED0(_QWORD* a1)
{
	unsigned int v1; // eax
	int v2; // ecx

	v1 = sub_140056D60(a1, 1u);
	if (v1 <= 0x1D)
	{
		v2 = 808189952;
		if (_bittest(&v2, v1))
			*(_DWORD*)(qword_140C65898 + 30024) = v1;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

