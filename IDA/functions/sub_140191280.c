//----- (0000000140191280) ----------------------------------------------------
BOOL __fastcall sub_140191280(void* a1, DWORD64 a2, unsigned __int64* a3, struct _SYMBOL_INFO* a4)
{
	BOOL result; // eax
	__int64 v9; // rbx
	BOOL v10; // edi
	HANDLE EventW; // rcx
	__int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

	sub_14003D8F0(v12, &qword_140C67460);
	result = SymFromAddr(a1, a2, a3, a4);
	v9 = v12[0];
	v10 = result;
	if (*(_QWORD*)(v12[0] + 8) <= 1ui64)
	{
		*(_DWORD*)v12[0] = 0;
		_InterlockedExchange64((volatile __int64*)(v9 + 8), 0i64);
		if (*(_QWORD*)(v9 + 16))
		{
			if (!*(_QWORD*)(v9 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v9 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v9 + 24));
		}
		return v10;
	}
	else
	{
		--* (_QWORD*)(v12[0] + 8);
	}
	return result;
}
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 140C67460: using guessed type __int64 qword_140C67460;
// 140191280: using guessed type __int64 var_18[3];

