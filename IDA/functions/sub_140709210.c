//----- (0000000140709210) ----------------------------------------------------
__int64 __fastcall sub_140709210(_QWORD* a1)
{
	unsigned int v2; // eax
	unsigned __int64 v3; // rdx
	_DWORD* v4; // rcx
	unsigned int v5; // r8d
	int v6; // eax
	int v7; // esi
	_QWORD* v8; // rbp
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // r11
	__int64 v15; // r9
	int v16; // r8d
	__int64 v17; // rdx
	__int64(__fastcall * *v19)(); // [rsp+20h] [rbp-28h] BYREF
	int v20; // [rsp+28h] [rbp-20h]
	_QWORD* v21; // [rsp+30h] [rbp-18h]
	int v22; // [rsp+38h] [rbp-10h]

	v2 = sub_140056D60(a1, 1u);
	v3 = a1[2];
	v4 = dword_140A12138;
	v5 = v2;
	if (a1[3] + 16i64 < v3)
		v4 = (_DWORD*)(a1[3] + 16i64);
	v6 = v4[2];
	v7 = v6 && (v6 != 1 || *v4);
	if (qword_140C65C20)
	{
		v8 = (_QWORD*)sub_140636C40((struct _FILETIME)v4, v5);
		if (v8)
		{
			v9 = a1[4];
			v21 = a1;
			v19 = off_140B569F0;
			v10 = *(_QWORD*)(v9 + 112);
			v22 = 1;
			if (*(_QWORD*)(v9 + 120) >= v10)
				sub_14005E2C0((__int64)a1);
			v11 = a1[2];
			v12 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			a1[2] += 16i64;
			v20 = sub_1400578C0((__int64)a1);
			sub_140634870(v8, (__int64)&v19, v7);
			v13 = sub_14005C3C0(*(_QWORD*)(v21[4] + 160i64), v20);
			v15 = *(_QWORD*)(v14 + 16);
			v16 = v20;
			v17 = *v13;
			*(_QWORD*)v15 = *v13;
			*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
			*(_QWORD*)(v14 + 16) += 16i64;
			sub_1400579E0(v14, v17, v16);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(v3 + 8) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140709324: variable 'v14' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65C20: using guessed type __int64 qword_140C65C20;

