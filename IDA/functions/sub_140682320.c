//----- (0000000140682320) ----------------------------------------------------
__int64 __fastcall sub_140682320(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rbx
	__int64* v5; // rcx
	int v6; // eax
	int v7; // edx
	int v8; // edx
	__int64 v10; // [rsp+20h] [rbp-18h] BYREF
	int v11; // [rsp+28h] [rbp-10h]
	unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF
	__int64 v13; // [rsp+50h] [rbp+18h] BYREF

	if (!qword_140C65970)
		return 0i64;
	if (!*(_QWORD*)(qword_140C65898 + 120))
		return 0i64;
	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(v3 + 8);
	if (!v4)
		return 0i64;
	v5 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__int64*)(a1[3] + 16i64);
	v6 = *((_DWORD*)v5 + 2);
	if (v6 != 3)
	{
		if (v6 != 4 || !sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v13))
		{
			v7 = 0;
			goto LABEL_13;
		}
		v11 = 3;
		v5 = &v10;
		v10 = v13;
	}
	v7 = (int)*(double*)v5;
LABEL_13:
	v8 = v7 - 1;
	if (v8 >= 0 && (unsigned __int64)v8 < *(_QWORD*)(v4 + 16))
	{
		v12 = 0i64;
		v12 = __PAIR64__(v8, **(_DWORD**)(v4 + 24));
		sub_1403F4900(qword_140C65898, 0x670u, (__int64)&v12);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

