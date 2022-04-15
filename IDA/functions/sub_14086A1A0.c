//----- (000000014086A1A0) ----------------------------------------------------
__int64 __fastcall sub_14086A1A0(__int64 a1, __int64 a2)
{
	_DWORD* v4; // rcx
	_DWORD* v5; // rsi

	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	*(_QWORD*)a1 = *(_QWORD*)a2;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	v4 = *(_DWORD**)(a1 + 16);
	v5 = *(_DWORD**)(a2 + 16);
	if (v4)
		sub_140828460(v4);
	if (v5)
		++* v5;
	*(_QWORD*)(a1 + 16) = v5;
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(a2 + 44);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 48);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a2 + 52);
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(a2 + 56);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 60);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a2 + 80);
	*(_DWORD*)(a1 + 84) = *(_DWORD*)(a2 + 84);
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(a2 + 88);
	*(_DWORD*)(a1 + 92) = *(_DWORD*)(a2 + 92);
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(a2 + 96);
	*(_DWORD*)(a1 + 100) = *(_DWORD*)(a2 + 100);
	*(_DWORD*)(a1 + 104) = *(_DWORD*)(a2 + 104);
	*(_DWORD*)(a1 + 108) = *(_DWORD*)(a2 + 108);
	*(_DWORD*)(a1 + 112) = *(_DWORD*)(a2 + 112);
	return a1;
}

