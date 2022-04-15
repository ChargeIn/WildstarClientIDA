//----- (00000001403F4AD0) ----------------------------------------------------
__int64 __fastcall sub_1403F4AD0(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rcx
	void(__fastcall * **v5)(_QWORD); // rcx

	v3 = (_QWORD*)(a1 + 16);
	*(v3 - 2) = *(_QWORD*)a2;
	*(v3 - 1) = *(_QWORD*)(a2 + 8);
	v3[1] = 0i64;
	v3[2] = 0i64;
	v3[3] = 0i64;
	sub_14001C1B0(v3, *(int**)(a2 + 24), *(_QWORD*)(a2 + 32));
	*(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 + 48);
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(a2 + 56);
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(a2 + 60);
	*(_DWORD*)(a1 + 64) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)(a2 + 68);
	*(_OWORD*)(a1 + 80) = *(_OWORD*)(a2 + 80);
	*(_OWORD*)(a1 + 96) = *(_OWORD*)(a2 + 96);
	*(_OWORD*)(a1 + 112) = *(_OWORD*)(a2 + 112);
	*(_OWORD*)(a1 + 128) = *(_OWORD*)(a2 + 128);
	*(_OWORD*)(a1 + 144) = *(_OWORD*)(a2 + 144);
	if (*(_QWORD*)a1)
		(***(void(__fastcall****)(_QWORD))a1)(*(_QWORD*)a1);
	v5 = *(void(__fastcall****)(_QWORD))(a1 + 8);
	if (v5)
		(**v5)(v5);
	return a1;
}

