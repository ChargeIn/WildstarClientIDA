//----- (00000001402E4700) ----------------------------------------------------
__int64 __fastcall sub_1402E4700(__int64 a1, __int64 a2, void(__fastcall*** a3)(_QWORD))
{
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rbp
	__int64 result; // rax
	int v11; // edx
	int v12; // ecx
	int v13; // r8d
	int v14; // r9d
	int v15; // eax
	int v16; // edx

	if (a3)
		(**a3)(a3);
	v6 = *(_QWORD*)(a1 + 32);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	*(_QWORD*)(a1 + 24) = a2;
	*(_QWORD*)(a1 + 32) = a3;
	*(_DWORD*)(a1 + 44) = *(unsigned __int16*)(a2 + 4);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a2 + 20);
	v7 = ((__int64(__fastcall*)(_QWORD))(*a3)[3])(a3);
	v8 = *(_QWORD*)(a1 + 88);
	v9 = *(unsigned int*)(a2 + 16) + v7;
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	result = sub_1402E9F20(*(_DWORD*)(a1 + 44), v9, a3, (int**)(a1 + 88));
	if ((int)result >= 0)
	{
		*(_DWORD*)(a1 + 96) = *(_DWORD*)(a1 + 44);
		v11 = *(unsigned __int16*)(a2 + 10);
		v12 = *(unsigned __int16*)(a2 + 8);
		v13 = *(unsigned __int16*)(a2 + 12);
		*(_DWORD*)(a1 + 64) = *(unsigned __int16*)(a2 + 6);
		*(_DWORD*)(a1 + 68) = v12;
		*(_DWORD*)(a1 + 72) = v11;
		*(_DWORD*)(a1 + 76) = v13;
		v14 = (v11 + 15) / 16;
		v16 = *(int*)(a1 + 68) >> 31;
		v15 = *(_DWORD*)(a1 + 68);
		*(_DWORD*)(a1 + 48) = *(_DWORD*)(a1 + 64) / 16;
		*(_DWORD*)(a1 + 52) = ((v16 & 0xF) + v15) >> 4;
		*(_DWORD*)(a1 + 56) = v14;
		*(_DWORD*)(a1 + 60) = (v13 + 15) / 16;
		return 0i64;
	}
	return result;
}

