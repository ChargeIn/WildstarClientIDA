//----- (0000000140087A10) ----------------------------------------------------
__int64 __fastcall sub_140087A10(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 3ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 4ui64);
		if ((int)result >= 0)
			return sub_140336A40(a1, a2, (_QWORD*)(a3 + 8));
	}
	return result;
}

