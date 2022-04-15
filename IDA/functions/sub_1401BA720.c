#include "../winhttp.h"

//----- (00000001401BA720) ----------------------------------------------------
signed int __fastcall sub_1401BA720(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
	__int64 v4; // r14
	signed int result; // eax
	__int64 v7; // rdx
	void* v8; // rcx
	__int64 v9; // r14
	unsigned __int64 v10; // rbx
	__int64* p_Buffer; // rdi
	DWORD v12; // r8d
	bool v13; // sf
	__int64 v14; // rcx
	__int64 Buffer; // [rsp+30h] [rbp-28h] BYREF
	__int64 v16; // [rsp+38h] [rbp-20h]
	DWORD NumberOfBytesWritten; // [rsp+68h] [rbp+10h] BYREF

	v4 = a2;
	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 624))
		return -2147024809;
	v7 = *(_QWORD*)(a1 + 592);
	v8 = *(void**)(a1 + 32);
	Buffer = a3;
	v16 = a4;
	v9 = 16 * v4;
	v10 = 16i64;
	p_Buffer = &Buffer;
	if (SetFilePointerEx(v8, (LARGE_INTEGER)(v9 + v7), 0i64, 0))
	{
		while (1)
		{
			v12 = 0x80000000;
			if (v10 < 0x80000000)
				v12 = v10;
			if (!WriteFile(*(HANDLE*)(a1 + 32), p_Buffer, v12, &NumberOfBytesWritten, 0i64))
				break;
			p_Buffer = (__int64*)((char*)p_Buffer + NumberOfBytesWritten);
			v10 -= NumberOfBytesWritten;
			if (!v10)
				goto LABEL_12;
		}
	}
	result = GetLastError();
	v13 = result < 0;
	if (result > 0)
	{
		result = (unsigned __int16)result | 0x80070000;
		v13 = result < 0;
	}
	if (!v13)
	{
	LABEL_12:
		v14 = *(_QWORD*)(a1 + 616);
		*(_QWORD*)(v14 + v9) = Buffer;
		*(_QWORD*)(v14 + v9 + 8) = v16;
		return 0;
	}
	return result;
}

