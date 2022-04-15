//----- (00000001401BC4C0) ----------------------------------------------------
signed int __fastcall sub_1401BC4C0(__int64 a1, LARGE_INTEGER a2, char* a3, unsigned __int64 a4)
{
	char* v5; // rdi
	signed int result; // eax
	DWORD v8; // r8d
	DWORD NumberOfBytesWritten; // [rsp+60h] [rbp+18h] BYREF

	v5 = a3;
	if (!a3)
		return -2147024809;
	if (SetFilePointerEx(*(HANDLE*)(a1 + 32), a2, 0i64, 0))
	{
		while (1)
		{
			v8 = 0x80000000;
			if (a4 < 0x80000000)
				v8 = a4;
			if (!WriteFile(*(HANDLE*)(a1 + 32), v5, v8, &NumberOfBytesWritten, 0i64))
				break;
			v5 += NumberOfBytesWritten;
			a4 -= NumberOfBytesWritten;
			if (!a4)
				return 0;
		}
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	else
	{
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	return result;
}

