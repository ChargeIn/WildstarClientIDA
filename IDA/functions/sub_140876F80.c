//----- (0000000140876F80) ----------------------------------------------------
__int64 __fastcall sub_140876F80(__int64 a1, int a2, __int64 a3, int a4)
{
	__int64 v8; // rdi
	char v9; // r10
	int v10; // r9d
	unsigned int v11; // ebx
	int v13; // [rsp+20h] [rbp-38h] BYREF
	__int64 v14; // [rsp+28h] [rbp-30h]
	int v15; // [rsp+30h] [rbp-28h]
	int v16; // [rsp+34h] [rbp-24h]
	int v17; // [rsp+38h] [rbp-20h]
	__int16 v18; // [rsp+3Ch] [rbp-1Ch]
	char v19; // [rsp+3Eh] [rbp-1Ah]

	v8 = sub_140855940(a1);
	if (!v8)
		return 15i64;
	v9 = *(_BYTE*)(a1 + 88);
	v10 = *(_BYTE*)(a1 + 62) & 0x1F;
	v18 = 0;
	v13 = a2;
	v19 = v9;
	v14 = a3;
	v15 = a4;
	v17 = v10;
	v16 = sub_140855A70(a1);
	v11 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v8 + 128i64))(v8, &v13);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
	return v11;
}

