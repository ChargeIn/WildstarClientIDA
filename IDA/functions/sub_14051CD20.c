//----- (000000014051CD20) ----------------------------------------------------
int* __fastcall sub_14051CD20(__int64 a1, int* a2, char a3)
{
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	_DWORD* v8; // rax
	int v9; // ecx
	int v11[6]; // [rsp+20h] [rbp-18h] BYREF

	if (a3 && (v5 = *(_QWORD*)(a1 + 16)) != 0 && *(_QWORD*)(v5 + 40))
	{
		v6 = *(_QWORD*)(a1 + 8);
		if (v6 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 168i64))(v6))
		{
			v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 168i64))(*(_QWORD*)(a1 + 8));
			v8 = sub_1400CB3D0(v7, v11);
			v9 = v8[2] - *v8;
			LODWORD(v8) = v8[3] - v8[1];
			*a2 = v9;
			a2[1] = (int)v8;
			return a2;
		}
		else
		{
			*(_QWORD*)a2 = 0i64;
			return a2;
		}
	}
	else
	{
		*(_QWORD*)a2 = 0i64;
		return a2;
	}
}
// 14051CD20: using guessed type int var_18[6];
