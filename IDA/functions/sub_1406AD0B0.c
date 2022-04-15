//----- (00000001406AD0B0) ----------------------------------------------------
__int64 __fastcall sub_1406AD0B0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64* v3; // rcx
	int v4; // eax
	int v5; // eax
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	int v8; // [rsp+28h] [rbp-10h]
	__int64 v9; // [rsp+48h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)(v2 + 8))
	{
		v3 = (__int64*)dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v3 = (__int64*)(a1[3] + 16i64);
		v4 = *((_DWORD*)v3 + 2);
		if (v4 != 3)
		{
			if (v4 != 4 || !sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v9))
			{
				v5 = 0;
				goto LABEL_10;
			}
			v8 = 3;
			v3 = &v7;
			v7 = v9;
		}
		v5 = (int)*(double*)v3;
	LABEL_10:
		LODWORD(v9) = v5;
		sub_1403F4900(qword_140C65898, 0xC9u, (__int64)&v9);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

