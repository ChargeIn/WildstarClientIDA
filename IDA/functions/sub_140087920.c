//----- (0000000140087920) ----------------------------------------------------
__int64 __fastcall sub_140087920(__int64 a1, _QWORD* a2, __int64* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, a3, (__int64)a3);
	if ((int)result >= 0)
	{
		result = sub_140336980(a1, a2, a3 + 1);
		if ((int)result >= 0)
			return sub_140336A40(a1, a2, a3 + 2);
	}
	return result;
}

