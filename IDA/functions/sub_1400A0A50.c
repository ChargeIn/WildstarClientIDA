//----- (00000001400A0A50) ----------------------------------------------------
__int64 __fastcall sub_1400A0A50(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_1400A0960(a1, a2, a3);
	if ((int)result >= 0)
		return sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
	return result;
}

