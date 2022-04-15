//----- (000000014009C100) ----------------------------------------------------
__int64 __fastcall sub_14009C100(__int64 a1, _QWORD* a2, unsigned __int16* a3)
{
	int v7; // esi
	__int64 v8; // rax
	unsigned __int16 i; // bx

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006BF60(a1, a3, 0x10ui64);
	if (v7 >= 0)
	{
		v8 = sub_1403374E0(a2, (unsigned __int64)*a3 << 6);
		*((_QWORD*)a3 + 1) = v8;
		if (!v8)
			return 2147500037i64;
		for (i = 0; i < *a3; ++i)
		{
			v7 = sub_14009BFD0(a1, a2, *((_QWORD*)a3 + 1) + ((unsigned __int64)i << 6));
			if (v7 < 0)
				break;
		}
	}
	return (unsigned int)v7;
}

