//----- (000000014053DA80) ----------------------------------------------------
unsigned __int8 __fastcall sub_14053DA80(__int64 a1, __int64 a2, int a3)
{
	unsigned __int64 v3; // r13
	__int64 v4; // rsi
	unsigned __int64 v5; // rbp
	__int64 v6; // r15
	__int64 v7; // r14
	int* v8; // rdi
	__int64 v9; // r12
	__int64 v10; // rcx
	int* v11; // rax
	const void*** v12; // rbx
	__int64 v13; // r8
	__int64 v14; // rcx
	unsigned int* v15; // rdx
	unsigned int v16; // ebx
	int v17; // edi
	int v18; // esi
	int v19; // ebp
	int v20; // r14d
	int v21; // r15d
	int v22; // r12d
	int* v23; // rax
	__int64 v24; // rcx
	unsigned __int64 v25; // rax
	unsigned __int8 result; // al
	__int64 v27; // r8
	__int64 v28; // rdx
	int v29; // ebx
	int v30; // esi
	int v31; // ebp
	int v32; // r14d
	int v33; // r15d
	int v34; // r12d
	int v35; // r13d
	int v36; // edi
	int* v37; // rax
	__int64 v38; // [rsp+20h] [rbp-58h]
	__int64 v39; // [rsp+80h] [rbp+8h] BYREF
	__int64 v40; // [rsp+88h] [rbp+10h]
	unsigned __int8 v41; // [rsp+90h] [rbp+18h]
	__int64 v42; // [rsp+98h] [rbp+20h]

	v40 = a2;
	v39 = a1;
	v3 = 0i64;
	*(_DWORD*)(a1 + 336) = a3;
	v4 = a2;
	v5 = 0i64;
	v6 = a1;
	if (*(_DWORD*)(a2 + 20))
	{
		v7 = 0i64;
		do
		{
			v8 = (int*)(v7 + *(_QWORD*)(v4 + 24));
			v9 = sub_1403D90D0(qword_140C65898, *v8);
			if (v9)
			{
				v10 = *(_QWORD*)(v6 + 72);
				if (v10)
				{
					while (*(_DWORD*)(v10 + 64) != *v8)
					{
						v10 = *(_QWORD*)(v10 + 40);
						if (!v10)
							goto LABEL_7;
					}
				}
				else
				{
				LABEL_7:
					v11 = sub_14018B280(104i64, 0);
					v12 = (const void***)v11;
					if (v11)
					{
						*(_QWORD*)v11 = 0i64;
						*((_QWORD*)v11 + 1) = 0i64;
						*((_QWORD*)v11 + 2) = 0i64;
						*((_QWORD*)v11 + 3) = 0i64;
						*((_QWORD*)v11 + 4) = 0i64;
						*((_QWORD*)v11 + 5) = 0i64;
						*((_QWORD*)v11 + 7) = 0i64;
						v11[16] = 0;
						v11[17] = -1;
						v11[18] = 0;
						v11[19] = -1;
						v11[20] = 0;
						v11[22] = 8;
						*((_QWORD*)v11 + 12) = 0i64;
					}
					else
					{
						v12 = 0i64;
					}
					if ((int)sub_140717990((__int64)v12, (__int64)v8, v9, (_DWORD*)v6) < 0 && v12)
					{
						sub_1407177B0(v12);
						sub_14018B900((__int64)v12, 0);
					}
				}
			}
			++v5;
			v7 += 24i64;
		} while (v5 < *(unsigned int*)(v4 + 20));
	}
	if (*(_BYTE*)(v4 + 32))
	{
		v13 = v6 + 848;
		v14 = 0i64;
		v38 = v6 + 848;
		v42 = 0i64;
		do
		{
			v15 = (unsigned int*)(v14 + *(_QWORD*)(v4 + 40));
			v16 = *v15;
			v17 = v15[1];
			v18 = v15[2];
			v19 = v15[3];
			v20 = v15[4];
			v21 = v15[5];
			v22 = v15[6];
			v23 = sub_14054DD00(v13, v15);
			v24 = v42;
			v13 = v38;
			*v23 = v16;
			v23[1] = v17;
			v23[2] = v18;
			v4 = v40;
			v23[3] = v19;
			v23[4] = v20;
			v23[5] = v21;
			v14 = v24 + 28;
			v23[6] = v22;
			v25 = *(unsigned __int8*)(v4 + 32);
			++v3;
			v42 = v14;
		} while (v3 < v25);
		v6 = v39;
	}
	result = 0;
	v41 = 0;
	if (*(_BYTE*)(v4 + 48))
	{
		v27 = v6 + 880;
		v42 = v6 + 880;
		do
		{
			v28 = *(_QWORD*)(v4 + 56) + 32i64 * result;
			v30 = *(_DWORD*)(v28 + 8);
			v31 = *(_DWORD*)(v28 + 12);
			v32 = *(_DWORD*)(v28 + 16);
			v33 = *(_DWORD*)(v28 + 20);
			v34 = *(_DWORD*)(v28 + 24);
			v35 = *(_DWORD*)(v28 + 28);
			v39 = *(_QWORD*)v28;
			v29 = v39;
			v36 = HIDWORD(v39);
			v37 = sub_14054DDC0(v27, (unsigned int*)&v39);
			v27 = v42;
			*v37 = v29;
			v37[1] = v36;
			v37[2] = v30;
			v4 = v40;
			v37[3] = v31;
			v37[4] = v32;
			v37[5] = v33;
			v37[6] = v34;
			v37[7] = v35;
			result = v41 + 1;
			v41 = result;
		} while (result < *(_BYTE*)(v4 + 48));
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

