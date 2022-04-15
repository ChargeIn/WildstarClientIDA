//----- (0000000140265F20) ----------------------------------------------------
_BOOL8 __fastcall sub_140265F20(__int64* a1, unsigned __int16** a2)
{
	__int64 v2; // rcx
	unsigned __int16* v3; // rdx

	v2 = *a1;
	v3 = *a2;
	return (unsigned __int16*)v2 == v3 || !(unsigned int)sub_14018E2C0(v2, v3);
}

