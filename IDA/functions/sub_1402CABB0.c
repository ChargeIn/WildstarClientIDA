//----- (00000001402CABB0) ----------------------------------------------------
__int64 __fastcall sub_1402CABB0(__int64 a1, __int64 a2)
{
	void(__fastcall * **v4)(_QWORD); // rcx

	*(_QWORD*)a1 = *(_QWORD*)a2;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
	*(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 24);
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(a2 + 32);
	*(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 + 48);
	*(_OWORD*)(a1 + 64) = *(_OWORD*)(a2 + 64);
	*(_OWORD*)(a1 + 80) = *(_OWORD*)(a2 + 80);
	v4 = *(void(__fastcall****)(_QWORD))(a2 + 96);
	*(_QWORD*)(a1 + 96) = v4;
	if (v4)
		(**v4)(v4);
	sub_1401DDFD0((_QWORD*)(a1 + 104), a2 + 104);
	sub_140029C50((_QWORD*)(a1 + 136), a2 + 136);
	*(_DWORD*)(a1 + 168) = *(_DWORD*)(a2 + 168);
	return a1;
}

