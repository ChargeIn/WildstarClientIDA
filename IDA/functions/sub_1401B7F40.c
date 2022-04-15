//----- (00000001401B7F40) ----------------------------------------------------
int __fastcall sub_1401B7F40(__int64 a1, unsigned int* a2, __int64 a3)
{
	int result; // eax
	unsigned int v6; // r13d
	unsigned __int64 v7; // rbx
	LONGLONG* v8; // r14
	DWORD v9; // r8d
	bool v10; // sf
	unsigned int v11; // eax
	unsigned __int64 v12; // rbx
	LONGLONG* v13; // r14
	DWORD v14; // r8d
	bool v15; // sf
	unsigned __int64 v16; // rbx
	LONGLONG* p_Buffer; // r14
	DWORD v18; // r8d
	bool v19; // sf
	LONGLONG v20; // rax
	unsigned __int64 v21; // rbx
	LONGLONG* v22; // r14
	DWORD v23; // r8d
	bool v24; // sf
	unsigned __int64 v25; // rbx
	LONGLONG* v26; // r14
	DWORD v27; // r8d
	bool v28; // sf
	__int64 v29; // rbx
	LONGLONG v30[2]; // [rsp+30h] [rbp-30h] BYREF
	LONGLONG Buffer; // [rsp+80h] [rbp+20h] BYREF
	__int64 v32; // [rsp+90h] [rbp+30h]
	DWORD NumberOfBytesWritten; // [rsp+98h] [rbp+38h] BYREF

	v32 = a3;
	result = a3;
	if ((*(_BYTE*)(a1 + 16) & 2) == 0)
		return -2147024891;
	if (!a2)
		return -2147024809;
	if (!a3)
	{
		*a2 = 0;
		return result;
	}
	v6 = *(_DWORD*)(a1 + 604);
	if (!v6)
	{
		v6 = *(_DWORD*)(a1 + 600);
		if (v6)
		{
			v30[0] = *(_QWORD*)(a1 + 592);
			LODWORD(Buffer) = v6 + 1;
			v11 = (((((HIWORD(v6) | v6) >> 8) | HIWORD(v6) | v6) >> 4) | ((HIWORD(v6) | v6) >> 8) | HIWORD(v6) | v6) >> 2;
			result = sub_1401BAEC0(
				a1,
				v30,
				16i64
				* ((v11 | ((((HIWORD(v6) | v6) >> 8) | HIWORD(v6) | v6) >> 4) | ((HIWORD(v6) | v6) >> 8) | HIWORD(v6) | v6 | ((v11 | ((((HIWORD(v6) | v6) >> 8) | HIWORD(v6) | v6) >> 4) | ((HIWORD(v6) | v6) >> 8) | HIWORD(v6) | v6) >> 1))
					+ 1));
			if (result < 0)
				return result;
			if (*(_QWORD*)(a1 + 592) != v30[0])
			{
				v12 = 8i64;
				v13 = v30;
				if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)536i64, 0i64, 0))
				{
					while (1)
					{
						v14 = 0x80000000;
						if (v12 < 0x80000000)
							v14 = v12;
						if (!WriteFile(*(HANDLE*)(a1 + 32), v13, v14, &NumberOfBytesWritten, 0i64))
							break;
						v13 = (LONGLONG*)((char*)v13 + NumberOfBytesWritten);
						v12 -= NumberOfBytesWritten;
						if (!v12)
							goto LABEL_31;
					}
				}
				result = GetLastError();
				v15 = result < 0;
				if (result > 0)
				{
					result = (unsigned __int16)result | 0x80070000;
					v15 = result < 0;
				}
				if (v15)
					return result;
			LABEL_31:
				*(_QWORD*)(a1 + 592) = v30[0];
			}
			if (*(_DWORD*)(a1 + 600) != (_DWORD)Buffer)
			{
				v16 = 4i64;
				p_Buffer = &Buffer;
				if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)544i64, 0i64, 0))
				{
					while (1)
					{
						v18 = 0x80000000;
						if (v16 < 0x80000000)
							v18 = v16;
						if (!WriteFile(*(HANDLE*)(a1 + 32), p_Buffer, v18, &NumberOfBytesWritten, 0i64))
							break;
						p_Buffer = (LONGLONG*)((char*)p_Buffer + NumberOfBytesWritten);
						v16 -= NumberOfBytesWritten;
						if (!v16)
							goto LABEL_42;
					}
				}
				result = GetLastError();
				v19 = result < 0;
				if (result > 0)
				{
					result = (unsigned __int16)result | 0x80070000;
					v19 = result < 0;
				}
				if (v19)
					return result;
			LABEL_42:
				*(_DWORD*)(a1 + 600) = Buffer;
			}
			sub_1401BC800((__int64*)(a1 + 616), *(unsigned int*)(a1 + 600));
		LABEL_68:
			v29 = v32;
			result = sub_1401BA9B0(a1, &Buffer, v32);
			if (result >= 0)
			{
				result = sub_1401BA720(a1, v6, Buffer, v29);
				if (result >= 0)
				{
					*a2 = v6;
					return 0;
				}
			}
			return result;
		}
		v20 = *(_QWORD*)(a1 + 592);
		v6 = 1;
		LODWORD(Buffer) = 2;
		v30[0] = v20;
		result = sub_1401BAEC0(a1, v30, 32i64);
		if (result < 0)
			return result;
		if (*(_QWORD*)(a1 + 592) != v30[0])
		{
			v21 = 8i64;
			v22 = v30;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)536i64, 0i64, 0))
			{
				while (1)
				{
					v23 = 0x80000000;
					if (v21 < 0x80000000)
						v23 = v21;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v22, v23, &NumberOfBytesWritten, 0i64))
						break;
					v22 = (LONGLONG*)((char*)v22 + NumberOfBytesWritten);
					v21 -= NumberOfBytesWritten;
					if (!v21)
						goto LABEL_55;
				}
			}
			result = GetLastError();
			v24 = result < 0;
			if (result > 0)
			{
				result = (unsigned __int16)result | 0x80070000;
				v24 = result < 0;
			}
			if (v24)
				return result;
		LABEL_55:
			*(_QWORD*)(a1 + 592) = v30[0];
		}
		if (*(_DWORD*)(a1 + 600) != (_DWORD)Buffer)
		{
			v25 = 4i64;
			v26 = &Buffer;
			if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)544i64, 0i64, 0))
			{
				while (1)
				{
					v27 = 0x80000000;
					if (v25 < 0x80000000)
						v27 = v25;
					if (!WriteFile(*(HANDLE*)(a1 + 32), v26, v27, &NumberOfBytesWritten, 0i64))
						break;
					v26 = (LONGLONG*)((char*)v26 + NumberOfBytesWritten);
					v25 -= NumberOfBytesWritten;
					if (!v25)
						goto LABEL_66;
				}
			}
			result = GetLastError();
			v28 = result < 0;
			if (result > 0)
			{
				result = (unsigned __int16)result | 0x80070000;
				v28 = result < 0;
			}
			if (v28)
				return result;
		LABEL_66:
			*(_DWORD*)(a1 + 600) = Buffer;
		}
		sub_1401BC800((__int64*)(a1 + 616), *(unsigned int*)(a1 + 600));
		result = sub_1401BA720(a1, 0, 0i64, 0i64);
		if (result < 0)
			return result;
		goto LABEL_68;
	}
	LODWORD(Buffer) = *(_DWORD*)(*(_QWORD*)(a1 + 616) + 16i64 * v6);
	if (*(_DWORD*)(a1 + 604) == (_DWORD)Buffer)
		goto LABEL_68;
	v7 = 4i64;
	v8 = &Buffer;
	if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)548i64, 0i64, 0))
	{
		while (1)
		{
			v9 = 0x80000000;
			if (v7 < 0x80000000)
				v9 = v7;
			if (!WriteFile(*(HANDLE*)(a1 + 32), v8, v9, &NumberOfBytesWritten, 0i64))
				break;
			v8 = (LONGLONG*)((char*)v8 + NumberOfBytesWritten);
			v7 -= NumberOfBytesWritten;
			if (!v7)
			{
				*(_DWORD*)(a1 + 604) = Buffer;
				goto LABEL_68;
			}
		}
	}
	result = GetLastError();
	v10 = result < 0;
	if (result > 0)
	{
		result = (unsigned __int16)result | 0x80070000;
		v10 = result < 0;
	}
	if (!v10)
	{
		*(_DWORD*)(a1 + 604) = Buffer;
		goto LABEL_68;
	}
	return result;
}

