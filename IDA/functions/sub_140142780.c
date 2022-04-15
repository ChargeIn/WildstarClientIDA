//----- (0000000140142780) ----------------------------------------------------
char __fastcall sub_140142780(__int64 a1, unsigned __int16* a2, _OWORD* a3, unsigned int* a4)
{
	unsigned int* v4; // r15
	_QWORD* v8; // r14
	_QWORD* v9; // rdi
	_QWORD* v10; // rbx
	unsigned int v11; // ebx
	__int64 v12; // rdx
	unsigned int v13; // ecx
	__int64 v14; // r15
	unsigned int v15; // ebx
	__int64 v16; // rcx
	unsigned __int16** v17; // r12
	unsigned __int64 v18; // rbx
	int* v19; // rax
	unsigned __int16* v20; // rdi
	unsigned __int64 v21; // rbx
	unsigned int v22; // ecx
	_QWORD* v24; // [rsp+68h] [rbp+10h]

	v4 = a4;
	if (!a2 || !*a2)
		return 0;
	v8 = *(_QWORD**)(a1 + 96);
	v9 = v8;
	v10 = (_QWORD*)v8[1];
	while (v10)
	{
		if ((int)sub_14018E2C0(v10[4], a2) < 0)
		{
			v10 = (_QWORD*)v10[3];
		}
		else
		{
			v9 = v10;
			v10 = (_QWORD*)v10[2];
		}
	}
	if (v9 == v8 || (v24 = v9, (int)sub_14018E2C0((__int64)a2, (unsigned __int16*)v9[4]) < 0))
		v24 = v8;
	if (v24 == v8)
	{
		v11 = *(_DWORD*)(a1 + 48);
		if (*(_DWORD*)(a1 + 56) < v11)
		{
			v12 = *(_QWORD*)(a1 + 40);
			do
			{
				v13 = *(_DWORD*)(a1 + 56);
				if (!*(_DWORD*)(32i64 * v13 + v12 + 16))
					break;
				*(_DWORD*)(a1 + 56) = v13 + 1;
			} while (v13 + 1 < v11);
		}
		v14 = *(unsigned int*)(a1 + 56);
		if ((unsigned int)v14 < v11)
		{
			*(_DWORD*)(a1 + 56) = v14 + 1;
		}
		else
		{
			v15 = v11 + 1;
			sub_1401448A0((__int64*)(a1 + 40), v15);
			*(_DWORD*)(a1 + 56) = v15;
		}
		v16 = 32 * v14;
		*(_OWORD*)(v16 + *(_QWORD*)(a1 + 40)) = *a3;
		*(_DWORD*)(v16 + *(_QWORD*)(a1 + 40) + 16) = 1;
		sub_14004EED0((__int64*)(a1 + 72), *(_QWORD*)(a1 + 80) + 1i64);
		v17 = (unsigned __int16**)sub_14018B280(8i64, 0);
		if (v17)
		{
			v18 = 0i64;
			if (*a2)
			{
				do
					++v18;
				while (a2[v18]);
			}
			v19 = sub_14018B280(2 * v18 + 18, 0);
			if (v19)
			{
				*((_QWORD*)v19 + 1) = v18;
				*(_QWORD*)v19 = off_140B55060;
			}
			else
			{
				v19 = 0i64;
			}
			v20 = (unsigned __int16*)(v19 + 4);
			v21 = v18;
			sub_1407DB590(v19 + 4, (int*)a2, v21 * 2);
			v20[v21] = 0;
			*v17 = v20;
		}
		else
		{
			v17 = 0i64;
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 72) + 8i64 * *(_QWORD*)(a1 + 80) - 8) = v17;
		sub_1401424B0(a1, *v17, v14);
		v22 = (unsigned int)v24;
		v4 = a4;
	}
	else
	{
		v22 = *((_DWORD*)v24 + 10);
		*(_OWORD*)(*(_QWORD*)(a1 + 40) + 32i64 * v22) = *a3;
	}
	if (v4)
		*v4 = v22;
	return 1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

