//----- (000000014033BC50) ----------------------------------------------------
__int64 __fastcall sub_14033BC50(__int64 a1, ULONG_PTR* a2, __int64 a3)
{
	__int64 result; // rax
	int Error; // eax
	unsigned int v8; // edi
	int* v9; // rax
	ULONG_PTR v10; // rbx
	void* v11; // rcx
	int LastError; // eax
	SOCKET s; // [rsp+20h] [rbp-C8h] BYREF
	struct sockaddr name; // [rsp+28h] [rbp-C0h] BYREF
	struct sockaddr v15; // [rsp+40h] [rbp-A8h] BYREF
	__int64 v16; // [rsp+60h] [rbp-88h]

	result = sub_14033BB50(a1, &s);
	if ((int)result >= 0)
	{
		sub_140334BB0((__int64)&v15, 0, 0);
		name = v15;
		if (bind(s, &name, 16))
		{
			Error = WSAGetLastError();
			sub_14033B860((__int64)L"bind", Error, 0i64);
			v8 = -2147467259;
		}
		else
		{
			v9 = sub_14018B280(536i64, 0);
			v10 = (ULONG_PTR)v9;
			if (v9)
			{
				sub_14033EA90((__int64)v9, s, a3);
				v8 = 0;
				*(_QWORD*)v10 = off_140B64A88;
				*(_QWORD*)(v10 + 496) = 0i64;
				*(_QWORD*)(v10 + 504) = 0i64;
				*(_QWORD*)(v10 + 512) = 0i64;
				*(_QWORD*)(v10 + 520) = 0i64;
			}
			else
			{
				v8 = 0;
				v10 = 0i64;
			}
			v11 = (void*)s;
			*(_DWORD*)(v10 + 280) = 2;
			if (CreateIoCompletionPort(v11, *(HANDLE*)(a1 + 144), v10, 0))
			{
				if (*a2 != v10)
				{
					(**(void(__fastcall***)(ULONG_PTR))v10)(v10);
					if (*a2)
						(*(void(__fastcall**)(ULONG_PTR))(*(_QWORD*)*a2 + 8i64))(*a2);
					*a2 = v10;
				}
			}
			else
			{
				LastError = GetLastError();
				sub_14033B860((__int64)L"CreateIoCompletionPort", LastError, 0i64);
				v8 = -2147467259;
			}
			(*(void(__fastcall**)(ULONG_PTR))(*(_QWORD*)v10 + 8i64))(v10);
		}
		if (v16)
			sub_14018B900(v16, 0);
		return v8;
	}
	return result;
}
// 140AF30A0: using guessed type wchar_t aCreateiocomple[23];
// 140AF30D0: using guessed type wchar_t aBind_0[5];
// 140B64A88: using guessed type __int64 (__fastcall *off_140B64A88[8])();

