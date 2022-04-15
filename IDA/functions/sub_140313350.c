//----- (0000000140313350) ----------------------------------------------------
__int64 __fastcall sub_140313350(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)(*(_DWORD*)(a1 + 1040) + 1);
	*(_DWORD*)(a1 + 1040) = result;
	return result;
}

