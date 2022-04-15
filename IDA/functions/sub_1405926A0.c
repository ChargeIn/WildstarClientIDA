//----- (00000001405926A0) ----------------------------------------------------
__int64 __fastcall sub_1405926A0(__int64 a1)
{
	__int64 result; // rax

	if (!a1)
		return 44i64;
	if (*(_DWORD*)(a1 + 8) == 22)
		return 79i64;
	if ((*(_BYTE*)(a1 + 32) & 4) == 0)
		return 44i64;
	result = 87i64;
	if (*(_DWORD*)(a1 + 28))
		return 44i64;
	return result;
}

