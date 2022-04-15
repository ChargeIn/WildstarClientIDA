//----- (0000000140430AA0) ----------------------------------------------------
void __fastcall sub_140430AA0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rdi
	__int64 v4; // r8
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int v9; // eax
	__int64 v10; // rdx
	unsigned int v11; // ebx
	__int64 v12; // rdx
	__int64(__fastcall * *v13)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]
	_QWORD* v15; // [rsp+30h] [rbp-18h]
	__int64 v16; // [rsp+38h] [rbp-10h]

	if (a2)
	{
		v2 = *(_QWORD**)(a1 + 400);
		v13 = off_140B569F0;
		v4 = v2[4];
		LODWORD(v16) = 1;
		v6 = *(_QWORD*)(v4 + 112);
		v15 = v2;
		if (*(_QWORD*)(v4 + 120) >= v6)
			sub_14005E2C0((__int64)v2);
		v7 = v2[2];
		v8 = sub_14005C1B0((__int64)v2, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		v2[2] += 16i64;
		v9 = sub_1400578C0((__int64)v2);
		v10 = *(_QWORD*)(a2 + 8);
		v11 = v9;
		LODWORD(v14) = v9;
		if ((unsigned int)sub_1406B5ED0(v2, v10))
		{
			sub_1400FB540((__int64)&v13);
			v2[2] -= 16i64;
		}
		sub_1400EA3E0(a1, "ItemDeprecationAlert", L"T", v11, v13, v14, v15, v16);
		sub_1400579E0((__int64)v2, v12, v11);
	}
}
// 140430B6C: variable 'v12' is possibly undefined
// 1409EEF9C: using guessed type wchar_t aT_54[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

