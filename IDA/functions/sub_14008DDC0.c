//----- (000000014008DDC0) ----------------------------------------------------
__int64 __fastcall sub_14008DDC0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
		return sub_14006BF60(a1, (_WORD*)(a3 + 4), 0x10ui64);
	return result;
}
