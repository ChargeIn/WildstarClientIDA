//----- (00000001401B8890) ----------------------------------------------------
signed int __fastcall sub_1401B8890(__int64 a1, unsigned int a2)
{
	signed int result; // eax
	unsigned __int64 v4; // rbx
	int* p_Buffer; // rdi
	DWORD v6; // r8d
	bool v7; // sf
	DWORD NumberOfBytesWritten; // [rsp+50h] [rbp+8h] BYREF
	unsigned int Buffer; // [rsp+58h] [rbp+10h] BYREF

	Buffer = a2;
	if ((*(_BYTE*)(a1 + 16) & 2) == 0)
		return -2147024891;
	if (a2 && ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 624) || !*(_QWORD*)(*(_QWORD*)(a1 + 616) + 16i64 * a2 + 8)))
		return -2147024809;
	if (*(_DWORD*)(a1 + 608) == a2)
		return 0;
	v4 = 4i64;
	p_Buffer = (int*)&Buffer;
	if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)552i64, 0i64, 0))
	{
		while (1)
		{
			v6 = 0x80000000;
			if (v4 < 0x80000000)
				v6 = v4;
			if (!WriteFile(*(HANDLE*)(a1 + 32), p_Buffer, v6, &NumberOfBytesWritten, 0i64))
				break;
			p_Buffer = (int*)((char*)p_Buffer + NumberOfBytesWritten);
			v4 -= NumberOfBytesWritten;
			if (!v4)
				goto LABEL_17;
		}
	}
	result = GetLastError();
	v7 = result < 0;
	if (result > 0)
	{
		result = (unsigned __int16)result | 0x80070000;
		v7 = result < 0;
	}
	if (!v7)
	{
	LABEL_17:
		*(_DWORD*)(a1 + 608) = Buffer;
		return 0;
	}
	return result;
}

