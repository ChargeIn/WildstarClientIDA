//----- (00000001400A8B70) ----------------------------------------------------
__int64 __fastcall sub_1400A8B70(__int64 a1, __int64 a2, _WORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006BF60(a1, a3, 0x10ui64);
	if ((int)result < 0)
		return result;
	if (a3 == (_WORD*)-2i64)
		return 2147500037i64;
	result = sub_14006BF60(a1, a3 + 1, 0x10ui64);
	if ((int)result < 0)
		return result;
	if (a3 == (_WORD*)-4i64)
		return 2147500037i64;
	else
		return sub_14006BF60(a1, a3 + 2, 0x10ui64);
}

