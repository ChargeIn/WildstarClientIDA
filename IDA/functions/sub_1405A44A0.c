//----- (00000001405A44A0) ----------------------------------------------------
void __fastcall sub_1405A44A0(__int64 a1, __int64 a2, unsigned __int8(__fastcall* a3)(__int64, __int64))
{
	__int64 v5; // r13
	__int64 v6; // r14
	__int64 v7; // rax
	__int64* i; // r12
	__int64 v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rdi
	__int64 v12; // rdi
	__int64 k; // rbp
	_QWORD* v14; // rbx
	__int64 v15; // rdi
	__int64 v16; // rdi
	__int64 v17; // [rsp+20h] [rbp-38h] BYREF
	__int64 j; // [rsp+28h] [rbp-30h]
	__int64 v19; // [rsp+78h] [rbp+20h]

	v5 = (a2 - a1) >> 4;
	if (v5 >= 2)
	{
		v6 = (v5 - 2) / 2;
		v7 = 2 * v6 + 2;
		for (i = (__int64*)(a1 + 16 * v6); ; i -= 2)
		{
			v19 = v7;
			v9 = v6;
			v17 = *i;
			v10 = v7;
			for (j = i[1]; v10 < v5; v10 = 2 * v10 + 2)
			{
				if (a3(a1 + 16 * v10, a1 + 16 * v10 - 16))
					--v10;
				v11 = 2 * v9;
				*(_QWORD*)(a1 + 8 * v11) = *(_QWORD*)(a1 + 16 * v10);
				*(_QWORD*)(a1 + 8 * v11 + 8) = *(_QWORD*)(a1 + 16 * v10 + 8);
				v9 = v10;
			}
			if (v10 == v5)
			{
				v12 = 2 * v9;
				*(_QWORD*)(a1 + 8 * v12) = *(_QWORD*)(a1 + 16 * v10 - 16);
				*(_QWORD*)(a1 + 8 * v12 + 8) = *(_QWORD*)(a1 + 16 * v10 - 8);
				v9 = v10 - 1;
			}
			for (k = (v9 - 1) / 2; v9 > v6; k = (k - 1) / 2)
			{
				v14 = (_QWORD*)(a1 + 16 * k);
				if (!a3((__int64)v14, (__int64)&v17))
					break;
				v15 = 2 * v9;
				*(_QWORD*)(a1 + 8 * v15) = *v14;
				*(_QWORD*)(a1 + 8 * v15 + 8) = v14[1];
				v9 = k;
			}
			v16 = 2 * v9;
			*(_QWORD*)(a1 + 8 * v16) = v17;
			*(_QWORD*)(a1 + 8 * v16 + 8) = j;
			if (!v6)
				break;
			--v6;
			v7 = v19 - 2;
		}
	}
}

