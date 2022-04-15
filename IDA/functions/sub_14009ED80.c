//----- (000000014009ED80) ----------------------------------------------------
__int64 __fastcall sub_14009ED80(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14009CF10(a1, a2, a3);
	if ((int)result >= 0)
		return sub_14006C090(a1, (_DWORD*)(a3 + 40), 3ui64);
	return result;
}

