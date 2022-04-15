//----- (00000001407D1E80) ----------------------------------------------------
__int64 __fastcall sub_1407D1E80(__int64 a1)
{
	__int64 result; // rax

	if (!*(_DWORD*)(a1 + 16))
		sub_1401984D0(a1 + 32);
	result = (unsigned int)(*(_DWORD*)(a1 + 16) + 1);
	*(_DWORD*)(a1 + 16) = result;
	return result;
}

