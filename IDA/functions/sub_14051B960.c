//----- (000000014051B960) ----------------------------------------------------
int* __fastcall sub_14051B960(__int64 a1, int* a2, char a3)
{
	__int64 v5; // rcx
	__int64 v6; // rax
	_DWORD* v7; // rax
	int v8; // ecx
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	if (a3
		&& *(_DWORD*)(a1 + 16)
		&& (v5 = *(_QWORD*)(a1 + 8)) != 0
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 168i64))(v5))
	{
		v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 168i64))(*(_QWORD*)(a1 + 8));
		v7 = sub_1400CB3D0(v6, v10);
		v8 = v7[2] - *v7;
		LODWORD(v7) = v7[3] - v7[1];
		*a2 = v8;
		a2[1] = (int)v7;
		return a2;
	}
	else
	{
		*(_QWORD*)a2 = 0i64;
		return a2;
	}
}
// 14051B960: using guessed type int var_18[6];

