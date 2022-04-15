//----- (00000001406636B0) ----------------------------------------------------
__int64 __fastcall sub_1406636B0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	int v4; // edx
	int* v5; // rax
	__int64 v6; // r8
	int* v7; // rsi
	int* v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rbx
	unsigned __int64 v11; // rbx
	unsigned __int64* v12; // rdx
	unsigned __int64 v13; // r8
	int v14; // [rsp+30h] [rbp-48h] BYREF
	__int64 v15; // [rsp+38h] [rbp-40h]
	__int64 v16; // [rsp+50h] [rbp-28h] BYREF
	__int64 v17; // [rsp+58h] [rbp-20h]

	result = sub_140056AB0(a1, 1u);
	if (result)
	{
		v3 = *(_QWORD*)result;
		v4 = 0;
		if (*(_QWORD*)(*(_QWORD*)result + 144i64))
			v4 = **(_DWORD**)(v3 + 136);
		v5 = (int*)sub_1404835C0(qword_140C65918, v4);
		v7 = 0i64;
		v8 = (int*)*((_QWORD*)sub_14054F9E0(&v14, *(_DWORD*)(*(_QWORD*)(v3 + 8) + 8i64), v6, 0i64, v5, 0i64) + 1);
		v9 = 0i64;
		if (*(_WORD*)v8)
		{
			do
				++v9;
			while (*((_WORD*)v8 + v9));
		}
		v10 = (2 * v9) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v7 = sub_14018B280(2 * (v10 + 1), 0);
		v11 = 2 * v10;
		sub_1407DB590(v7, v8, v11);
		if ((int*)((char*)v7 + v11))
			*(_WORD*)((char*)v7 + v11) = 0;
		if (v15)
			sub_14018B900(v15, 0);
		v12 = (unsigned __int64*)sub_14018F0E0(&v16, (unsigned __int16*)v7)[1];
		if (v12)
		{
			v13 = -1i64;
			do
				++v13;
			while (*((_BYTE*)v12 + v13));
			sub_140058710((__int64)a1, v12, v13);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v17)
			sub_14018B900(v17, 0);
		if (v7)
			sub_14018B900((__int64)v7, 0);
		return 1i64;
	}
	return result;
}
// 140663735: variable 'v6' is possibly undefined
// 140C65918: using guessed type __int64 qword_140C65918;

