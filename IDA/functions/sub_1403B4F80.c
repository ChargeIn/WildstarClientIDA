#include "../winhttp.h"

//----- (00000001403B4F80) ----------------------------------------------------
__int64 __fastcall sub_1403B4F80(__int64 a1)
{
	int v2; // r8d
	int v3; // eax
	struct _FILETIME FileTime; // [rsp+20h] [rbp-28h] BYREF
	struct _SYSTEMTIME SystemTime; // [rsp+28h] [rbp-20h] BYREF

	GetSystemTime(&SystemTime);
	SystemTimeToFileTime(&SystemTime, &FileTime);
	v2 = -1;
	if ((unsigned int)((*(_QWORD*)&FileTime - *(_QWORD*)(a1 + 32648)) / 0x989680ui64) != -1)
		v2 = (*(_QWORD*)&FileTime - *(_QWORD*)(a1 + 32648)) / 0x989680ui64;
	v3 = 0;
	if (v2)
		v3 = v2;
	return (unsigned int)(*(_DWORD*)(a1 + 32656) + v3);
}

