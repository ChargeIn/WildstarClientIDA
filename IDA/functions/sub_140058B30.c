//----- (0000000140058B30) ----------------------------------------------------
__int64 __fastcall sub_140058B30(__int64 a1, int a2)
{
	__int64* v3; // rax
	__int64 v4; // rdi
	__int64* v5; // rsi
	int v6; // r10d
	_DWORD* v7; // rax
	int v8; // r10d
	__int64 v9; // r11
	__int64 result; // rax
	__int64 v11; // rdx
	__int64 v12; // rcx
	double v13; // [rsp+20h] [rbp-18h] BYREF
	int v14; // [rsp+28h] [rbp-10h]

	v3 = (__int64*)sub_1400580E0(a1, a2);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = v3;
	v7 = sub_14005C3C0(*v3, v6);
	if (v7 == dword_140A12138)
	{
		v14 = 3;
		v13 = (double)v8;
		v7 = sub_14005C260(a1, v9, (int*)&v13);
	}
	*(_QWORD*)v7 = *(_QWORD*)(v4 - 16);
	v7[2] = *(_DWORD*)(v4 - 8);
	result = *(_QWORD*)(a1 + 16);
	if (*(int*)(result - 8) >= 4)
	{
		result = *(_QWORD*)(result - 16);
		if ((*(_BYTE*)(result + 9) & 3) != 0)
		{
			v11 = *v5;
			if ((*(_BYTE*)(*v5 + 9) & 4) != 0)
			{
				v12 = *(_QWORD*)(a1 + 32);
				*(_BYTE*)(v11 + 9) &= ~4u;
				result = *(_QWORD*)(v12 + 64);
				*(_QWORD*)(v11 + 48) = result;
				*(_QWORD*)(v12 + 64) = v11;
			}
		}
	}
	*(_QWORD*)(a1 + 16) -= 16i64;
	return result;
}
// 140058B5A: variable 'v6' is possibly undefined
// 140058B87: variable 'v8' is possibly undefined
// 140058B8D: variable 'v9' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

