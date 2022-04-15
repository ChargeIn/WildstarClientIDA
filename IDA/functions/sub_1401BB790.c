#include "../winhttp.h"

//----- (00000001401BB790) ----------------------------------------------------
int __fastcall sub_1401BB790(__int64 a1, unsigned __int64 a2)
{
	LARGE_INTEGER v2; // rsi
	int result; // eax
	unsigned __int64 v5; // rbx
	unsigned __int64 v6; // r15
	unsigned __int64 v7; // rbp
	LONGLONG v8; // r14
	unsigned __int64 v9; // rbp
	unsigned __int64 v10; // r14
	void* v11; // rcx
	unsigned __int64 v12; // rbp
	__int64* p_Buffer; // r14
	DWORD v14; // r8d
	bool v15; // sf
	__int64* v16; // rbp
	DWORD v17; // r8d
	bool v18; // sf
	__int64 v19; // [rsp+30h] [rbp-58h] BYREF
	DWORD NumberOfBytesWritten; // [rsp+38h] [rbp-50h] BYREF
	__int64 v21; // [rsp+40h] [rbp-48h] BYREF
	__int64 Buffer; // [rsp+48h] [rbp-40h] BYREF

	v2.QuadPart = a2;
	if (!a2)
		return 0;
	if ((a2 & 0xF) != 0 || a2 < 0x240 || a2 + 24 > *(_QWORD*)(a1 + 576))
		return -2147024809;
	v5 = 8i64;
	result = sub_1401BC1A0(a1, (LARGE_INTEGER)(a2 - 8), (int*)&v19, 8ui64);
	if (result >= 0)
	{
		if (v19 <= 0 || (v19 & 0xF) != 0)
		{
			return -1610416127;
		}
		else
		{
			result = sub_1401BC1A0(a1, (LARGE_INTEGER)(v2.QuadPart + v19), (int*)&v21, 8ui64);
			if (result >= 0)
			{
				v6 = v19;
				if (v19 == v21)
				{
					if (v2.QuadPart > 0x240ui64
						&& sub_1401BC1A0(a1, (LARGE_INTEGER)(v2.QuadPart - 16), (int*)&v21, 8ui64) >= 0
						&& v21 < 0
						&& (v21 & 0xF) == 0)
					{
						v7 = -v21;
						v8 = v2.QuadPart + v21;
						if (sub_1401BC1A0(a1, (LARGE_INTEGER)(v2.QuadPart + v21 - 24), (int*)&v19, 8ui64) >= 0
							&& v19 == v21
							&& (int)sub_1401BBDA0(a1, v8 - 16, v7) >= 0)
						{
							v2.QuadPart = v8 - 16;
							v6 += v7 + 16;
						}
					}
					if (v2.QuadPart + v6 + 8 < *(_QWORD*)(a1 + 576))
					{
						v9 = v2.QuadPart + v6 + 16;
						if (sub_1401BC1A0(a1, (LARGE_INTEGER)(v9 - 8), (int*)&v19, 8ui64) >= 0 && v19 < 0 && (v19 & 0xF) == 0)
						{
							v10 = -v19;
							if (sub_1401BC1A0(a1, (LARGE_INTEGER)(v9 - v19), (int*)&v21, 8ui64) >= 0
								&& v19 == v21
								&& (int)sub_1401BBDA0(a1, v2.QuadPart + v6 + 16, v10) >= 0)
							{
								v6 += v10 + 16;
							}
						}
					}
					v11 = *(void**)(a1 + 32);
					v12 = 8i64;
					p_Buffer = &Buffer;
					Buffer = -(__int64)v6;
					if (SetFilePointerEx(v11, (LARGE_INTEGER)(v2.QuadPart - 8), 0i64, 0))
					{
						while (1)
						{
							v14 = 0x80000000;
							if (v12 < 0x80000000)
								v14 = v12;
							if (!WriteFile(*(HANDLE*)(a1 + 32), p_Buffer, v14, &NumberOfBytesWritten, 0i64))
								break;
							p_Buffer = (__int64*)((char*)p_Buffer + NumberOfBytesWritten);
							v12 -= NumberOfBytesWritten;
							if (!v12)
								goto LABEL_37;
						}
					}
					result = GetLastError();
					v15 = result < 0;
					if (result > 0)
					{
						result = (unsigned __int16)result | 0x80070000;
						v15 = result < 0;
					}
					if (!v15)
					{
					LABEL_37:
						v16 = &Buffer;
						if (SetFilePointerEx(*(HANDLE*)(a1 + 32), (LARGE_INTEGER)(v2.QuadPart + v6), 0i64, 0))
						{
							while (1)
							{
								v17 = 0x80000000;
								if (v5 < 0x80000000)
									v17 = v5;
								if (!WriteFile(*(HANDLE*)(a1 + 32), v16, v17, &NumberOfBytesWritten, 0i64))
									break;
								v16 = (__int64*)((char*)v16 + NumberOfBytesWritten);
								v5 -= NumberOfBytesWritten;
								if (!v5)
									goto LABEL_46;
							}
						}
						result = GetLastError();
						v18 = result < 0;
						if (result > 0)
						{
							result = (unsigned __int16)result | 0x80070000;
							v18 = result < 0;
						}
						if (!v18)
						{
						LABEL_46:
							sub_1401BBAB0(a1, v2, v6);
							return 0;
						}
					}
				}
				else
				{
					return -1610416127;
				}
			}
		}
	}
	return result;
}

