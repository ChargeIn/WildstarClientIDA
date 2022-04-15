//----- (0000000140287870) ----------------------------------------------------
__int64 __fastcall sub_140287870(__int64 a1, __int64 a2)
{
	void(__fastcall * **v4)(_QWORD); // rcx

	*(_DWORD*)a1 = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 4) = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 12);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 20);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	*(_DWORD*)(a1 + 28) = *(_DWORD*)(a2 + 28);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 32);
	*(_OWORD*)(a1 + 48) = *(_OWORD*)(a2 + 48);
	*(_OWORD*)(a1 + 64) = *(_OWORD*)(a2 + 64);
	*(_OWORD*)(a1 + 80) = *(_OWORD*)(a2 + 80);
	v4 = *(void(__fastcall****)(_QWORD))(a2 + 96);
	*(_QWORD*)(a1 + 96) = v4;
	if (v4)
		(**v4)(v4);
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 112) = *(_QWORD*)(a2 + 112);
	*(_QWORD*)(a1 + 104) = *(_QWORD*)(a2 + 104);
	*(_QWORD*)(a1 + 120) = *(_QWORD*)(a2 + 120);
	*(_DWORD*)(a1 + 128) = *(_DWORD*)(a2 + 128);
	return a1;
}

