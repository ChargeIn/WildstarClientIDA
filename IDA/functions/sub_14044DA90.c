//----- (000000014044DA90) ----------------------------------------------------
void __fastcall sub_14044DA90(_QWORD* a1)
{
	unsigned __int64 v2; // rdi
	unsigned __int64 v3; // rcx
	int v4; // eax
	int v5; // edx
	int v6; // [rsp+20h] [rbp-28h] BYREF
	_QWORD* v7; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v8)(_QWORD*); // [rsp+30h] [rbp-18h]
	__int64 v9; // [rsp+38h] [rbp-10h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp+8h] BYREF

	if (a1[45])
	{
		GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
		LODWORD(v2) = 0;
		v3 = *(_QWORD*)(*(_QWORD*)(a1[44] + 16i64) + 32i64);
		if (v3 > *(_QWORD*)&SystemTimeAsFileTime)
			v2 = (v3 - *(_QWORD*)&SystemTimeAsFileTime) / 0x2710;
		if (a1[36])
			sub_140195D70((__int64)(a1 + 34));
		v4 = 0x7FFFFFFF;
		v5 = 0x80000000;
		v8 = sub_14044E0D0;
		if ((_DWORD)v2 != 0x7FFFFFFF)
			v4 = v2;
		v6 = 0;
		v7 = a1;
		if (v4 != 0x80000000)
			v5 = v4;
		v9 = 0i64;
		sub_140195960((__int64)(a1 + 34), v5, (__int64)&v6, 4);
		SystemTimeAsFileTime = *(struct _FILETIME*)(a1[44] + 16i64);
		sub_140007CB0((__int64)(a1 + 43), (__int64*)&SystemTimeAsFileTime);
	}
}

