//----- (00000001405042B0) ----------------------------------------------------
void __fastcall sub_1405042B0(_DWORD* a1, _QWORD* a2, __int64 a3)
{
	int v5; // edi
	__int64* v6; // rbx
	__int64 v7; // rcx
	__int64 v8[50]; // [rsp+30h] [rbp-1A8h] BYREF
	char v9; // [rsp+1C8h] [rbp-10h] BYREF

	if (!*(_QWORD*)(a3 + 24)
		&& a1[4] == *(_DWORD*)(a3 + 8)
		&& a1[5] == *(_DWORD*)(a3 + 12)
		&& a1[7] == *(_DWORD*)(a3 + 20))
	{
		sub_140504000((__int64)a1, a2, *(_QWORD*)a3);
	}
	else
	{
		sub_140503450((__int64)v8);
		sub_140503600((__int64)v8, *(_DWORD*)(a3 + 8), *(_DWORD*)(a3 + 12), *(_DWORD*)(a3 + 16), *(_DWORD*)(a3 + 20));
		sub_140504000((__int64)v8, a2, *(_QWORD*)a3);
		if (*(_QWORD*)(a3 + 24))
		{
			sub_140503600((__int64)v8, *(_DWORD*)(a3 + 32), *(_DWORD*)(a3 + 36), *(_DWORD*)(a3 + 40), *(_DWORD*)(a3 + 44));
			sub_140504000((__int64)v8, a2, *(_QWORD*)(a3 + 24));
		}
		v5 = 3;
		v6 = (__int64*)&v9;
		v8[0] = (__int64)off_140B6A420;
		do
		{
			v7 = *(v6 - 6);
			v6 -= 11;
			if (v7)
				sub_14018B900(v7, 0);
			if (*v6)
				sub_14018B900(*v6, 0);
			--v5;
		} while (v5 >= 0);
	}
}
// 140B6A420: using guessed type __int64 (__fastcall *off_140B6A420[3])();

