//----- (0000000140743F30) ----------------------------------------------------
__int64 __fastcall sub_140743F30(__int64 a1)
{
	__int64 v2; // rcx
	__int64* v3; // rdx
	int v4; // eax
	BOOL v5; // eax
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v10; // [rsp+20h] [rbp-18h] BYREF
	__int64 v11; // [rsp+28h] [rbp-10h]
	__int64 v12; // [rsp+48h] [rbp+10h] BYREF

	v2 = qword_140C65898;
	if (!*(_QWORD*)(qword_140C65898 + 27728))
		return 0i64;
	v3 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v3 = *(__int64**)(a1 + 24);
	v4 = *((_DWORD*)v3 + 2);
	if (v4 == 3)
		goto LABEL_8;
	if (v4 == 4)
	{
		v5 = sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v12);
		v2 = qword_140C65898;
		if (v5)
		{
			LODWORD(v11) = 3;
			v3 = &v10;
			v10 = v12;
		LABEL_8:
			v6 = (int)*(double*)v3;
			goto LABEL_9;
		}
	}
	v6 = 0;
LABEL_9:
	v7 = *(_QWORD*)(v2 + 27728);
	if (v7)
	{
		v10 = 0i64;
		v11 = 0i64;
		v8 = *(_QWORD*)(v7 + 72);
		LODWORD(v11) = v6;
		v10 = v8;
		sub_1403F4740(v2, 0x412u, (__int64)&v10);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

