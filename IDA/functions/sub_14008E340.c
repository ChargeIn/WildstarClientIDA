//----- (000000014008E340) ----------------------------------------------------
__int64 __fastcall sub_14008E340(__int64 a1, _QWORD* a2, unsigned __int8* a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax
	_BYTE* v8; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006BE30(a1, a3, 7ui64);
	if ((int)result >= 0)
	{
		v7 = (_BYTE*)sub_1403374E0(a2, *a3);
		*((_QWORD*)a3 + 1) = v7;
		if (!v7)
			return 2147500037i64;
		result = sub_140337160(a1, v7, *a3);
		if ((int)result < 0)
			return result;
		v8 = (_BYTE*)sub_1403374E0(a2, *a3);
		*((_QWORD*)a3 + 2) = v8;
		if (!v8)
			return 2147500037i64;
		return sub_140337160(a1, v8, *a3);
	}
	return result;
}

