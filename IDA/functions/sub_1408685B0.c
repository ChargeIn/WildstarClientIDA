//----- (00000001408685B0) ----------------------------------------------------
__int64 __fastcall sub_1408685B0(__int64 a1)
{
	LPCRITICAL_SECTION v1; // rbx
	unsigned int v3; // edi

	v1 = qword_140C61BA8;
	EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 9552));
	v3 = *(_DWORD*)(a1 + 8) + 1;
	*(_DWORD*)(a1 + 8) = v3;
	LeaveCriticalSection((LPCRITICAL_SECTION)((char*)v1 + 9552));
	return v3;
}

