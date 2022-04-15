//----- (00000001402E9110) ----------------------------------------------------
__int64 __fastcall sub_1402E9110(__int64 a1, int** a2)
{
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // ebp
	int v8; // eax
	__int64 v9; // rcx
	unsigned __int64 v10; // r12
	unsigned __int64 v11; // r14
	int* v12; // rax
	int* v13; // rbx
	__int64 v14; // rax
	int* v15; // rax
	unsigned __int64 i; // rdi
	__int64 v17; // rsi
	unsigned __int64 j; // rdi
	void(__fastcall * **v19)(_QWORD); // rax
	__int64 v20; // [rsp+68h] [rbp+10h] BYREF
	__int64 v21; // [rsp+70h] [rbp+18h] BYREF

	if (!a2)
		return 2147942487i64;
	v5 = *(_QWORD*)(a1 + 32);
	if (!v5 || *(float*)(v5 + 96) < 0.5 || (*(_BYTE*)(v5 + 56) & 0x10) == 0)
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 144i64))(*(_QWORD*)(a1 + 24));
	v6 = *(_QWORD*)(a1 + 24);
	v7 = 0;
	v21 = 0i64;
	v20 = 0i64;
	v8 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v6 + 144i64))(v6, &v21);
	if (v8 >= 0)
	{
		v9 = *(_QWORD*)(a1 + 40);
		if (!v9 || (v8 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v9 + 144i64))(v9, &v20), v8 >= 0))
		{
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
			if (v20)
				v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 16i64))(v20);
			else
				v11 = 0i64;
			v12 = sub_14018B280(32i64, 1u);
			v13 = v12;
			if (v12)
			{
				*(_QWORD*)v12 = off_140B787C0;
				v12[6] = 1;
				*((_QWORD*)v12 + 1) = 0i64;
				*((_QWORD*)v12 + 2) = 0i64;
				v14 = 8 * (v11 + v10);
				if (!is_mul_ok(v11 + v10, 8ui64))
					v14 = -1i64;
				v15 = sub_14018B280(v14, 1u);
				*((_QWORD*)v13 + 2) = v15;
				if (v15)
				{
					for (i = 0i64; i < v10; ++i)
					{
						v17 = (*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v21 + 24i64))(v21, i);
						if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 200i64))(v17) & 2) == 0)
						{
							*(_QWORD*)(*((_QWORD*)v13 + 2) + 8i64 * (*((_QWORD*)v13 + 1))++) = v17;
							(**(void(__fastcall***)(__int64))v17)(v17);
						}
					}
					for (j = 0i64; j < v11; ++j)
					{
						v19 = (void(__fastcall***)(_QWORD))(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v20 + 24i64))(
							v20,
							j);
						if ((int)sub_1402E1790(
							*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64),
							*(_QWORD*)(a1 + 32),
							v19,
							(__int64*)(*((_QWORD*)v13 + 2) + 8i64 * *((_QWORD*)v13 + 1))) >= 0)
							++* ((_QWORD*)v13 + 1);
					}
					*a2 = v13;
					goto LABEL_19;
				}
				(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v13 + 32i64))(v13, 1i64);
			}
			v8 = -2147024882;
		}
	}
	v7 = v8;
LABEL_19:
	if (v20)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
	return v7;
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();

