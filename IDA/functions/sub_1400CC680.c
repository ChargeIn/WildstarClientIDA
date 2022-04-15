//----- (00000001400CC680) ----------------------------------------------------
void __fastcall sub_1400CC680(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx

	v3 = *(_QWORD*)(a1 + 440);
	if (v3)
	{
		sub_14018B900(v3, 0);
		*(_QWORD*)(a1 + 440) = 0i64;
	}
	*(_OWORD*)(a1 + 64) = *(_OWORD*)a2;
	*(_QWORD*)(a1 + 80) = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(a1 + 88) = *(_QWORD*)(a2 + 24);
	*(_QWORD*)(a1 + 96) = *(_QWORD*)(a2 + 32);
	*(_QWORD*)(a1 + 104) = *(_QWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 112) = *(_DWORD*)(a2 + 48);
	*(_DWORD*)(a1 + 116) = *(_DWORD*)(a2 + 52);
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(a2 + 56);
	*(_DWORD*)(a1 + 124) = *(_DWORD*)(a2 + 60);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 132) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 136) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 140) = *(_DWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 144) = *(_DWORD*)(a2 + 80);
	sub_1400CB690(a1);
	sub_1400CB960((char*)a1);
}

