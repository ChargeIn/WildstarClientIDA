//----- (000000014073E640) ----------------------------------------------------
void __fastcall sub_14073E640(__int64 a1)
{
	unsigned __int64 v2; // rdx
	__int64 v3; // [rsp+20h] [rbp-38h] BYREF
	__int64 v4; // [rsp+28h] [rbp-30h]
	__int64 v5; // [rsp+30h] [rbp-28h]
	__int64 v6; // [rsp+38h] [rbp-20h]
	__int64 v7; // [rsp+40h] [rbp-18h]
	__int64 v8; // [rsp+48h] [rbp-10h] BYREF

	if (!*(_DWORD*)(a1 + 16))
	{
		v2 = *(_QWORD*)(a1 + 88);
		v3 = 0i64;
		v4 = 0i64;
		v6 = 0i64;
		v7 = 0i64;
		v5 = 0i64;
		v8 = 0i64;
		v7 = *(_QWORD*)(a1 + 80);
		v6 = *(_QWORD*)(a1 + 48);
		v5 = *(_QWORD*)(a1 + 72);
		v3 = *(_QWORD*)(a1 + 56);
		v4 = *(_QWORD*)(a1 + 64);
		HIDWORD(v8) = *(_DWORD*)(a1 + 100);
		sub_1401E83A0((float*)&v8, v2);
		sub_1403F4900(qword_140C65898, 0x6C5u, (__int64)&v3);
		*(_DWORD*)(a1 + 16) = 1;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

