//----- (000000014057F020) ----------------------------------------------------
void __fastcall sub_14057F020(__int64* a1, int a2, int a3)
{
	__int64 v3; // rcx
	__int64 v4; // [rsp+20h] [rbp-48h]
	__int64 v5; // [rsp+30h] [rbp-38h] BYREF
	__int128 v6; // [rsp+38h] [rbp-30h]
	__int64 v7; // [rsp+48h] [rbp-20h]
	__int128 v8; // [rsp+50h] [rbp-18h]

	v5 = 0i64;
	v6 = 0ui64;
	v7 = 0i64;
	v8 = 0ui64;
	LODWORD(v4) = *(_DWORD*)(qword_140C635F0 + 5760);
	v3 = *a1;
	v5 = v4;
	*(_QWORD*)&v6 = v3;
	DWORD2(v8) = 31;
	*(_QWORD*)&v8 = 0i64;
	v7 = a2 + 1000 * a3;
	sub_1403F4740(qword_140C65898, 0x4B1u, (__int64)&v5);
}
// 14057F06D: variable 'v4' is possibly undefined
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

