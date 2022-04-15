//----- (0000000140636C40) ----------------------------------------------------
__int64 __fastcall sub_140636C40(struct _FILETIME a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v4; // rsi
	__int64 v6; // rdx
	struct _FILETIME v7; // rdx
	struct _FILETIME v8; // rcx
	struct _FILETIME v9; // rax
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	SystemTimeAsFileTime = a1;
	v2 = qword_140C65C20;
	v4 = sub_14022FB40(a2);
	if (!v4)
		return 0i64;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v6 = *(int*)(v4 + 4);
	if (*(_QWORD*)(v2 + 8 * v6 + 224) < *(unsigned __int64*)&SystemTimeAsFileTime)
		sub_140636BA0(v2, v6);
	v7 = *(struct _FILETIME*)(32i64 * *(int*)(v4 + 4) + v2 + 8);
	v8 = v7;
	v9 = *(struct _FILETIME*)(*(_QWORD*)&v7 + 8i64);
	while (v9)
	{
		if (*(_DWORD*)(*(_QWORD*)&v9 + 32i64) < a2)
		{
			v9 = *(struct _FILETIME*)(*(_QWORD*)&v9 + 24i64);
		}
		else
		{
			v8 = v9;
			v9 = *(struct _FILETIME*)(*(_QWORD*)&v9 + 16i64);
		}
	}
	if (v8 == v7 || (SystemTimeAsFileTime = v8, a2 < *(_DWORD*)(*(_QWORD*)&v8 + 32i64)))
		SystemTimeAsFileTime = v7;
	if (SystemTimeAsFileTime == v7)
		return 0i64;
	else
		return *(_QWORD*)(*(_QWORD*)&SystemTimeAsFileTime + 40i64);
}
// 140C65C20: using guessed type __int64 qword_140C65C20;

