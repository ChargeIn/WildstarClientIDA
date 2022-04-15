//----- (0000000140712E40) ----------------------------------------------------
__int16* __fastcall sub_140712E40(__int64 a1)
{
	__int16* result; // rax

	result = *(__int16**)(a1 + 16);
	if (result)
		return sub_14034BDD0(a1, *((_DWORD*)result + 1));
	return result;
}

