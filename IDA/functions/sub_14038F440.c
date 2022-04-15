//----- (000000014038F440) ----------------------------------------------------
int __fastcall sub_14038F440(__int64 a1)
{
	int v1; // edx
	int result; // eax

	v1 = *(_DWORD*)(a1 + 300);
	result = (v1 & 0x20) != 0;
	if ((v1 & 0x40) != 0)
		result |= 4u;
	if ((v1 & 0x80u) != 0)
		result |= 8u;
	if ((v1 & 0x100) != 0)
		return result | 0x800;
	return result;
}

