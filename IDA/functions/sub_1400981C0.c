//----- (00000001400981C0) ----------------------------------------------------
__int64 __fastcall sub_1400981C0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
		return sub_140337160(a1, (_BYTE*)(a3 + 4), 12i64);
	return result;
}

