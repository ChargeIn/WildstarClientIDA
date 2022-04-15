//----- (00000001400A4C30) ----------------------------------------------------
__int64 __fastcall sub_1400A4C30(__int64 a1, _QWORD* a2, _DWORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 0x20ui64);
		if ((int)result >= 0)
			return sub_1400A4920(a1, a2, (__int64)(a3 + 2));
	}
	return result;
}

