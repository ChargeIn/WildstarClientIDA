//----- (0000000140081E50) ----------------------------------------------------
__int64 __fastcall sub_140081E50(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 1ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C1C0(a1, a3 + 1);
		if ((int)result >= 0)
			return sub_14006C1C0(a1, a3 + 2);
	}
	return result;
}

