//----- (000000014057FE00) ----------------------------------------------------
void __fastcall sub_14057FE00(__int64* a1, unsigned int a2, unsigned int a3, int a4)
{
	__int64 v4; // rcx
	__int64 v5; // [rsp+30h] [rbp-48h]
	_QWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
	__int64 v7; // [rsp+50h] [rbp-28h]
	unsigned __int64 v8; // [rsp+58h] [rbp-20h]
	__int64 v9; // [rsp+60h] [rbp-18h]
	__int64 v10; // [rsp+68h] [rbp-10h]

	v4 = *a1;
	v6[0] = 0i64;
	v7 = 0i64;
	v8 = 0i64;
	v9 = 0i64;
	v10 = 0i64;
	v6[1] = v4;
	LODWORD(v5) = *(_DWORD*)(qword_140C635F0 + 5760);
	v6[0] = v5;
	LODWORD(v10) = 36;
	v9 = 0i64;
	LODWORD(v7) = a4;
	v8 = __PAIR64__(a3, a2);
	sub_1403F4740(qword_140C65898, 0x4B1u, (__int64)v6);
}
// 14057FE56: variable 'v5' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

