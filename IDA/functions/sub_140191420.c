//----- (0000000140191420) ----------------------------------------------------
__int64 __fastcall sub_140191420(__int64* a1)
{
	int v2; // edi
	int* v3; // rax
	__int64 v4; // rax
	__int64 v5; // rbx
	HANDLE EventW; // rcx
	__int64 v8; // [rsp+38h] [rbp+10h] BYREF

	sub_14003D8F0(&v8, &qword_140C67460);
	v2 = sub_140190AB0();
	if (v2 >= 0)
	{
		if (qword_140C884A8)
		{
			_InterlockedIncrement((volatile signed __int32*)(qword_140C884A8 + 8));
			v4 = qword_140C884A8;
		}
		else
		{
			v3 = sub_14018B280(16i64, 0);
			if (v3)
			{
				v4 = sub_140190DC0((__int64)v3);
				qword_140C884A8 = v4;
			}
			else
			{
				v4 = 0i64;
				qword_140C884A8 = 0i64;
			}
		}
		*a1 = v4;
		v2 = 0;
	}
	v5 = v8;
	if (*(_QWORD*)(v8 + 8) <= 1ui64)
	{
		*(_DWORD*)v8 = 0;
		_InterlockedExchange64((volatile __int64*)(v5 + 8), 0i64);
		if (*(_QWORD*)(v5 + 16))
		{
			if (!*(_QWORD*)(v5 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v5 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v5 + 24));
		}
		return (unsigned int)v2;
	}
	else
	{
		--* (_QWORD*)(v8 + 8);
		return (unsigned int)v2;
	}
}
// 14003D8F0: using guessed type __int64 __fastcall sub_14003D8F0(_QWORD, _QWORD);
// 140C67460: using guessed type __int64 qword_140C67460;
// 140C884A8: using guessed type __int64 qword_140C884A8;

