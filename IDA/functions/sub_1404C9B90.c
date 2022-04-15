//----- (00000001404C9B90) ----------------------------------------------------
__int64 __fastcall sub_1404C9B90(__int64 a1, unsigned int a2)
{
	__int64 v2; // rsi
	unsigned int v3; // edx
	__int64 v4; // rbx
	__int64 result; // rax
	unsigned __int64 v6; // rbp
	_QWORD* v7; // rdi
	__int64 v8; // [rsp+40h] [rbp+8h] BYREF
	unsigned int v9; // [rsp+48h] [rbp+10h]

	v9 = a2;
	v8 = a1;
	v2 = qword_140C659F8;
	v3 = HIBYTE(a2);
	if (v3 > *(_DWORD*)(qword_140C659F8 + 216))
		return 0i64;
	v4 = *(_QWORD*)(qword_140C659F8 + 112);
	if (!v4)
		return 0i64;
	while (*(_DWORD*)(v4 + 152) != v3)
	{
		v4 = *(_QWORD*)(v4 + 8);
		if (!v4)
			return 0i64;
	}
	LODWORD(v8) = *(_DWORD*)(v4 + 16);
	v6 = (*(__int64(__fastcall**)(__int64*))(qword_140C659F8 + 56))(&v8);
	v7 = *(_QWORD**)(*(_QWORD*)(v2 + 48) + 8 * (v6 % *(_QWORD*)(v2 + 40)));
	if (!v7)
		return 0i64;
	while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v2 + 64))(&v8, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			return 0i64;
	}
	if (v7 == (_QWORD*)-24i64)
		return 0i64;
	result = sub_1404C7BD0(v4, v9);
	if (!result)
		return 0i64;
	return result;
}
// 1404C9BEB: conditional instruction was optimized away because rbx.8!=0
// 140C659F8: using guessed type __int64 qword_140C659F8;

