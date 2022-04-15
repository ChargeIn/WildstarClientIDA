//----- (00000001401BC640) ----------------------------------------------------
__int64 __fastcall sub_1401BC640(__int64 a1, LARGE_INTEGER a2, LARGE_INTEGER a3, unsigned __int64 a4)
{
	unsigned __int64 v4; // rbx
	unsigned __int64 v9; // r15
	int* v10; // rax
	unsigned int v11; // esi
	__int64 v12; // r13
	DWORD v13; // r8d
	DWORD v14; // r12d
	signed int LastError; // eax
	DWORD NumberOfBytesWritten; // [rsp+30h] [rbp-38h] BYREF
	DWORD NumberOfBytesRead; // [rsp+88h] [rbp+20h] BYREF

	v4 = a4;
	if (!a4)
		return 0i64;
	v9 = 0x100000i64;
	if (a4 < 0x100000)
		v9 = a4;
	v10 = sub_14018B280(v9 + 16, 0);
	v11 = 0;
	if (v10)
	{
		*((_QWORD*)v10 + 1) = v9;
		v12 = (__int64)(v10 + 4);
		*(_QWORD*)v10 = off_140B55060;
	}
	else
	{
		v12 = 16i64;
	}
	while (SetFilePointerEx(*(HANDLE*)(a1 + 32), a3, 0i64, 0))
	{
		v13 = v9;
		if (v4 < v9)
			v13 = v4;
		if (!ReadFile(*(HANDLE*)(a1 + 32), (LPVOID)v12, v13, &NumberOfBytesRead, 0i64))
			break;
		v14 = NumberOfBytesRead;
		if (!SetFilePointerEx(*(HANDLE*)(a1 + 32), a2, 0i64, 0)
			|| !WriteFile(*(HANDLE*)(a1 + 32), (LPCVOID)v12, v14, &NumberOfBytesWritten, 0i64))
		{
			break;
		}
		a3.QuadPart += NumberOfBytesWritten;
		a2.QuadPart += NumberOfBytesWritten;
		v4 -= NumberOfBytesWritten;
		if (!v4)
			goto LABEL_19;
	}
	LastError = GetLastError();
	if (LastError > 0)
		LastError = (unsigned __int16)LastError | 0x80070000;
	v11 = LastError;
LABEL_19:
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
	return v11;
}
// 1401BC689: conditional instruction was optimized away because r15.8 is in (1..100000)
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

