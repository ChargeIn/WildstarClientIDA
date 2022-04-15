//----- (00000001406F2D50) ----------------------------------------------------
__int64 __fastcall sub_1406F2D50(__int64 a1)
{
	_QWORD* v1; // rdi
	unsigned __int64 v2; // rsi
	__int64(__fastcall * *v3)(); // r14
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned __int64 v8; // rbx
	int v9; // r10d
	_QWORD* v10; // rax
	__int64 v11; // r8
	__int64 v12; // rdx
	int v13; // r10d
	__int64(__fastcall * *v15)(); // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v16; // [rsp+28h] [rbp-20h]
	_QWORD* v17; // [rsp+30h] [rbp-18h]
	int v18; // [rsp+38h] [rbp-10h]

	v1 = (_QWORD*)a1;
	sub_1404D1B80(a1, (__int64*)&v15);
	v2 = v16;
	v3 = v15;
	if (v16)
	{
		v4 = v1[4];
		v17 = v1;
		v15 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 112);
		v18 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0((__int64)v1);
		v6 = v1[2];
		v7 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		v1[2] += 16i64;
		v8 = 0i64;
		v9 = sub_1400578C0((__int64)v1);
		LODWORD(v16) = v9;
		if (v2)
		{
			do
			{
				if ((unsigned int)sub_1404338E0(v1, (__int64)v3[v8]))
				{
					sub_1400FB470((__int64)&v15);
					v1 = v17;
					v17[2] -= 16i64;
				}
				++v8;
			} while (v8 < v2);
			v9 = v16;
		}
		v10 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v9);
		v11 = v1[2];
		*(_QWORD*)v11 = *v10;
		v12 = *((unsigned int*)v10 + 2);
		*(_DWORD*)(v11 + 8) = v12;
		v1[2] += 16i64;
		sub_1400579E0((__int64)v1, v12, v13);
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
	}
	if (v3)
		(*((void(__fastcall**)(__int64(__fastcall**)())) * (v3 - 2) + 1))(v3 - 2);
	return 1i64;
}
// 1406F2E60: variable 'v13' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

