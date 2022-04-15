//----- (0000000140184950) ----------------------------------------------------
__int64 __fastcall sub_140184950(_QWORD* a1)
{
	struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp+10h] BYREF

	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	return sub_140184510(a1, *(_QWORD*)&SystemTimeAsFileTime);
}

