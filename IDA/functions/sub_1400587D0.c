//----- (00000001400587D0) ----------------------------------------------------
__int64 __fastcall sub_1400587D0(_QWORD* a1, __int64 a2, int a3)
{
	__int64 v3; // rdi
	__int64 v6; // rax
	__int64 v7; // r8
	_QWORD* v8; // rax
	_QWORD* v9; // r9
	_QWORD* v10; // rdx
	__int64 v11; // rcx
	__int64 result; // rax

	v3 = a3;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v6 = a1[5];
	if (v6 == a1[10])
		v7 = a1[15];
	else
		v7 = *(_QWORD*)(**(_QWORD**)(v6 + 8) + 24i64);
	v8 = sub_140060AB0((__int64)a1, v3, v7);
	v9 = v8;
	v8[4] = a2;
	a1[2] -= 16 * v3;
	if ((_DWORD)v3)
	{
		v10 = &v8[2 * v3 + 5];
		do
		{
			v10 -= 2;
			v11 = -40i64 - (_QWORD)v8 + a1[2];
			*v10 = *(_QWORD*)((char*)v10 + v11);
			*((_DWORD*)v10 + 2) = *(_DWORD*)((char*)v10 + v11 + 8);
			LODWORD(v3) = v3 - 1;
		} while ((_DWORD)v3);
	}
	result = a1[2];
	*(_QWORD*)result = v9;
	*(_DWORD*)(result + 8) = 6;
	a1[2] += 16i64;
	return result;
}

