//----- (000000014085E190) ----------------------------------------------------
__int64 __fastcall sub_14085E190(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax
	char v5; // di
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // [rsp+20h] [rbp-38h] BYREF
	__int64 v10; // [rsp+28h] [rbp-30h]
	__int64 v11; // [rsp+30h] [rbp-28h]
	__int64 v12; // [rsp+38h] [rbp-20h]
	int v13; // [rsp+40h] [rbp-18h]
	char v14; // [rsp+44h] [rbp-14h]
	char v15; // [rsp+45h] [rbp-13h]

	result = *(unsigned __int8*)(a1 + 383);
	v5 = a2;
	if ((result & 0x40) != 0)
	{
		*(_BYTE*)(a1 + 383) = result & 0xBF;
		sub_140843A20(a2, a2, a3, a4);
		v7 = *(_QWORD*)(a1 + 176);
		v11 = 0i64;
		v12 = 0i64;
		v14 = 0;
		v9 = 0;
		v8 = *(_QWORD*)(a1 + 160);
		v13 = 3;
		v10 = v7;
		v15 = v5;
		return (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v8 + 296i64))(v8, &v9);
	}
	return result;
}

