//----- (0000000140758510) ----------------------------------------------------
__int64 __fastcall sub_140758510(__int64 a1)
{
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int i; // ebx
	__int64* v8; // rax
	__int64 v9; // r11
	__int64 v10; // r9
	int v11; // r8d
	__int64 v12; // rdx
	__int64(__fastcall * *v13)(); // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h]
	__int64 v15; // [rsp+30h] [rbp-18h]
	int v16; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v15 = a1;
		v3 = *(_QWORD*)(a1 + 32);
		v13 = off_140B569F0;
		v4 = *(_QWORD*)(v3 + 112);
		v16 = 1;
		if (*(_QWORD*)(v3 + 120) >= v4)
			sub_14005E2C0(a1);
		v5 = *(_QWORD*)(a1 + 16);
		v6 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		*(_QWORD*)(a1 + 16) += 16i64;
		v14 = sub_1400578C0(a1);
		for (i = 0; i < 0xC; ++i)
		{
			sub_1403C1EA0(qword_140C65898, i, *(_BYTE*)(qword_140C65898 + 28140));
			sub_1400FA9E0((__int64)&v13);
		}
		v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v15 + 32) + 160i64), v14);
		v10 = *(_QWORD*)(v9 + 16);
		v11 = v14;
		v12 = *v8;
		*(_QWORD*)v10 = *v8;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
		*(_QWORD*)(v9 + 16) += 16i64;
		sub_1400579E0(v9, v12, v11);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 1407585F3: variable 'v9' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

