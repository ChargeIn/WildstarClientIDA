//----- (0000000140876EA0) ----------------------------------------------------
__int64 __fastcall sub_140876EA0(__int64 a1, int a2, __int64 a3, int a4)
{
	__int64 result; // rax
	__int64 v9; // rbx
	char v10; // r10
	char v11; // r10
	__int64 v12; // rax
	__int64 v13; // rdi
	int v14; // [rsp+20h] [rbp-38h] BYREF
	__int64 v15; // [rsp+28h] [rbp-30h]
	__int64 v16; // [rsp+30h] [rbp-28h]
	int v17; // [rsp+38h] [rbp-20h]
	int v18; // [rsp+3Ch] [rbp-1Ch]
	int v19; // [rsp+40h] [rbp-18h]
	char v20; // [rsp+44h] [rbp-14h]
	char v21; // [rsp+45h] [rbp-13h]

	result = sub_14085A9A0();
	v9 = result;
	if (result)
	{
		v10 = *(_BYTE*)(a1 + 88);
		v20 = 0;
		v21 = v10;
		v11 = *(_BYTE*)(a1 + 62);
		v15 = a1 + 64;
		v14 = a2;
		v16 = a3;
		v17 = a4;
		v19 = v11 & 0x1F;
		v18 = sub_140855A70(a1);
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v9 + 136i64))(v9, &v14);
		v12 = sub_14086F180();
		v13 = v12;
		if (v12)
		{
			(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v12 + 136i64))(v12, &v14);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
		}
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
	}
	return result;
}

