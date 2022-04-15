//----- (0000000140869040) ----------------------------------------------------
void __fastcall sub_140869040(__int64 a1)
{
	HANDLE* p_LockSemaphore; // rdi
	char* v3; // rdx

	p_LockSemaphore = &qword_140C61BA8[79].LockSemaphore;
	EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 3184));
	v3 = (char*)&p_LockSemaphore[*(_DWORD*)(a1 + 24) % 0xC1u];
	*(_QWORD*)(a1 + 16) = *((_QWORD*)v3 + 5);
	*((_QWORD*)v3 + 5) = a1;
	++* ((_DWORD*)p_LockSemaphore + 396);
	LeaveCriticalSection((LPCRITICAL_SECTION)p_LockSemaphore);
}

