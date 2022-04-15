//----- (000000014045B6F0) ----------------------------------------------------
int* __fastcall sub_14045B6F0(__int64 a1, unsigned int a2)
{
	int* result; // rax
	int* v4; // rdx
	__int64 v5; // rax
	_WORD* v6; // rcx
	int* v7; // [rsp+30h] [rbp+8h] BYREF

	result = *(int**)(a1 + 16);
	if (result && *(_WORD*)result)
	{
		*(_DWORD*)(a1 + 360) = a2;
		v4 = *sub_1403CA8B0(a1, &v7, a2, a1);
		v5 = 0i64;
		if (*(_WORD*)v4)
		{
			do
				++v5;
			while (*((_WORD*)v4 + v5));
		}
		sub_14001C480(a1 + 368, v4, (int*)((char*)v4 + 2 * v5));
		result = v7;
		if (v7)
			return (int*)(*(__int64(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
	}
	else
	{
		v6 = *(_WORD**)(a1 + 376);
		if (v6 != *(_WORD**)(a1 + 384))
		{
			*v6 = 0;
			result = *(int**)(a1 + 376);
			*(_QWORD*)(a1 + 384) = result;
		}
	}
	return result;
}

