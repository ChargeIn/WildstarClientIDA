//----- (000000014075DAB0) ----------------------------------------------------
__int64 sub_14075DAB0()
{
	int v1; // [rsp+20h] [rbp-28h] BYREF
	__int64* v2; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v3)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v4; // [rsp+38h] [rbp-10h]
	int v5; // [rsp+58h] [rbp+10h] BYREF

	if (!(_QWORD)xmmword_140C7DE80)
	{
		v2 = &qword_140C7DDE0;
		v1 = 0;
		v4 = 0i64;
		v3 = sub_140584770;
		sub_140195960((__int64)&dword_140C7DE70, 120000, (__int64)&v1, 4);
		v5 = 1;
		sub_1403F4740(qword_140C65898, 0x76Fu, (__int64)&v5);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DDE0: using guessed type __int64 qword_140C7DDE0;
// 140C7DE70: using guessed type int dword_140C7DE70;
// 140C7DE80: using guessed type __int128 xmmword_140C7DE80;

