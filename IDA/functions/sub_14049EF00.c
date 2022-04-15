//----- (000000014049EF00) ----------------------------------------------------
__int64 __fastcall sub_14049EF00(__int64 a1, int a2, unsigned int a3)
{
	__int64* i; // rax
	unsigned int v4; // ecx

	for (i = *(__int64**)(*(_QWORD*)(qword_140C65898 + 29344)
		+ 8
		* (a3
			% (unsigned __int64)((__int64)(*(_QWORD*)(qword_140C65898 + 29352)
				- *(_QWORD*)(qword_140C65898 + 29344)) >> 3))); i; i = (__int64*)*i)
	{
		if (*((_DWORD*)i + 2) == a3)
			break;
	}
	v4 = 0;
	if (a2 == 1)
		return i != 0i64;
	if (a2 == 2)
		LOBYTE(v4) = i == 0i64;
	return v4;
}
// 140C65898: using guessed type __int64 qword_140C65898;

