//----- (0000000140869F50) ----------------------------------------------------
__int64 __fastcall sub_140869F50(__int64 a1, __int64 a2)
{
	_DWORD* v2; // rax

	*(_DWORD*)a1 = *(_DWORD*)a2;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 24) = *(_QWORD*)(a2 + 24);
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(a2 + 56);
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(a2 + 32);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 40);
	v2 = *(_DWORD**)(a2 + 48);
	if (v2)
		++* v2;
	*(_QWORD*)(a1 + 48) = v2;
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
	*(_DWORD*)(a1 + 116) = *(_DWORD*)(a2 + 116);
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(a2 + 120);
	*(_DWORD*)(a1 + 124) = *(_DWORD*)(a2 + 124);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)(a2 + 128);
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a2 + 132);
	*(_DWORD*)(a1 + 136) = *(_DWORD*)(a2 + 136);
	*(_DWORD*)(a1 + 140) = *(_DWORD*)(a2 + 140);
	*(_QWORD*)(a1 + 144) = *(_QWORD*)(a2 + 144);
	*(_DWORD*)(a1 + 152) = *(_DWORD*)(a2 + 152);
	*(_BYTE*)(a1 + 156) = *(_BYTE*)(a2 + 156);
	*(_BYTE*)(a1 + 157) = *(_BYTE*)(a2 + 157);
	*(_BYTE*)(a1 + 158) = *(_BYTE*)(a2 + 158);
	return a1;
}

