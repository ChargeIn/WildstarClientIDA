//----- (00000001400594E0) ----------------------------------------------------
__int64 __fastcall sub_1400594E0(__int64 a1)
{
	__int64 result; // rax
	unsigned __int8* v3; // rcx

	if (!a1)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		return 0xFFFFFFFFi64;
	}
	v3 = *(unsigned __int8**)(a1 + 16);
	if (v3 == *(unsigned __int8**)(a1 + 8))
		return 0xFFFFFFFFi64;
	result = *v3;
	*(_QWORD*)(a1 + 16) = v3 + 1;
	return result;
}

