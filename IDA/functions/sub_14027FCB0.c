//----- (000000014027FCB0) ----------------------------------------------------
_BOOL8 __fastcall sub_14027FCB0(__int64 a1, int a2)
{
	_BOOL8 result; // rax

	result = a2 != 0;
	*(_DWORD*)(a1 + 7176) |= 2u;
	*(_DWORD*)(a1 + 7280) = result;
	return result;
}

