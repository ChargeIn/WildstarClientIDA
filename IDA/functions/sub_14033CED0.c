#include "../winhttp.h"

//----- (000000014033CED0) ----------------------------------------------------
__int64 __fastcall sub_14033CED0(__int64 a1, int a2)
{
	struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp+18h] BYREF

	if (a2)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 152) + 32i64))(*(_QWORD*)(a1 + 152));
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	sub_14033D0B0(a1, *(_QWORD*)&SystemTimeAsFileTime);
	return 0i64;
}

