#include "../winhttp.h"

//----- (00000001401D1A90) ----------------------------------------------------
__int64 __fastcall sub_1401D1A90(__int64 a1, HANDLE* a2, __int64 a3, int a4, HANDLE hFile)
{
	sub_1401D80D0(a1, (__int64)a2, a3, a4);
	*(_QWORD*)a1 = off_140B5F940;
	*(_QWORD*)(a1 + 696) = hFile;
	GetFileTime(hFile, 0i64, 0i64, (LPFILETIME)(a1 + 560));
	GetFileSizeEx(*(HANDLE*)(a1 + 696), (PLARGE_INTEGER)(a1 + 552));
	CreateIoCompletionPort(*(HANDLE*)(a1 + 696), *a2, 1ui64, 0);
	return a1;
}
// 140B5F940: using guessed type __int64 (__fastcall *off_140B5F940[10])();

