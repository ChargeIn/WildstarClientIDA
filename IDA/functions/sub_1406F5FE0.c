//----- (00000001406F5FE0) ----------------------------------------------------
__int64 __fastcall sub_1406F5FE0(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rcx
	__int64 v4; // r8
	int v5; // ebx
	_DWORD* v6; // rdx
	__int64 result; // rax
	int v8; // [rsp+30h] [rbp+8h] BYREF

	v2 = sub_140056D60(a1, 1u);
	v3 = qword_140C65898;
	*(_DWORD*)(qword_140C65898 + 30096) = v2;
	v5 = sub_1404DB630(v3, v2, v4, 0);
	v8 = *(_DWORD*)(qword_140C65898 + 30096);
	sub_1403F4900(qword_140C65898, 0x571u, (__int64)&v8);
	v6 = (_DWORD*)a1[2];
	v6[2] = 1;
	result = 1i64;
	*v6 = v5 != 0;
	a1[2] += 16i64;
	return result;
}
// 1406F6009: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

