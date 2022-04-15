//----- (000000014088BEB0) ----------------------------------------------------
__int64 __fastcall sub_14088BEB0(__int64 a1)
{
	unsigned int v1; // edx
	__int64 result; // rax
	bool v3; // zf

	v1 = *(_DWORD*)(a1 + 568);
	result = 0xFFFFFFFFi64;
	v3 = (*(_BYTE*)(a1 + 584) & 2) == 0;
	*(_DWORD*)(a1 + 568) = -1;
	if (v3)
		return v1;
	return result;
}

