//----- (0000000140502D90) ----------------------------------------------------
__int64 __fastcall sub_140502D90(_QWORD* a1)
{
	__int64 v2; // rdi
	unsigned int v3; // ebx
	__int64 v4; // r15
	__int64 v5; // rbp
	__int64 v6; // rcx
	unsigned __int64 v7; // r14
	_DWORD* v8; // rax
	int v9; // eax
	__int64 v10; // rcx
	int v11; // edi
	__int64* v12; // rbx
	__int64 v13; // rcx
	__int64* v14; // rbx
	__int64 v15; // rcx
	char v17[8]; // [rsp+30h] [rbp-1E8h] BYREF
	__int64 v18; // [rsp+38h] [rbp-1E0h]
	__int64 v19; // [rsp+40h] [rbp-1D8h]
	__int64 v20; // [rsp+48h] [rbp-1D0h]
	__int64 v21[50]; // [rsp+50h] [rbp-1C8h] BYREF
	char v22; // [rsp+1E8h] [rbp-30h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = 0;
		v18 = 0i64;
		v19 = 0i64;
		v20 = 0i64;
		sub_140503450((__int64)v21);
		sub_140503600((__int64)v21, *(_DWORD*)(v2 + 8), *(_DWORD*)(v2 + 12), *(_DWORD*)(v2 + 16), *(_DWORD*)(v2 + 20));
		sub_140505590((__int64)v21, (__int64)v17, 0i64);
		v4 = v19;
		v5 = v18;
		v6 = v19;
		*(_QWORD*)v2 = 0i64;
		v7 = (v6 - v5) / 88;
		if (v7)
		{
			do
			{
				v8 = sub_1400580E0((__int64)a1, v3 + 2);
				if (v8 == dword_140A12138)
					break;
				if ((int)v8[2] <= 0)
					break;
				v9 = sub_140056D60(a1, v3 + 2);
				if (v9 < 0)
					break;
				v10 = v3++;
				*(_QWORD*)v2 += *(_DWORD*)(88 * (v7 - v10) + v5 - 40) * v9;
			} while (v3 < v7);
		}
		v11 = 3;
		v21[0] = (__int64)off_140B6A420;
		v12 = (__int64*)&v22;
		do
		{
			v13 = *(v12 - 6);
			v12 -= 11;
			if (v13)
				sub_14018B900(v13, 0);
			if (*v12)
				sub_14018B900(*v12, 0);
			--v11;
		} while (v11 >= 0);
		if (v5 != v4)
		{
			v14 = (__int64*)(v5 + 24);
			do
			{
				v15 = v14[5];
				if (v15)
					sub_14018B900(v15, 0);
				if (*v14)
					sub_14018B900(*v14, 0);
				v14 += 11;
			} while (v14 - 3 != (__int64*)v4);
		}
		if (v5)
			sub_14018B900(v5, 0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B6A420: using guessed type __int64 (__fastcall *off_140B6A420[3])();
// 140502D90: using guessed type char var_1E8[8];

