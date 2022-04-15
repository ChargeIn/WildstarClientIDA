//----- (0000000140865020) ----------------------------------------------------
void __fastcall sub_140865020(__int64 a1)
{
	LPCRITICAL_SECTION v2; // rdi
	PRTL_CRITICAL_SECTION_DEBUG* v3; // rdx

	v2 = qword_140C61BA8 + 199;
	EnterCriticalSection(qword_140C61BA8 + 199);
	v3 = &v2->DebugInfo + *(_DWORD*)(a1 + 24) % 0xC1u;
	*(_QWORD*)(a1 + 16) = v3[5];
	v3[5] = (PRTL_CRITICAL_SECTION_DEBUG)a1;
	++LODWORD(v2[39].LockSemaphore);
	LeaveCriticalSection(v2);
}

