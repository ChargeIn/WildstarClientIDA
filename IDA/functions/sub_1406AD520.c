//----- (00000001406AD520) ----------------------------------------------------
__int64 __fastcall sub_1406AD520(_QWORD* a1)
{
	__int64 v2; // rdx
	_DWORD* v3; // rcx
	int v4; // eax
	BOOL v5; // eax
	int v6; // ebx
	unsigned int v7; // ebx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	__int64 v13; // [rsp+30h] [rbp-18h]
	__int64 v14; // [rsp+38h] [rbp-10h]

	v2 = sub_1406A93C0(a1);
	if (v2)
	{
		v3 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (_DWORD*)(a1[3] + 16i64);
		v4 = v3[2];
		v5 = v4 && (v4 != 1 || *v3);
		v6 = *(_DWORD*)(v2 + 100);
		if (v5)
			v7 = v6 | 2;
		else
			v7 = v6 & 0xFFFFFFFD;
		v8 = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
		if (v8)
		{
			v13 = 0i64;
			v11 = 0i64;
			v12 = 0i64;
			v14 = 0i64;
			v11 = *(_QWORD*)(v8 + 8);
			v9 = *(_QWORD*)(v8 + 16);
			LODWORD(v13) = v7;
			v12 = v9;
			HIDWORD(v13) = *(_DWORD*)(v8 + 104);
			LODWORD(v14) = *(_DWORD*)(v8 + 108);
			sub_1403F4900(qword_140C65898, 0x50Eu, (__int64)&v11);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

