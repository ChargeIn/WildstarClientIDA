//----- (00000001404005C0) ----------------------------------------------------
__int64 __fastcall sub_1404005C0(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	unsigned __int8(__fastcall* a5)(__int64, __int64))
{
	__int64 v5; // rbx
	__int64 i; // rsi
	__int64 v10; // rdi
	__int64 v11; // rbx
	void(__fastcall * **v12)(_QWORD); // rcx
	void(__fastcall * **v13)(_QWORD); // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx

	v5 = a2;
	for (i = (a2 - 1) / 2; v5 > a3; i = (i - 1) / 2)
	{
		v10 = a1 + 112 * i;
		if (!a5(v10, a4))
			break;
		v11 = a1 + 112 * v5;
		if (v11 != v10)
		{
			v12 = *(void(__fastcall****)(_QWORD))(v10 + 56);
			if (v12)
				(**v12)(v12);
			v13 = *(void(__fastcall****)(_QWORD))(v10 + 64);
			if (v13)
				(**v13)(v13);
			v14 = *(_QWORD*)(v11 + 56);
			if (v14)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
				*(_QWORD*)(v11 + 56) = 0i64;
			}
			v15 = *(_QWORD*)(v11 + 64);
			if (v15)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
				*(_QWORD*)(v11 + 64) = 0i64;
			}
			*(_DWORD*)v11 = *(_DWORD*)v10;
			if (v10 + 8 != v11 + 8)
				sub_14001C480(v11 + 8, *(int**)(v10 + 16), *(int**)(v10 + 24));
			*(_DWORD*)(v11 + 40) = *(_DWORD*)(v10 + 40);
			*(_DWORD*)(v11 + 44) = *(_DWORD*)(v10 + 44);
			*(_DWORD*)(v11 + 48) = *(_DWORD*)(v10 + 48);
			*(_QWORD*)(v11 + 56) = *(_QWORD*)(v10 + 56);
			*(_QWORD*)(v11 + 64) = *(_QWORD*)(v10 + 64);
			*(_DWORD*)(v11 + 72) = *(_DWORD*)(v10 + 72);
			*(_DWORD*)(v11 + 76) = *(_DWORD*)(v10 + 76);
			*(_DWORD*)(v11 + 84) = *(_DWORD*)(v10 + 84);
			*(_OWORD*)(v11 + 96) = *(_OWORD*)(v10 + 96);
			*(_DWORD*)(v11 + 88) = *(_DWORD*)(v10 + 88);
			*(_DWORD*)(v11 + 80) = *(_DWORD*)(v10 + 80);
		}
		v5 = i;
	}
	return sub_140474EC0(112 * v5 + a1, a4);
}

