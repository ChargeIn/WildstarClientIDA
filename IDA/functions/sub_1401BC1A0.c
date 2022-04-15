//----- (00000001401BC1A0) ----------------------------------------------------
signed int __fastcall sub_1401BC1A0(__int64 a1, LARGE_INTEGER a2, int* a3, unsigned __int64 a4)
{
	int* v5; // rdi
	char* QuadPart; // rbp
	signed int result; // eax
	void* v9; // rcx
	DWORD v10; // r8d
	signed int LastError; // eax
	unsigned int v12; // esi
	signed int v13; // eax
	unsigned int v14; // ebx
	void* v15; // rcx
	DWORD v16; // r8d
	__int64 v17; // rcx
	__int64 v18; // rax
	DWORD NumberOfBytesRead[4]; // [rsp+30h] [rbp-98h] BYREF
	struct _OVERLAPPED Overlapped; // [rsp+40h] [rbp-88h] BYREF
	__int64 v21; // [rsp+60h] [rbp-68h]
	__int64 v22; // [rsp+68h] [rbp-60h]
	__int64 v23; // [rsp+70h] [rbp-58h]
	__int64 v24; // [rsp+78h] [rbp-50h]

	v5 = a3;
	QuadPart = (char*)a2.QuadPart;
	if (!a3)
		return -2147024809;
	if (*(_QWORD*)(a1 + 40) == -1i64)
	{
		v15 = *(void**)(a1 + 32);
		if (v15 == (void*)-1i64)
		{
			v17 = *(_QWORD*)(a1 + 48);
			if (!v17)
				return -2147467259;
			v18 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 24i64))(v17);
			sub_1407DB590(v5, (int*)&QuadPart[v18], a4);
			return 0;
		}
		if (SetFilePointerEx(v15, a2, 0i64, 0))
		{
			while (1)
			{
				v16 = 0x80000000;
				if (a4 < 0x80000000)
					v16 = a4;
				if (!ReadFile(*(HANDLE*)(a1 + 32), v5, v16, NumberOfBytesRead, 0i64))
					break;
				if (!NumberOfBytesRead[0])
					return -2147418113;
				v5 = (int*)((char*)v5 + NumberOfBytesRead[0]);
				a4 -= NumberOfBytesRead[0];
				if (!a4)
					return 0;
			}
		}
	}
	else
	{
		memset(&Overlapped, 0, 24);
		v21 = 0i64;
		v22 = 0i64;
		v23 = 0i64;
		v24 = 0i64;
		Overlapped.hEvent = CreateEventW(0i64, 1, 0, 0i64);
		if (Overlapped.hEvent)
		{
			while (1)
			{
				v9 = *(void**)(a1 + 32);
				v10 = 0x80000000;
				if (a4 < 0x80000000)
					v10 = a4;
				Overlapped.Pointer = QuadPart;
				if (!ReadFile(v9, v5, v10, NumberOfBytesRead, &Overlapped))
				{
					LastError = GetLastError();
					v12 = LastError;
					if (LastError != 997)
					{
						if (LastError > 0)
							v12 = (unsigned __int16)LastError | 0x80070000;
						CloseHandle(Overlapped.hEvent);
						return v12;
					}
					if (!GetOverlappedResult(*(HANDLE*)(a1 + 32), &Overlapped, NumberOfBytesRead, 1))
					{
						v13 = GetLastError();
						v14 = v13;
						if (v13 > 0)
							v14 = (unsigned __int16)v13 | 0x80070000;
						CloseHandle(Overlapped.hEvent);
						return v14;
					}
				}
				if (!NumberOfBytesRead[0])
				{
					CloseHandle(Overlapped.hEvent);
					return -2147418113;
				}
				QuadPart += NumberOfBytesRead[0];
				v5 = (int*)((char*)v5 + NumberOfBytesRead[0]);
				a4 -= NumberOfBytesRead[0];
				if (!a4)
				{
					CloseHandle(Overlapped.hEvent);
					return 0;
				}
			}
		}
	}
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 1401BC1A0: using guessed type DWORD NumberOfBytesRead[4];

