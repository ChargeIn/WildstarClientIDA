//----- (0000000140191340) ----------------------------------------------------
__int64 __fastcall sub_140191340(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
	__int64 result; // rax
	__int64 v11; // rbx
	unsigned int v12; // edi
	HANDLE EventW; // rcx

	sub_14003D8F0(&a6, &qword_140C67460);
	result = qword_140C636C8(a1, a2, a3, a4, a5, 0i64, 0i64);
	v11 = a6;
	v12 = result;
	if (*(_QWORD*)(a6 + 8) <= 1ui64)
	{
		*(_DWORD*)a6 = 0;
		_InterlockedExchange64((volatile __int64*)(v11 + 8), 0i64);
		if (*(_QWORD*)(v11 + 16))
		{
			if (!*(_QWORD*)(v11 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v11 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v11 + 24));
		}
		return v12;
	}
	else
	{
		--* (_QWORD*)(a6 + 8);
	}
	return result;
}
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 140C636C8: using guessed type __int64 (__fastcall *qword_140C636C8)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140C67460: using guessed type __int64 qword_140C67460;

