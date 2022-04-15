//----- (000000014054E9F0) ----------------------------------------------------
int* __fastcall sub_14054E9F0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
	int* result; // rax
	__int64 v9; // r10
	int v10; // r9d
	_DWORD* v11; // rax
	__int64 v12; // rdx
	int v13; // r8d
	__int64 v14; // rdx
	int v15; // edx

	result = sub_1407E4830((int*)a1, 0i64, 0x98ui64);
	if (a4)
	{
		*(_DWORD*)a1 = *(_DWORD*)(a4 + 36);
		*(_DWORD*)(a1 + 4) = *(_DWORD*)(a4 + 40);
		*(_DWORD*)(a1 + 36) = *(_DWORD*)(a4 + 44);
		*(_DWORD*)(a1 + 40) = *(_DWORD*)(a4 + 24);
		*(_DWORD*)(a1 + 44) = *(_DWORD*)(a4 + 28);
		if ((*(_BYTE*)(a4 + 52) & 4) != 0 || *(_DWORD*)(a4 + 40) == -1)
			*(_DWORD*)(a1 + 12) = 1;
		if ((*(_BYTE*)(a4 + 52) & 8) != 0)
			*(_DWORD*)(a1 + 24) = 1;
		if ((*(_DWORD*)(a4 + 52) & 0x2000) != 0)
			*(_DWORD*)(a1 + 28) = 1;
		v9 = 6i64;
		*(_DWORD*)(a1 + 52) = (*(_DWORD*)(a4 + 16) >> 13) & 1;
		*(_DWORD*)(a1 + 56) = *(_DWORD*)(a4 + 52) & 0x10;
		*(_DWORD*)(a1 + 60) = *(_DWORD*)(a4 + 52) & 0x20;
		*(_DWORD*)(a1 + 64) = *(_DWORD*)(a4 + 52) & 0x40;
		*(_DWORD*)(a1 + 68) = *(_DWORD*)(a4 + 52) & 0x80;
		*(_DWORD*)(a1 + 72) = *(_DWORD*)(a4 + 52) & 0x100;
		v10 = 0;
		*(_DWORD*)(a1 + 76) = *(_DWORD*)(a4 + 52) & 0x200;
		v11 = (_DWORD*)(a1 + 84);
		do
		{
			v12 = *(_QWORD*)(a4 + 144);
			if (v12)
				v13 = *(_DWORD*)((char*)v11 + v12 - a1 - 12);
			else
				v13 = 0;
			v11[6] = v13;
			v14 = *(_QWORD*)(a4 + 144);
			if (v14)
				v15 = *(_DWORD*)((char*)v11 + 12 - a1 + v14);
			else
				v15 = 0;
			*v11++ = v15;
			--v9;
		} while (v9);
		result = *(int**)(a4 + 144);
		if (result)
			v10 = result[30];
		*(_DWORD*)(a1 + 132) = v10;
		*(_DWORD*)(a1 + 136) = a2;
		*(_QWORD*)(a1 + 144) = a3;
	}
	return result;
}

