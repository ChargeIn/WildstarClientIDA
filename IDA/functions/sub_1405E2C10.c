//----- (00000001405E2C10) ----------------------------------------------------
__int64 __fastcall sub_1405E2C10(__int64 a1, int a2, __int16* a3, int a4)
{
	unsigned __int64 v7; // rbp
	_QWORD* v8; // rbx
	__int64 v9; // rcx
	unsigned __int64 v10; // rbp
	__int64 result; // rax
	_QWORD* v12; // rbx
	__int64* v13; // rbx
	__int64 v14; // rbx
	_WORD* v15; // rcx
	__int64 v16; // r8
	char* v17; // rsi
	__int16 v18; // ax
	unsigned int** v19; // rbx
	unsigned int* v20; // rbx
	int v21; // [rsp+40h] [rbp+8h] BYREF

	v21 = a4;
	v7 = (*(__int64(__fastcall**)(int*))(a1 + 104))(&v21);
	v8 = *(_QWORD**)(*(_QWORD*)(a1 + 96) + 8 * (v7 % *(_QWORD*)(a1 + 88)));
	if (!v8)
		goto LABEL_5;
	while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 112))(&v21, v8 + 2))
	{
		v8 = (_QWORD*)v8[1];
		if (!v8)
			goto LABEL_5;
	}
	v13 = v8 + 3;
	if (v13)
	{
		v14 = *v13;
		if (!a3)
			a3 = sub_14034BDD0(v9, 108);
		v15 = (_WORD*)(v14 + 78);
		v16 = 51i64;
		v17 = (char*)a3 - v14 - 78;
		while (v16 != -2147483595)
		{
			v18 = *(_WORD*)((char*)v15 + (_QWORD)v17);
			if (!v18)
				break;
			*v15++ = v18;
			if (!--v16)
			{
				--v15;
				break;
			}
		}
		result = 0i64;
		*v15 = 0;
		if (*(_DWORD*)(v14 + 256))
			return sub_1400EA3E0(
				*(_QWORD*)(qword_140C65898 + 29504),
				"FriendshipUpdate",
				byte_1409EAC3C,
				*(unsigned int*)(v14 + 8));
	}
	else
	{
	LABEL_5:
		v10 = (*(__int64(__fastcall**)(int*))(a1 + 384))(&v21);
		result = v10 / *(_QWORD*)(a1 + 368);
		v12 = *(_QWORD**)(*(_QWORD*)(a1 + 376) + 8 * (v10 % *(_QWORD*)(a1 + 368)));
		if (v12)
		{
			while (1)
			{
				if (v10 == *v12)
				{
					result = (*(__int64(__fastcall**)(int*, _QWORD*))(a1 + 392))(&v21, v12 + 2);
					if ((_DWORD)result)
						break;
				}
				v12 = (_QWORD*)v12[1];
				if (!v12)
					return result;
			}
			v19 = (unsigned int**)(v12 + 3);
			if (v19)
			{
				v20 = *v19;
				sub_1405DCFC0((__int64)v20, a2, (int*)a3);
				return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipAccountDataUpdate", byte_1409EACD4, *v20);
			}
		}
	}
	return result;
}
// 1405E2D16: conditional instruction was optimized away because r8.8!=0
// 1405E2CDB: variable 'v9' is possibly undefined
// 1409EAC3C: using guessed type _BYTE byte_1409EAC3C[32];
// 1409EACD4: using guessed type _BYTE byte_1409EACD4[24];
// 140C65898: using guessed type __int64 qword_140C65898;

