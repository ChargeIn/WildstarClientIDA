//----- (0000000140602D20) ----------------------------------------------------
__int64 __fastcall sub_140602D20(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v5; // rdx
	bool v6; // zf
	unsigned int v7; // r14d
	__int64 v8; // rsi
	__int64 v9; // rcx
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // rdx
	__int64 v14; // rbx
	__int64 v15; // rdx
	int v17; // [rsp+20h] [rbp-48h]
	int v18; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v19)(); // [rsp+30h] [rbp-38h] BYREF
	int v20; // [rsp+38h] [rbp-30h]
	__int64 v21; // [rsp+40h] [rbp-28h]
	int v22; // [rsp+48h] [rbp-20h]
	unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	if (v2 && *(_QWORD*)(v2 + 72) == *(_QWORD*)a2)
	{
		if (sub_14079EE60(*(_QWORD*)(a1 + 64), a2 + 16, &v23))
		{
			v5 = *(_QWORD*)(*(_QWORD*)(v2 + 88) + 8 * v23);
			if (v5)
			{
				v6 = *(_DWORD*)(v5 + 8) == *(_DWORD*)(a2 + 32);
				v7 = *(_DWORD*)(v5 + 8) ^ *(_DWORD*)(a2 + 32);
				*(_DWORD*)(v5 + 8) = *(_DWORD*)(a2 + 32);
				if (!v6)
				{
					v22 = 1;
					v8 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
					v19 = off_140B569F0;
					v9 = *(_QWORD*)(v8 + 32);
					v21 = v8;
					if (*(_QWORD*)(v9 + 120) >= *(_QWORD*)(v9 + 112))
						sub_14005E2C0(v8);
					v10 = *(_QWORD*)(v8 + 16);
					v11 = sub_14005C1B0(v8, 0, 0);
					*(_DWORD*)(v10 + 8) = 5;
					*(_QWORD*)v10 = v11;
					*(_QWORD*)(v8 + 16) += 16i64;
					LODWORD(v10) = sub_1400578C0(v8);
					v20 = v10;
					sub_1400FAFE0((__int64)&v19, v7, (__int64)&off_140C39100, 0xFui64);
					v12 = sub_140605420(a1, (int*)(a2 + 16));
					v18 = v10;
					v17 = *(_DWORD*)(a2 + 36);
					sub_1400EA3E0(
						*(_QWORD*)(qword_140C65898 + 29504),
						"Group_MemberFlagsChanged",
						byte_1409EA12C,
						(unsigned int)(v12 + 1),
						v17,
						v18,
						v19);
					sub_1400579E0(v8, v13, v10);
				}
			}
		}
	}
	else
	{
		v14 = *(_QWORD*)(a1 + 72);
		if (v14)
		{
			if (*(_QWORD*)(v14 + 72) == *(_QWORD*)a2 && sub_14079EE60(*(_QWORD*)(a1 + 72), a2 + 16, &v23))
			{
				v15 = *(_QWORD*)(*(_QWORD*)(v14 + 88) + 8 * v23);
				if (v15)
					*(_DWORD*)(v15 + 8) = *(_DWORD*)(a2 + 32);
			}
		}
	}
	return 0i64;
}
// 140602E68: variable 'v13' is possibly undefined
// 1409EA12C: using guessed type _BYTE byte_1409EA12C[24];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C39100: using guessed type void *off_140C39100;
// 140C65898: using guessed type __int64 qword_140C65898;

