//----- (00000001400C31A0) ----------------------------------------------------
__int64 __fastcall sub_1400C31A0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r9
	_DWORD* v3; // r8
	__int64 v4; // r10
	int v5; // eax

	v2 = a1 + 16;
	*(_DWORD*)(a1 + 80) = 0;
	v3 = (_DWORD*)(a1 + 64);
	v4 = 4i64;
	do
	{
		v5 = *(_DWORD*)((char*)v3 + (_QWORD)&unk_140A14E90 - a1 - 64);
		*v3 = 0;
		v2 += 8i64;
		*(v3 - 4) = v5;
		*(_QWORD*)(v2 - 8) = 0i64;
		++v3;
		--v4;
	} while (v4);
	*(_DWORD*)(a1 + 80) |= 0x300u;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 64) = *a2;
	*(_DWORD*)(a1 + 68) = a2[1];
	*(_DWORD*)(a1 + 72) = a2[2];
	*(_DWORD*)(a1 + 76) = a2[3];
	return a1;
}

