//----- (000000014037EF80) ----------------------------------------------------
__int64 __fastcall sub_14037EF80(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	int v4; // eax
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rbx
	__int64 v8; // rax
	int* v9; // rcx
	_QWORD* v10; // r8
	unsigned int v11; // edx
	__int64 v12; // rcx
	__int64 v13; // [rsp+30h] [rbp-10D8h] BYREF
	unsigned int v14[4]; // [rsp+38h] [rbp-10D0h] BYREF
	int v15[6]; // [rsp+48h] [rbp-10C0h] BYREF
	int v16[1040]; // [rsp+60h] [rbp-10A8h] BYREF
	int v17[20]; // [rsp+10A0h] [rbp-68h] BYREF

	v2 = *(_QWORD*)(a1 + 416);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 416) = 0i64;
	}
	result = *(_DWORD*)(*(_QWORD*)a1 + 232i64) & 5;
	if ((*(_BYTE*)(*(_QWORD*)a1 + 232i64) & 5) == 5 && (*(_DWORD*)(*(_QWORD*)a1 + 236i64) & 0x8000) != 0)
	{
		v4 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 64i64))(*(_QWORD*)(a1 + 16), 16i64);
		result = sub_140350A20(*(_QWORD*)(*(_QWORD*)a1 + 16i64), 10i64, v4, (int**)(a1 + 416));
		if ((int)result >= 0 && (_DWORD)result != 1)
		{
			v5 = *(_QWORD*)(a1 + 16);
			v13 = 0i64;
			(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v5 + 72i64))(v5, 16i64, &v13);
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 416) + 32i64);
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 16i64))(v13);
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 24i64))(v13);
			v9 = v16;
			v10 = (_QWORD*)v8;
			do
			{
				v9 = (int*)((char*)v9 + 65);
				*(_QWORD*)((char*)v9 - 65) = *v10;
				*(_QWORD*)((char*)v9 - 57) = v10[1];
				*(_QWORD*)((char*)v9 - 49) = v10[2];
				*(_QWORD*)((char*)v9 - 41) = v10[3];
				*(_QWORD*)((char*)v9 - 33) = v10[4];
				*(_QWORD*)((char*)v9 - 25) = v10[5];
				*(_QWORD*)((char*)v9 - 17) = v10[6];
				*(_QWORD*)((char*)v9 - 9) = v10[7];
				*((_BYTE*)v9 - 1) = 0;
				v10 = (_QWORD*)((char*)v10 + *(int*)(v7 + 44));
			} while (v9 < v17);
			*(_QWORD*)v9 = 0i64;
			*((_QWORD*)v9 + 1) = 0i64;
			*((_QWORD*)v9 + 2) = 0i64;
			*((_QWORD*)v9 + 3) = 0i64;
			*((_QWORD*)v9 + 4) = 0i64;
			*((_QWORD*)v9 + 5) = 0i64;
			*((_QWORD*)v9 + 6) = 0i64;
			*((_QWORD*)v9 + 7) = 0i64;
			*((_BYTE*)v9 + 64) = 0;
			v11 = *(_DWORD*)(v6 + 24);
			v12 = *(_QWORD*)(v6 + 16);
			v15[0] = 65;
			v15[1] = 65;
			v15[2] = 1;
			v15[3] = 6;
			v14[0] = 65;
			v14[1] = 4225;
			v14[2] = 4225;
			result = sub_140371D10(v12, v11, v16, v15, v14);
			if (v13)
				return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		}
	}
	return result;
}
// 14037EF80: using guessed type int var_10A8[1040];
// 14037EF80: using guessed type int var_68[20];

