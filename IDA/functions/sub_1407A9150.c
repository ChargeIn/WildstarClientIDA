//----- (00000001407A9150) ----------------------------------------------------
void __fastcall sub_1407A9150(_DWORD* a1, unsigned int a2, __int64 a3, unsigned int a4)
{
	unsigned int* v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rsi
	unsigned int v7; // edi
	__int64 v9; // r13
	int v10; // eax
	unsigned int i; // r12d
	_DWORD* v12; // rax
	__int64 v13; // rbp
	_DWORD* v14; // rsi
	_DWORD* v15; // r15
	int v16; // edx
	__int64 v17; // rcx
	_QWORD* v18; // rdx
	__int64 v19; // rdx
	__int64 v20; // rcx
	_QWORD* v21; // rdx
	__int64 v22; // rdx
	unsigned int v23; // eax
	int* v24; // rax
	int* v25; // r9
	int v26; // r8d
	int v27; // edx
	__int64 v28; // rdx
	int** v29; // rdx
	__int64 v30; // rax
	unsigned int v31; // eax
	unsigned int v32; // eax
	unsigned int* v33; // [rsp+20h] [rbp-48h]
	__int64 v34; // [rsp+28h] [rbp-40h]
	int v35; // [rsp+78h] [rbp+10h]
	__int64 v36; // [rsp+80h] [rbp+18h]

	if (!a2)
		return;
	v36 = a3;
	v4 = (unsigned int*)(a3 + 156);
	v5 = a3;
	v6 = a2;
	v7 = a4;
	v9 = -156 - a3;
	v33 = (unsigned int*)(a3 + 156);
	v34 = a2;
	do
	{
		v10 = sub_1407A8250((__int64)a1, v5, v7);
		v35 = v10;
		if (v10 < 0)
			goto LABEL_61;
		for (i = 0; i < 8; ++i)
		{
			v12 = (_DWORD*)(*(__int64(__fastcall**)(_DWORD*, _QWORD, _QWORD))(*(_QWORD*)a1 + 328i64))(
				a1,
				(unsigned int)v10,
				v7);
			v13 = (unsigned int)v12[38];
			v14 = (unsigned int*)((char*)v4 + v9 + (_QWORD)v12);
			v15 = v12;
			v16 = v14[39];
			if (v16 && (v16 != *v4 || v14[41] != v4[2] || v14[40] != v4[1]))
			{
				if (v16 == 1)
				{
					v17 = *(_QWORD*)&a1[32 * v14[41] + 40 + 4 * (unsigned int)v14[40] + 2 * v13];
					if (v17)
					{
						while (**(_DWORD**)v17 != *v12 || (*(_DWORD*)(v17 + 16) & v4[4]) != *(_DWORD*)(v17 + 12))
						{
							v17 = *(_QWORD*)(v17 + 32);
							if (!v17)
								goto LABEL_20;
						}
						v18 = *(_QWORD**)(v17 + 24);
						if (v18)
							*v18 = *(_QWORD*)(v17 + 32);
						v19 = *(_QWORD*)(v17 + 32);
						if (v19)
							*(_QWORD*)(v19 + 24) = *(_QWORD*)(v17 + 24);
						*(_QWORD*)(v17 + 24) = 0i64;
						*(_QWORD*)(v17 + 32) = 0i64;
						sub_14018B900(v17, 0);
					}
				}
			LABEL_20:
				if (v14[39] == 2)
				{
					v20 = *(_QWORD*)&a1[32 * v14[41] + 16424 + 4 * (unsigned int)v14[40] + 2 * v13];
					if (v20)
					{
						while (**(_DWORD**)v20 != *v15 || (*(_DWORD*)(v20 + 16) & v4[4]) != *(_DWORD*)(v20 + 12))
						{
							v20 = *(_QWORD*)(v20 + 32);
							if (!v20)
								goto LABEL_31;
						}
						v21 = *(_QWORD**)(v20 + 24);
						if (v21)
							*v21 = *(_QWORD*)(v20 + 32);
						v22 = *(_QWORD*)(v20 + 32);
						if (v22)
							*(_QWORD*)(v22 + 24) = *(_QWORD*)(v20 + 24);
						*(_QWORD*)(v20 + 24) = 0i64;
						*(_QWORD*)(v20 + 32) = 0i64;
						sub_14018B900(v20, 0);
					}
				}
			}
		LABEL_31:
			v14[39] = *v4;
			v14[41] = v4[2];
			v14[40] = v4[1];
			if (v15[33] == 1)
				v23 = v4[3];
			else
				v23 = (*(__int64(__fastcall**)(_DWORD*, _DWORD*, _QWORD))(*(_QWORD*)a1 + 152i64))(a1, v15, *v4);
			*(_DWORD*)((char*)v15 + (_QWORD)v4 + v9 + 168) = v23;
			v14[43] = v4[4] & v4[5];
			v14[44] = v4[5];
			if (*v4 - 1 <= 1)
			{
				v24 = sub_14018B280(40i64, 0);
				v25 = v24;
				if (v24)
				{
					v26 = v14[44];
					v27 = v14[43];
					v24[2] = *(_DWORD*)((char*)v15 + (_QWORD)v4 + v9 + 168);
					v24[3] = v27;
					v24[4] = v26;
					*(_QWORD*)v24 = v15;
					*((_QWORD*)v24 + 3) = 0i64;
					*((_QWORD*)v24 + 4) = 0i64;
				}
				else
				{
					v25 = 0i64;
				}
				if (*v4 == 1)
				{
					v28 = 8i64 * v4[2] + 10;
				}
				else
				{
					if (*v4 != 2)
						goto LABEL_45;
					v28 = 8i64 * v4[2] + 4106;
				}
				v29 = (int**)&a1[4 * v4[1] + 4 * v28 + 2 * v13];
				if (!*((_QWORD*)v25 + 3))
				{
					*((_QWORD*)v25 + 3) = v29;
					*((_QWORD*)v25 + 4) = *v29;
					*v29 = v25;
					v30 = *((_QWORD*)v25 + 4);
					if (v30)
						*(_QWORD*)(v30 + 24) = v25 + 8;
				}
			}
		LABEL_45:
			if (*v15 == 33)
			{
				if (!i)
					a1[25] = 7;
				if (*v4 == 1)
				{
					v31 = v4[2];
					if (v31 > 0x38)
					{
						v32 = v31 - 285;
						if (v32)
						{
							if (v32 != 27)
								goto LABEL_59;
						LABEL_57:
							a1[25] &= ~4u;
							goto LABEL_59;
						}
					LABEL_58:
						a1[25] &= ~2u;
						goto LABEL_59;
					}
					switch (v31)
					{
					case 0x38u:
						goto LABEL_57;
					case 0x1Du:
						goto LABEL_58;
					case 0x2Au:
					case 0x36u:
						a1[25] &= ~1u;
						break;
					}
				}
			}
		LABEL_59:
			v10 = v35;
			v7 = a4;
			v4 += 7;
		}
		v4 = v33;
		v6 = v34;
	LABEL_61:
		v4 += 95;
		v9 -= 380i64;
		v5 = v36 + 380;
		--v6;
		v33 = v4;
		v34 = v6;
		v36 += 380i64;
	} while (v6);
}

