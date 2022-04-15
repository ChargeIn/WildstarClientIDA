//----- (000000014088C840) ----------------------------------------------------
__int64 __fastcall sub_14088C840(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	_DWORD* v6; // rcx
	_DWORD* v7; // rdi

	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)a1 = &off_1409A8340;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 48) = 0;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_DWORD*)(a1 + 72) = 0;
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a3 + 24);
	*(_QWORD*)(a1 + 24) = *(_QWORD*)a3;
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a3 + 8);
	v6 = *(_DWORD**)(a1 + 40);
	v7 = *(_DWORD**)(a3 + 16);
	if (v6)
		sub_140828460(v6);
	if (v7)
		++* v7;
	*(_QWORD*)(a1 + 40) = v7;
	*(_QWORD*)(a1 + 56) = a4;
	*(_DWORD*)(a4 + 136) ^= (*(_DWORD*)(a4 + 136) ^ (*(_DWORD*)(a4 + 136) + 1)) & 0x3FFFFFFF;
	sub_14082A5F0(qword_140C61B78, a1, *(_QWORD*)(a1 + 56));
	return a1;
}
// 1409A8340: using guessed type __int64 (__fastcall *off_1409A8340)();
// 140C61B78: using guessed type __int64 qword_140C61B78;

