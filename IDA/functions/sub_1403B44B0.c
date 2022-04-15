//----- (00000001403B44B0) ----------------------------------------------------
__int64 __fastcall sub_1403B44B0(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
	_DWORD* v9; // rax
	__int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF

	if (a5)
	{
		if ((unsigned int)sub_14046C580(a4, a6) == a2)
			return 0i64;
		if ((*(_BYTE*)(a4 + 36) & 1) != 0)
		{
			if (!a3)
				return 89i64;
			goto LABEL_7;
		}
	}
	if (!a3)
		return 0i64;
LABEL_7:
	v10[1] = a4;
	v10[0] = (__int64)off_140B66440;
	v9 = (_DWORD*)sub_1403B4A10((__int64)v10, a3);
	return sub_1403B4A20((__int64)v10, v9);
}
// 1403B4514: conditional instruction was optimized away because ebx.4!=0
// 140B66440: using guessed type __int64 (__fastcall *off_140B66440[9])();

