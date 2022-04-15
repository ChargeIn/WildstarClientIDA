//----- (00000001400FA0F0) ----------------------------------------------------
__int64 __fastcall sub_1400FA0F0(__int64 a1, __int64 a2, char a3)
{
	__int64 v5; // rbx
	__int64 v6; // rax

	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 24) = 1;
	*(_DWORD*)(a1 + 8) = -2;
	*(_QWORD*)a1 = off_140B569F0;
	if (a3)
	{
		if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
			sub_14005E2C0(a2);
		v5 = *(_QWORD*)(a2 + 16);
		v6 = sub_14005C1B0(a2, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		*(_QWORD*)(a2 + 16) += 16i64;
		*(_DWORD*)(a1 + 8) = sub_1400578C0(a2);
	}
	return a1;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

