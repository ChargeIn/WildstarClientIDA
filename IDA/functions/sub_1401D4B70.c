#include "../winhttp.h"

//----- (00000001401D4B70) ----------------------------------------------------
signed int __fastcall sub_1401D4B70(__int64 a1, void* a2, DWORD a3, struct _OVERLAPPED* a4)
{
	PVOID Pointer; // rcx
	unsigned __int64 v7; // rdx
	__int64 v10; // r8
	HANDLE FileW; // rcx
	signed int result; // eax
	void* v13; // rdx
	int FileName[132]; // [rsp+40h] [rbp-248h] BYREF

	Pointer = a4->Pointer;
	v7 = *(_QWORD*)(a1 + 40);
	if ((unsigned __int64)Pointer > v7 || (unsigned __int64)Pointer + a3 > v7 || !a2)
		return -2147024809;
	if (*(_DWORD*)(a1 + 64) == 2)
	{
		if (*(_QWORD*)(a1 + 48) == -1i64)
			return -2147467259;
		goto LABEL_12;
	}
	CloseHandle(*(HANDLE*)(a1 + 48));
	sub_1401C0D10(*(_QWORD*)(a1 + 8), FileName, v10, a1 + 16);
	FileW = CreateFileW((LPCWSTR)FileName, 0x80000000, 1u, 0i64, 3u, 0x40000000u, 0i64);
	*(_QWORD*)(a1 + 48) = FileW;
	if (FileW != (HANDLE)-1i64)
	{
		v13 = *(void**)(*(_QWORD*)(a1 + 8) + 528i64);
		if (v13)
			CreateIoCompletionPort(FileW, v13, 1ui64, 0);
		*(_DWORD*)(a1 + 64) = 2;
	LABEL_12:
		if (ReadFile(*(HANDLE*)(a1 + 48), a2, a3, 0i64, a4))
			return 0;
		result = GetLastError();
		if (result == 997)
			return 0;
		goto LABEL_7;
	}
	result = GetLastError();
LABEL_7:
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 1401D4BE2: variable 'v10' is possibly undefined
// 1401D4B70: using guessed type int FileName[132];

