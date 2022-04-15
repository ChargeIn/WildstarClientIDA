//----- (0000000140857540) ----------------------------------------------------
__int64 __fastcall sub_140857540(__int64 a1)
{
	struct _RTL_CRITICAL_SECTION* v1; // rbx
	unsigned int v3; // edi

	v1 = qword_140C61BA8;
	EnterCriticalSection(qword_140C61BA8 + 398);
	v3 = *(_DWORD*)(a1 + 8) + 1;
	*(_DWORD*)(a1 + 8) = v3;
	LeaveCriticalSection(v1 + 398);
	return v3;
}

