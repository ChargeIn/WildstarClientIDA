//----- (00000001405D3310) ----------------------------------------------------
void __fastcall sub_1405D3310(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v4; // [rsp+30h] [rbp+8h] BYREF

	if (*(_DWORD*)(a1 + 688) && (*(_BYTE*)(a1 + 684) & 4) != 0)
	{
		*(_DWORD*)(a1 + 692) = 1;
		v4 = 4i64;
		sub_1403F4900(qword_140C65898, 0x720u, (__int64)&v4);
	}
	else
	{
		sub_1405D3380(a1, a2, a3, a4);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

