//----- (0000000140878320) ----------------------------------------------------
BOOL __fastcall sub_140878320(__int64 a1)
{
	_InterlockedDecrement((volatile signed __int32*)(a1 + 120));
	return sub_140856280((void**)&qword_140C61B68[5].LockCount);
}

