//----- (00000001401395D0) ----------------------------------------------------
void __fastcall sub_1401395D0(__int64 a1, int* a2, int* a3, char a4, int a5, char a6, __int64 a7)
{
	int* v11; // rax
	__int64 v12; // rdx
	__int64 v13; // rsi
	__int64 v14; // rbx
	int* v15; // rax
	int* v16; // r14
	int* v17; // rdx
	__int64 v18; // rcx

	v11 = sub_14018B280(2584i64, 0);
	if (v11)
		v13 = sub_1401352F0((__int64)v11, *(_QWORD*)(a1 + 8), *(_DWORD*)(a1 + 72), a2, a3, a4, a5, a6, a7);
	else
		v13 = 0i64;
	if (*(_BYTE*)(v13 + 312))
	{
		v14 = *(_QWORD*)(a1 + 24);
		v15 = sub_14018DB00(*(_QWORD*)(a1 + 16), v14 + 1, 8i64);
		v16 = v15;
		*(_QWORD*)&v15[2 * v14] = v13;
		v17 = *(int**)(a1 + 16);
		if (v17 != v15)
		{
			sub_1407DB590(v15, v17, 8i64 * *(_QWORD*)(a1 + 24));
			v18 = *(_QWORD*)(a1 + 16);
			if (v18)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
			*(_QWORD*)(a1 + 16) = v16;
		}
		*(_QWORD*)(a1 + 24) = v14 + 1;
	}
	else
	{
		sub_1401356F0((_QWORD*)v13, v12);
		sub_14018B900(v13, 0);
	}
}
// 1401396BB: variable 'v12' is possibly undefined

