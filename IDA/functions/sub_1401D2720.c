#include "../winhttp.h"

//----- (00000001401D2720) ----------------------------------------------------
signed int __fastcall sub_1401D2720(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
	__int64 v5; // rsi
	signed int result; // eax
	int* v10; // rax
	bool v11; // zf
	__int64 v12; // rdx
	__int64 v13; // r10
	__int64 v14; // rax
	__int64 v15; // rcx
	unsigned __int64 v16; // rax

	v5 = a4;
	if (!*(_QWORD*)(a1 + 744))
		return -1610416122;
	if (!*(_QWORD*)(a1 + 936))
	{
		v10 = sub_14018B280(*(unsigned int*)(a1 + 944), 9u);
		*(_QWORD*)(a1 + 936) = v10;
		if (!v10)
			return -2147024882;
	}
	if (a2 < *(_QWORD*)(a1 + 928))
	{
		*(_DWORD*)(a1 + 848) = 1;
		*(_DWORD*)(a1 + 852) = 1;
		*(_QWORD*)(a1 + 800) = 0i64;
		*(_DWORD*)(a1 + 844) = 0;
		*(_DWORD*)(a1 + 860) = 0;
		*(_QWORD*)(a1 + 816) = 0i64;
		*(_QWORD*)(a1 + 888) = 0i64;
		*(_QWORD*)(a1 + 896) = 0i64;
		*(_QWORD*)(a1 + 904) = 0i64;
		*(_QWORD*)(a1 + 912) = 0i64;
		*(_QWORD*)(a1 + 920) = 0i64;
		*(_QWORD*)(a1 + 928) = 0i64;
	}
	*(_QWORD*)(a1 + 600) = 0i64;
	*(_QWORD*)(a1 + 608) = 0i64;
	*(_QWORD*)(a1 + 616) = 0i64;
	*(_QWORD*)(a1 + 624) = 0i64;
	*(_QWORD*)(a1 + 632) = 0i64;
	*(_QWORD*)(a1 + 640) = 0i64;
	*(_QWORD*)(a1 + 648) = 0i64;
	*(_QWORD*)(a1 + 656) = 0i64;
	v11 = *(_QWORD*)(a1 + 896) == 0i64;
	v12 = *(_QWORD*)(a1 + 904);
	*(_QWORD*)(a1 + 640) = a2;
	*(_QWORD*)(a1 + 616) = v12;
	*(_QWORD*)(a1 + 632) = a5;
	*(_QWORD*)(a1 + 648) = a3;
	*(_DWORD*)(a1 + 656) = v5;
	if (v11 && (_DWORD)v5)
	{
		v13 = *(_QWORD*)(a1 + 936);
		v14 = v5 - *(_QWORD*)(a1 + 928);
		*(_QWORD*)(a1 + 888) = v13;
		v15 = ((unsigned int)((v14 + a2 + 1) >> 1) + 4095) & 0xFFFFF000;
		*(_QWORD*)(a1 + 896) = v15;
		if ((unsigned __int64)(v15 + v12) > *(_QWORD*)(a1 + 712))
			*(_QWORD*)(a1 + 896) = (unsigned int)(*(_DWORD*)(a1 + 712) - v12);
		v16 = *(unsigned int*)(a1 + 944);
		if (*(_QWORD*)(a1 + 896) > v16)
			*(_QWORD*)(a1 + 896) = v16;
		result = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 744) + 32i64))(
			*(_QWORD*)(a1 + 744),
			v13,
			*(unsigned int*)(a1 + 896));
		if (result >= 0)
			return 0;
	}
	else
	{
		if (PostQueuedCompletionStatus(**(HANDLE**)(a1 + 16), *(_DWORD*)(a1 + 896), 1ui64, (LPOVERLAPPED)(a1 + 600)))
			return 0;
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	return result;
}

