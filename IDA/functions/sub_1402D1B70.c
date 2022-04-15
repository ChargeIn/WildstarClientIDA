//----- (00000001402D1B70) ----------------------------------------------------
__int64 __fastcall sub_1402D1B70(__int64 a1, __int64 a2)
{
	int v2; // ebp
	void(__fastcall * ***v5)(_QWORD); // rbx
	int v6; // esi
	__int64 v7; // rdi
	void(__fastcall * **v8)(_QWORD); // rcx
	void(__fastcall * ***v9)(_QWORD); // rbx
	void(__fastcall * **v10)(_QWORD); // rcx
	int v11; // ecx
	__int128* v12; // rax
	int i; // edx
	__int128 v14; // xmm0
	__int128* v15; // rax
	__int128 v16; // xmm0

	v2 = 3;
	*(_QWORD*)a1 = *(_QWORD*)a2;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
	v5 = (void(__fastcall****)(_QWORD))(a2 + 40);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 20);
	v6 = 3;
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	v7 = a1 - a2;
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 32);
	do
	{
		v8 = *v5;
		*(void(__fastcall****)(_QWORD))((char*)v5 + v7) = *v5;
		if (v8)
			(**v8)(v8);
		++v5;
		--v6;
	} while (v6 >= 0);
	v9 = (void(__fastcall****)(_QWORD))(a2 + 72);
	do
	{
		v10 = *v9;
		*(void(__fastcall****)(_QWORD))((char*)v9 + v7) = *v9;
		if (v10)
			(**v10)(v10);
		++v9;
		--v2;
	} while (v2 >= 0);
	v11 = 1;
	v12 = (__int128*)(a2 + 112);
	for (i = 1; i >= 0; --i)
	{
		v14 = *v12++;
		*(__int128*)((char*)v12 + v7 - 16) = v14;
	}
	v15 = (__int128*)(a2 + 144);
	do
	{
		--v11;
		v16 = *v15++;
		*(__int128*)((char*)v15 + v7 - 16) = v16;
	} while (v11 >= 0);
	*(_DWORD*)(a1 + 176) = *(_DWORD*)(a2 + 176);
	return a1;
}

