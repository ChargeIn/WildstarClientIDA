//----- (000000014052A120) ----------------------------------------------------
void __fastcall sub_14052A120(__int64 a1)
{
	__int64 v2; // rcx
	_DWORD* v3; // rax
	unsigned int v4; // ebx
	__int64 v5; // rax
	int* v6; // r15
	unsigned __int64 v7; // rbp
	__int64 v8; // rax
	__int64 v9; // rsi
	int* v10; // r14
	int* v11; // rbx
	__int64 v12; // rax
	int* v13; // rcx

	v2 = *(_QWORD*)(a1 + 1152);
	if (v2)
	{
		v3 = (_DWORD*)(*(__int64 (**)(void))(*(_QWORD*)v2 + 88i64))();
		v4 = (v3[2] - *v3) * (v3[3] - v3[1]);
		v5 = 8i64 * v4;
		if (!is_mul_ok(v4, 8ui64))
			v5 = -1i64;
		v6 = sub_14018B280(v5, 0);
		v7 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD))(**(_QWORD**)(a1 + 1152) + 160i64))(
			*(_QWORD*)(a1 + 1152),
			v6,
			v4);
		if (v7)
		{
			v8 = 8 * v7;
			if (!is_mul_ok(v7, 8ui64))
				v8 = -1i64;
			v9 = 0i64;
			v10 = sub_14018B280(v8, 0);
			v11 = v6;
			do
			{
				v12 = (*(__int64(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 1152) + 96i64))(*(_QWORD*)(a1 + 1152), v11);
				if (v12 != -1 && !*(_BYTE*)(v12 + *(_QWORD*)(a1 + 1352)))
				{
					v13 = &v10[2 * v9];
					v9 = (unsigned int)(v9 + 1);
					*v13 = *v11;
					v13[1] = v11[1];
				}
				v11 += 2;
				--v7;
			} while (v7);
			sub_14052A270(a1, v10, (unsigned int)v9);
			sub_14018B900((__int64)v10, 0);
		}
		*(_DWORD*)(a1 + 1344) = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1152) + 152i64))(*(_QWORD*)(a1 + 1152));
		sub_14018B900((__int64)v6, 0);
	}
}
// 14052A1CA: conditional instruction was optimized away because rbp.8!=0

