//----- (0000000140884930) ----------------------------------------------------
__int64 __fastcall sub_140884930(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	*(_DWORD*)a2 = *(_DWORD*)(a1 + 20);
	*(_DWORD*)(a2 + 4) = *(_DWORD*)(a1 + 24);
	*(_DWORD*)(a2 + 8) = *(_DWORD*)(a1 + 28);
	*(_BYTE*)(a2 + 12) = *(_BYTE*)(a1 + 73);
	result = *(unsigned __int8*)(a1 - 4);
	*(_BYTE*)(a2 + 13) = result;
	return result;
}

