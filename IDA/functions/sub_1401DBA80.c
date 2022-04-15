//----- (00000001401DBA80) ----------------------------------------------------
__int64 __fastcall sub_1401DBA80(__int64 a1, int* a2)
{
	__int64 v4; // rdi
	unsigned int i; // ebx
	__int64 v6; // rax
	__int64 v7; // rax
	int v9[5]; // [rsp+30h] [rbp-2D8h] BYREF
	__int64 v10; // [rsp+44h] [rbp-2C4h]
	__int16 v11; // [rsp+4Ch] [rbp-2BCh]
	__int64 v12; // [rsp+90h] [rbp-278h]
	char v14[288]; // [rsp+A0h] [rbp-268h] BYREF
	char v15[288]; // [rsp+1C0h] [rbp-148h] BYREF

	v4 = 0i64;
	for (i = 0; i < 0x48; ++i)
	{
		v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 64i64))(a1, i);
		if (*(_QWORD*)v6)
		{
			++v4;
			*(_DWORD*)&v14[4 * v4 + 284] = **(_DWORD**)v6;
			*(_DWORD*)&v14[4 * v4 - 4] = *(_DWORD*)(v6 + 8);
		}
	}
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
	v10 = 0i64;
	v11 = 0;
	v9[0] = 1732584193;
	v9[1] = -271733879;
	v9[2] = -1732584194;
	v9[3] = 271733878;
	v9[4] = -1009589776;
	v12 = 0i64;
	return sub_1401DBC80(v7, (__int64)v15, (__int64)v14, v4, a2, (__int64)v9);
}
// 1401DBA80: using guessed type char var_148[288];

