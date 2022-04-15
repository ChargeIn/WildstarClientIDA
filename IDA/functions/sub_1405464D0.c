//----- (00000001405464D0) ----------------------------------------------------
__int64 __fastcall sub_1405464D0(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 v4; // rsi
	unsigned __int64 v5; // rdi
	_QWORD* v6; // rbx
	int v7; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 72);
	if (!v2)
		return 0i64;
	while (*(_DWORD*)(v2 + 64) == *(_DWORD*)(a1 + 344) || *(_DWORD*)(v2 + 68) != a2)
	{
		v2 = *(_QWORD*)(v2 + 40);
		if (!v2)
			return 0i64;
	}
	v4 = qword_140C65898;
	v7 = *(_DWORD*)(v2 + 64);
	v5 = (*(__int64(__fastcall**)(int*))(qword_140C65898 + 28448))(&v7);
	v6 = *(_QWORD**)(*(_QWORD*)(v4 + 28440) + 8 * (v5 % *(_QWORD*)(v4 + 28432)));
	if (!v6)
		return 0i64;
	while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v4 + 28456))(&v7, v6 + 2))
	{
		v6 = (_QWORD*)v6[1];
		if (!v6)
			return 0i64;
	}
	if (v6 == (_QWORD*)-24i64)
		return 0i64;
	else
		return v6[3];
}
// 140C65898: using guessed type __int64 qword_140C65898;

