//----- (0000000140663840) ----------------------------------------------------
__int64 __fastcall sub_140663840(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	int v4; // edx
	int* v5; // rax
	__int64 v6; // r8
	unsigned __int16* v7; // rdi
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v10; // [rsp+30h] [rbp-28h] BYREF
	unsigned __int16* v11; // [rsp+38h] [rbp-20h]

	result = sub_140056AB0(a1, 1u);
	if (result)
	{
		v3 = *(_QWORD*)result;
		v4 = 0;
		if (*(_QWORD*)(*(_QWORD*)result + 144i64))
			v4 = **(_DWORD**)(v3 + 136);
		v5 = (int*)sub_1404835C0(qword_140C65918, v4);
		sub_14054F9E0((int*)&v10, *(_DWORD*)(*(_QWORD*)(v3 + 8) + 272i64), v6, 0i64, v5, 0i64);
		v7 = v11;
		v8 = (unsigned __int64*)sub_14018F0E0(&v10, v11)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			sub_140058710((__int64)a1, v8, v9);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v11)
			sub_14018B900((__int64)v11, 0);
		if (v7)
			sub_14018B900((__int64)v7, 0);
		return 1i64;
	}
	return result;
}
// 1406638AD: variable 'v6' is possibly undefined
// 140C65918: using guessed type __int64 qword_140C65918;

