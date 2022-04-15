//----- (0000000140701650) ----------------------------------------------------
__int64 __fastcall sub_140701650(_QWORD* a1)
{
	__int64* v2; // rdx
	int v3; // eax
	unsigned int v4; // edi
	__int64* v5; // rcx
	int v6; // eax
	int v7; // esi
	_DWORD* v8; // rax
	char v9; // r8
	unsigned int v10; // eax
	unsigned __int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]
	__int64 v14; // [rsp+30h] [rbp-18h] BYREF
	int v15; // [rsp+38h] [rbp-10h]
	__int64 v16; // [rsp+58h] [rbp+10h] BYREF

	v2 = (__int64*)dword_140A12138;
	if (a1[3] < a1[2])
		v2 = (__int64*)a1[3];
	v3 = *((_DWORD*)v2 + 2);
	if (v3 == 3)
		goto LABEL_7;
	if (v3 == 4 && sub_14005AC80((char*)(*v2 + 32), (unsigned __int64*)&v16))
	{
		v15 = 3;
		v2 = &v14;
		v14 = v16;
	LABEL_7:
		v4 = (int)*(double*)v2;
		goto LABEL_8;
	}
	v4 = 0;
LABEL_8:
	v5 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__int64*)(a1[3] + 16i64);
	v6 = *((_DWORD*)v5 + 2);
	if (v6 != 3)
	{
		if (v6 != 4 || !sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v16))
		{
			v7 = 0;
			goto LABEL_15;
		}
		v15 = 3;
		v5 = &v14;
		v14 = v16;
	}
	v7 = (int)*(double*)v5;
LABEL_15:
	v8 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v8 >= a1[2] || v8 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v9 = 0;
	else
		v9 = sub_140056D60(a1, 3u);
	if (v4 < 2)
	{
		v12 = 0i64;
		v13 = 0i64;
		v10 = *(_DWORD*)(qword_140C65898 + 32132);
		LOBYTE(v13) = v9;
		HIDWORD(v13) = v7 != 0;
		v12 = __PAIR64__(v4, v10);
		sub_1403F4900(qword_140C65898, 0x163u, (__int64)&v12);
		*(_DWORD*)(qword_140C65898 + 32132) = 0;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

