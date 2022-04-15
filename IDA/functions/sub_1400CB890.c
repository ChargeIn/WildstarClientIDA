//----- (00000001400CB890) ----------------------------------------------------
_DWORD* __fastcall sub_1400CB890(__int64 a1, _DWORD* a2)
{
	__int64 v3; // rcx
	_DWORD* v5; // rcx
	_DWORD* v7; // rax
	int v8; // edx
	int v9; // ecx
	__int64 v10; // rax
	int v11; // ecx
	int v12; // edx
	char v13[24]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *(_QWORD*)(a1 + 16);
	if (v3)
	{
		if ((*(_DWORD*)(a1 + 656) & 0x100) != 0)
		{
			sub_1400CB960();
			v5 = *(_DWORD**)(a1 + 16);
			*a2 = v5[179];
			a2[1] = v5[180];
			a2[2] = v5[181];
			a2[3] = v5[182];
		}
		else
		{
			v7 = (_DWORD*)sub_1400CB3D0(v3, v13);
			v8 = v7[2] - *v7;
			v9 = v7[3] - v7[1];
			*(_QWORD*)a2 = qword_140C77760;
			a2[2] = v8;
			a2[3] = v9;
		}
		return a2;
	}
	else
	{
		v10 = *(_QWORD*)(a1 + 32);
		v11 = *(_DWORD*)(v10 + 80);
		v12 = *(_DWORD*)(v10 + 84);
		*(_QWORD*)a2 = qword_140C77760;
		a2[2] = v11;
		a2[3] = v12;
		return a2;
	}
}
// 1400CB3D0: using guessed type __int64 __fastcall sub_1400CB3D0(_QWORD, _QWORD);
// 1400CB960: using guessed type __int64 sub_1400CB960(void);
// 140C77760: using guessed type __int64 qword_140C77760;
// 1400CB890: using guessed type char var_18[24];

