//----- (0000000140856280) ----------------------------------------------------
BOOL __fastcall sub_140856280(void** a1)
{
	void* v1; // rcx
	BOOL result; // eax

	v1 = *a1;
	if (v1)
		return SetEvent(v1);
	return result;
}

