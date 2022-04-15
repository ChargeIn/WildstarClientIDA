//----- (00000001400FE860) ----------------------------------------------------
__int64 __fastcall sub_1400FE860(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // r9
	__int64 v4; // rdx
	_DWORD* v5; // rcx
	char* v6; // rbx
	__int64 v7; // r10
	int v8; // eax
	__int64 v9; // rdx
	_DWORD* v10; // rcx
	int v11; // eax
	_DWORD* v12; // rax
	__int64 v13; // rcx

	*(_QWORD*)(a1 + 60) = 1065353216i64;
	v1 = a1 + 112;
	*(_QWORD*)a1 = 0i64;
	*(_WORD*)(a1 + 56) = 0;
	*(_BYTE*)(a1 + 58) = 0;
	*(_QWORD*)(a1 + 68) = 0i64;
	*(_QWORD*)(a1 + 76) = 0i64;
	*(_QWORD*)(a1 + 84) = 0i64;
	*(_DWORD*)(a1 + 92) = 0;
	*(_BYTE*)(a1 + 96) = 0;
	v2 = 4i64;
	*(_DWORD*)(a1 + 192) = 0;
	v4 = a1 + 128;
	v5 = (_DWORD*)(a1 + 176);
	v6 = (char*)&unk_140A1B148 - v1;
	v7 = 4i64;
	do
	{
		v8 = *(_DWORD*)((char*)v5 + (_QWORD)v6 - 64);
		*v5 = 0;
		v4 += 8i64;
		*(v5 - 4) = v8;
		*(_QWORD*)(v4 - 8) = 0i64;
		++v5;
		--v7;
	} while (v7);
	*(_DWORD*)(a1 + 288) = 0;
	v9 = a1 + 224;
	v10 = (_DWORD*)(a1 + 272);
	do
	{
		v11 = *(_DWORD*)((char*)v10 + (_QWORD)((char*)&unk_140A1B148 - a1 - 208) - 64);
		*v10 = 0;
		v9 += 8i64;
		*(v10 - 4) = v11;
		*(_QWORD*)(v9 - 8) = 0i64;
		++v10;
		--v2;
	} while (v2);
	v12 = (_DWORD*)(a1 + 32);
	v13 = 6i64;
	do
	{
		*(v12 - 6) = 0;
		*v12++ = 0;
		--v13;
	} while (v13);
	return a1;
}

