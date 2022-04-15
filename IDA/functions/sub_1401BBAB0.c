//----- (00000001401BBAB0) ----------------------------------------------------
int __fastcall sub_1401BBAB0(__int64 a1, LARGE_INTEGER a2, unsigned __int64 a3)
{
	unsigned __int8 v5; // dl
	unsigned __int64 v7; // rax
	void* v8; // rcx
	__int64 v9; // r15
	LARGE_INTEGER v10; // rax
	unsigned __int64 v11; // rbx
	__int64* p_Buffer; // rsi
	unsigned __int64 v13; // rdi
	DWORD v14; // r8d
	signed int LastError; // eax
	bool v16; // sf
	unsigned __int64 v17; // rbx
	__int64* v18; // rsi
	DWORD v19; // r8d
	unsigned __int64 v20; // rdx
	unsigned __int64 v21; // rbx
	__int64* v22; // rsi
	DWORD v23; // r8d
	__int64 v24; // rax
	int result; // eax
	__int64* v26; // rbx
	DWORD v27; // r8d
	bool v28; // sf
	DWORD NumberOfBytesWritten; // [rsp+30h] [rbp-50h] BYREF
	LARGE_INTEGER v30; // [rsp+38h] [rbp-48h] BYREF
	unsigned __int64 v31; // [rsp+40h] [rbp-40h] BYREF
	__int64 v32[2]; // [rsp+48h] [rbp-38h] BYREF
	char v33[16]; // [rsp+58h] [rbp-28h] BYREF
	__int64 Buffer; // [rsp+68h] [rbp-18h] BYREF
	LARGE_INTEGER liDistanceToMove; // [rsp+70h] [rbp-10h]

	v30 = a2;
	v5 = 0;
	v7 = a3;
	if ((a3 & 0xFFFFFFFF00000000ui64) != 0)
	{
		v5 = 32;
		v7 = HIDWORD(a3);
	}
	if ((v7 & 0xFFFF0000) != 0)
	{
		v5 += 16;
		v7 >>= 16;
	}
	if ((v7 & 0xFF00) != 0)
	{
		v5 += 8;
		v7 >>= 8;
	}
	if ((v7 & 0xF0) != 0)
	{
		v5 += 4;
		v7 >>= 4;
	}
	if ((v7 & 0xC) != 0)
	{
		v5 += 2;
		v7 >>= 2;
	}
	if ((v7 & 2) != 0)
		++v5;
	v8 = *(void**)(a1 + 32);
	v9 = v5;
	v10 = *(LARGE_INTEGER*)(a1 + 8i64 * v5 + 64);
	Buffer = 0i64;
	v11 = 16i64;
	p_Buffer = &Buffer;
	liDistanceToMove = v10;
	v13 = 8i64;
	if (SetFilePointerEx(v8, a2, 0i64, 0))
	{
		while (1)
		{
			v14 = 0x80000000;
			if (v11 < 0x80000000)
				v14 = v11;
			if (!WriteFile(*(HANDLE*)(a1 + 32), p_Buffer, v14, &NumberOfBytesWritten, 0i64))
				break;
			p_Buffer = (__int64*)((char*)p_Buffer + NumberOfBytesWritten);
			v11 -= NumberOfBytesWritten;
			if (!v11)
				goto LABEL_22;
		}
	}
	LastError = GetLastError();
	v16 = LastError < 0;
	if (LastError > 0)
		v16 = 1;
	if (!v16)
	{
	LABEL_22:
		if (Buffer)
		{
			v17 = 8i64;
			v18 = (__int64*)&v30;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(Buffer + 8), 0i64, 0))
			{
				while (1)
				{
					v19 = 0x80000000;
					if (v17 < 0x80000000)
						v19 = v17;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v18, v19, &NumberOfBytesWritten, 0i64))
						break;
					v18 = (__int64*)((char*)v18 + NumberOfBytesWritten);
					v17 -= NumberOfBytesWritten;
					if (!v17)
						goto LABEL_33;
				}
			}
			GetLastError();
		}
		else
		{
			v20 = 8 * v9 + 8;
			if (v20 <= 0x230)
				sub_1401BA680(a1, (LARGE_INTEGER)v20, (int*)&v30, 8ui64);
		}
	LABEL_33:
		if (liDistanceToMove.QuadPart)
		{
			v21 = 8i64;
			v22 = (__int64*)&v30;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), liDistanceToMove, 0i64, 0))
			{
				while (1)
				{
					v23 = 0x80000000;
					if (v21 < 0x80000000)
						v23 = v21;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v22, v23, &NumberOfBytesWritten, 0i64))
						break;
					v22 = (__int64*)((char*)v22 + NumberOfBytesWritten);
					v21 -= NumberOfBytesWritten;
					if (!v21)
						goto LABEL_41;
				}
			}
			GetLastError();
		}
	}
LABEL_41:
	v32[1] = a3;
	v32[0] = v30.QuadPart;
	v24 = sub_1401BA830(a1);
	result = sub_1401BC880(v24, (__int64)v33, v32);
	v31 = a3 + *(_QWORD*)(a1 + 584) + 16i64;
	if (*(_QWORD*)(a1 + 584) != v31)
	{
		v26 = (__int64*)&v31;
		if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)528i64, 0i64, 0))
		{
			while (1)
			{
				v27 = 0x80000000;
				if (v13 < 0x80000000)
					v27 = v13;
				if (!WriteFile(*(HANDLE*)(a1 + 32), v26, v27, &NumberOfBytesWritten, 0i64))
					break;
				v26 = (__int64*)((char*)v26 + NumberOfBytesWritten);
				v13 -= NumberOfBytesWritten;
				if (!v13)
					goto LABEL_51;
			}
		}
		result = GetLastError();
		v28 = result < 0;
		if (result > 0)
		{
			result = (unsigned __int16)result | 0x80070000;
			v28 = result < 0;
		}
		if (!v28)
		{
		LABEL_51:
			result = v31;
			*(_QWORD*)(a1 + 584) = v31;
		}
	}
	return result;
}
// 1401BBAB0: using guessed type char var_28[16];

