//----- (00000001407BC740) ----------------------------------------------------
__int64 __fastcall sub_1407BC740(__int64 a1)
{
	__int64 result; // rax

	result = 256i64;
	if (*(_DWORD*)(a1 + 168))
		result = 12i64;
	if (*(_DWORD*)(a1 + 180))
		return (unsigned int)result | 0x30;
	return result;
}

