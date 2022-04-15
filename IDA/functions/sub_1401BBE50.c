#include "../winhttp.h"

//----- (00000001401BBE50) ----------------------------------------------------
int __fastcall sub_1401BBE50(__int64 a1, __int64 a2)
{
	int result; // eax
	unsigned __int64 v4; // r12
	LARGE_INTEGER v5; // r15
	unsigned __int64 v6; // rdi
	unsigned __int64 v7; // rsi
	__int64* p_Buffer; // r14
	DWORD v9; // r8d
	bool v10; // sf
	unsigned __int64 v11; // rsi
	LARGE_INTEGER* p_liDistanceToMove; // r14
	DWORD v13; // r8d
	__int64* v14; // rsi
	DWORD v15; // r8d
	bool v16; // sf
	unsigned __int8 v17; // cl
	unsigned __int64 v18; // rax
	unsigned __int64 v19; // rdx
	signed int LastError; // eax
	bool v21; // sf
	DWORD NumberOfBytesWritten; // [rsp+30h] [rbp-9h] BYREF
	__int64 v23; // [rsp+38h] [rbp-1h] BYREF
	unsigned __int64 v24; // [rsp+40h] [rbp+7h] BYREF
	__int64 Buffer; // [rsp+48h] [rbp+Fh] BYREF
	LARGE_INTEGER liDistanceToMove; // [rsp+50h] [rbp+17h] BYREF

	if (a2 == *(_QWORD*)(a1 + 640))
		return -2147467259;
	v4 = *(_QWORD*)(a2 + 40);
	v5 = *(LARGE_INTEGER*)(a2 + 32);
	result = sub_1401BC1A0(a1, v5, (int*)&Buffer, 0x10ui64);
	if (result >= 0)
	{
		v6 = 8i64;
		if (!liDistanceToMove.QuadPart || sub_1401BC1A0(a1, liDistanceToMove, (int*)&v23, 8ui64) < 0 || v23 != v5.QuadPart)
			goto LABEL_16;
		v7 = 8i64;
		p_Buffer = &Buffer;
		if (SetFilePointerEx(*(HANDLE*)(a1 + 32), liDistanceToMove, 0i64, 0))
		{
			while (1)
			{
				v9 = 0x80000000;
				if (v7 < 0x80000000)
					v9 = v7;
				if (!WriteFile(*(HANDLE*)(a1 + 32), p_Buffer, v9, &NumberOfBytesWritten, 0i64))
					break;
				p_Buffer = (__int64*)((char*)p_Buffer + NumberOfBytesWritten);
				v7 -= NumberOfBytesWritten;
				if (!v7)
					goto LABEL_16;
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
		LABEL_16:
			if (Buffer)
			{
				if (sub_1401BC1A0(a1, (LARGE_INTEGER)(Buffer + 8), (int*)&v23, 8ui64) >= 0 && v23 == v5.QuadPart)
				{
					v11 = 8i64;
					p_liDistanceToMove = &liDistanceToMove;
					if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(Buffer + 8), 0i64, 0))
					{
						while (1)
						{
							v13 = 0x80000000;
							if (v11 < 0x80000000)
								v13 = v11;
							if (!WriteFile(*(HANDLE*)(a1 + 32), p_liDistanceToMove, v13, &NumberOfBytesWritten, 0i64))
								break;
							p_liDistanceToMove = (LARGE_INTEGER*)((char*)p_liDistanceToMove + NumberOfBytesWritten);
							v11 -= NumberOfBytesWritten;
							if (!v11)
								goto LABEL_24;
						}
					}
					result = GetLastError();
					v16 = result < 0;
					if (result > 0)
					{
						result = (unsigned __int16)result | 0x80070000;
						v16 = result < 0;
					}
					if (v16)
						return result;
				}
			LABEL_24:
				v23 = a2;
				sub_1401BC9A0(a1 + 632, &v23);
				v24 = *(_QWORD*)(a1 + 584) - v4 - 16;
				if (*(_QWORD*)(a1 + 584) != v24)
				{
					v14 = (__int64*)&v24;
					if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)528i64, 0i64, 0))
					{
						while (1)
						{
							v15 = 0x80000000;
							if (v6 < 0x80000000)
								v15 = v6;
							if (!WriteFile(*(HANDLE*)(a1 + 32), v14, v15, &NumberOfBytesWritten, 0i64))
								break;
							v14 = (__int64*)((char*)v14 + NumberOfBytesWritten);
							v6 -= NumberOfBytesWritten;
							if (!v6)
								goto LABEL_55;
						}
					}
					LastError = GetLastError();
					v21 = LastError < 0;
					if (LastError > 0)
						v21 = 1;
					if (!v21)
						LABEL_55:
					*(_QWORD*)(a1 + 584) = v24;
				}
				return 0;
			}
			v17 = 0;
			v18 = v4;
			if ((v4 & 0xFFFFFFFF00000000ui64) != 0)
			{
				v17 = 32;
				v18 = HIDWORD(v4);
			}
			if ((v18 & 0xFFFF0000) != 0)
			{
				v17 += 16;
				v18 >>= 16;
			}
			if ((v18 & 0xFF00) != 0)
			{
				v17 += 8;
				v18 >>= 8;
			}
			if ((v18 & 0xF0) != 0)
			{
				v17 += 4;
				v18 >>= 4;
			}
			if ((v18 & 0xC) != 0)
			{
				v17 += 2;
				v18 >>= 2;
			}
			if ((v18 & 2) != 0)
				++v17;
			if (*(_QWORD*)(a1 + 8i64 * v17 + 64) != v5.QuadPart)
				goto LABEL_24;
			v19 = 8i64 * v17 + 8;
			if (v19 > 0x230)
				return -2147024809;
			result = sub_1401BA680(a1, (LARGE_INTEGER)v19, (int*)&liDistanceToMove, 8ui64);
			if (result >= 0)
				goto LABEL_24;
		}
	}
	return result;
}

