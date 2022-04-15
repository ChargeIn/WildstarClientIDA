//----- (0000000140868740) ----------------------------------------------------
__int64 __fastcall sub_140868740(__int64 a1)
{
	__int64 v2; // rax
	_QWORD* v3; // rdx
	ULONG_PTR* p_SpinCount; // rbx
	char* v5; // rdx

	v2 = 0i64;
	v3 = (_QWORD*)(a1 + 48);
	do
	{
		*(_BYTE*)(a1 + v2++ + 128) = -1;
		*v3 = 0i64;
		v3 += 2;
	} while (v2 < 5);
	p_SpinCount = &qword_140C61BA8[238].SpinCount;
	EnterCriticalSection((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 9552));
	v5 = (char*)&p_SpinCount[*(_DWORD*)(a1 + 24) % 0xC1u];
	*(_QWORD*)(a1 + 16) = *((_QWORD*)v5 + 5);
	*((_QWORD*)v5 + 5) = a1;
	++* ((_DWORD*)p_SpinCount + 396);
	LeaveCriticalSection((LPCRITICAL_SECTION)p_SpinCount);
	return 1i64;
}

