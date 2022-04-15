//----- (00000001408726A0) ----------------------------------------------------
__int64 __fastcall sub_1408726A0(__int64 a1, __int64 a2)
{
	int v2; // r8d
	__int64 v4; // rax
	unsigned __int16 v5; // dx
	__int64 result; // rax
	__int64 v7; // [rsp+20h] [rbp-48h] BYREF
	__int64 v8; // [rsp+28h] [rbp-40h]
	__int64 v9; // [rsp+30h] [rbp-38h]
	__int64 v10; // [rsp+38h] [rbp-30h]
	__int64 v11; // [rsp+40h] [rbp-28h]
	__int64 v12; // [rsp+48h] [rbp-20h]
	__int64 v13; // [rsp+50h] [rbp-18h]

	v2 = *(_DWORD*)(a2 + 8);
	v7 = *(_QWORD*)a2;
	v8 = *(_QWORD*)(a2 + 8);
	v9 = *(_QWORD*)(a2 + 16);
	v10 = *(_QWORD*)(a2 + 24);
	v11 = *(_QWORD*)(a2 + 32);
	v12 = *(_QWORD*)(a2 + 40);
	v4 = *(_QWORD*)(a2 + 48);
	v5 = *(_WORD*)(a2 + 16);
	v13 = v4;
	result = sub_140868400((__int64)&v7, v5, v2);
	if ((_DWORD)result == 1)
	{
		WORD1(v9) = *(_WORD*)(a2 + 18);
		sub_14087E8F0((__int64*)a2, (__int64)&v7);
		sub_140868480(a2);
		*(_QWORD*)a2 = v7;
		*(_QWORD*)(a2 + 8) = v8;
		*(_QWORD*)(a2 + 16) = v9;
		return 1i64;
	}
	return result;
}

