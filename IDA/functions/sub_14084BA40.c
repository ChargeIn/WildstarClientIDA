//----- (000000014084BA40) ----------------------------------------------------
void __fastcall sub_14084BA40(__int64 a1)
{
	HANDLE* p_OwningThread; // rdi
	char* v3; // rdx

	p_OwningThread = &qword_140C61BA8[119].OwningThread;
	EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776));
	v3 = (char*)&p_OwningThread[*(_DWORD*)(a1 + 24) % 0xC1u];
	*(_QWORD*)(a1 + 16) = *((_QWORD*)v3 + 5);
	*((_QWORD*)v3 + 5) = a1;
	++* ((_DWORD*)p_OwningThread + 396);
	LeaveCriticalSection((LPCRITICAL_SECTION)p_OwningThread);
}

