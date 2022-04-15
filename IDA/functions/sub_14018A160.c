//----- (000000014018A160) ----------------------------------------------------
int sub_14018A160()
{
	unsigned __int64 i; // rbx
	void* v1; // rcx
	unsigned __int64 j; // rbx
	void* v3; // rcx
	unsigned __int64 k; // rbx
	void* v5; // rcx
	__int64 v6; // rbx
	unsigned __int64 v7; // rax
	HANDLE EventW; // rcx
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	sub_14003D8F0(&v10, &qword_140C67400);
	for (i = 0i64; i < 4096; ++i)
	{
		v1 = (void*)qword_140C7F970[i];
		if (v1)
			VirtualFree(v1, 0i64, 0x8000u);
	}
	for (j = 32i64; j <= 0x100; j += 32i64)
	{
		v3 = *(void**)((char*)&unk_140C87F10 + j);
		if (v3)
			VirtualFree(v3, 0i64, 0x8000u);
	}
	for (k = 288i64; k <= 0x560; k += 32i64)
	{
		v5 = *(void**)((char*)&unk_140C87990 + k);
		if (v5)
			VirtualFree(v5, 0i64, 0x8000u);
	}
	TlsFree(dword_140C63684);
	v6 = v10;
	v7 = *(_QWORD*)(v10 + 8);
	if (v7 <= 1)
	{
		*(_DWORD*)v10 = 0;
		_InterlockedExchange64((volatile __int64*)(v6 + 8), 0i64);
		v7 = *(_QWORD*)(v6 + 16);
		if (v7)
		{
			if (!*(_QWORD*)(v6 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v6 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			LODWORD(v7) = SetEvent(*(HANDLE*)(v6 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v10 + 8);
	}
	return v7;
}
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C7F970: using guessed type __int64 qword_140C7F970[4096];

