//----- (0000000140056080) ----------------------------------------------------
HMODULE* __fastcall sub_140056080(HMODULE* a1)
{
	HMODULE v1; // rax
	__int64 v3; // rcx
	char* v4; // rax
	__int64(__fastcall * v5)(__int64(__fastcall*)(__int64), __int64); // rax
	int v7; // [rsp+30h] [rbp-28h] BYREF
	void(__fastcall * v8)(__int64); // [rsp+38h] [rbp-20h]
	__int64(__fastcall * v9)(__int64(__fastcall*)(__int64), __int64); // [rsp+40h] [rbp-18h]
	_QWORD* v10; // [rsp+48h] [rbp-10h]

	v1 = qword_140C636C0;
	a1[5] = 0i64;
	a1[6] = 0i64;
	v3 = (__int64)(a1 + 3);
	*(_QWORD*)(v3 + 40) = 0i64;
	*(_QWORD*)(v3 + 48) = 0i64;
	*(_DWORD*)(v3 + 68) = 0;
	*(_DWORD*)v3 = 1414420037;
	*a1 = v1;
	v4 = (char*)((char*)GetProcAddress - (char*)*a1);
	a1[2] = 0i64;
	a1[1] = (HMODULE)v4;
	v8 = sub_140056120;
	v5 = sub_140056560;
	if (!sub_140056120)
		v5 = 0i64;
	v9 = v5;
	v10 = a1 + 746;
	v7 = 1;
	sub_140195960(v3, 60000, (__int64)&v7, 4);
	return a1;
}

