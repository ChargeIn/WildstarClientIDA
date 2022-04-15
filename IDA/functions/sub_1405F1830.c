//----- (00000001405F1830) ----------------------------------------------------
int** __fastcall sub_1405F1830(int* a1, int** a2, int a3, _DWORD* a4)
{
	int* v4; // rdi
	int* v9; // r14
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rax
	int v13; // ebp
	int* v14; // rax
	__int64 v15; // r12
	unsigned __int64 v16; // rbp
	int* v17; // rax
	unsigned __int64 v18; // r15
	__int64 v19; // rbx
	int* v20; // rax
	int* v21; // r14

	v4 = 0i64;
	v9 = 0i64;
	if (a4)
		*a4 = 0;
	v10 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)a1 + 328i64))(a1);
	v12 = sub_140487750(v11, *(_DWORD*)(v10 + 72), 1);
	if (!v12)
		goto LABEL_9;
	v13 = sub_140487E40(v12, a1[6], 0i64, 0, 0, 0, 0i64);
	if (!v13)
		goto LABEL_9;
	v14 = sub_14018DB00(0i64, 1ui64, 4i64);
	v9 = v14;
	*v14 = v13;
	if (a4)
		*a4 = 1;
	if (a3)
	{
		a2[1] = (int*)1;
		*a2 = v14;
	}
	else
	{
	LABEL_9:
		v15 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)a1 + 280i64))(a1);
		v16 = *(_QWORD*)(v15 + 8);
		if (v16)
		{
			v17 = sub_14018B280(4 * v16 + 16, 0);
			if (v17)
			{
				*((_QWORD*)v17 + 1) = v16;
				*(_QWORD*)v17 = off_140B55060;
			}
			else
			{
				v17 = 0i64;
			}
			v4 = v17 + 4;
		}
		v18 = v16;
		sub_1407DB590(v4, *(int**)v15, 4 * v16);
		if (v9)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
		if (*(_DWORD*)(*(_QWORD*)((*(__int64(__fastcall**)(int*))(*(_QWORD*)a1 + 320i64))(a1) + 8) + 16i64))
		{
			++v16;
			v19 = *(_QWORD*)((*(__int64(__fastcall**)(int*))(*(_QWORD*)a1 + 320i64))(a1) + 8);
			v20 = sub_14018DB00((__int64)v4, v16, 4i64);
			v20[v18] = *(_DWORD*)(v19 + 16);
			v21 = v20;
			if (v4 != v20)
			{
				sub_1407DB590(v20, v4, v18 * 4);
				if (v4)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
				v4 = v21;
			}
		}
		a2[1] = (int*)v16;
		*a2 = v4;
	}
	return a2;
}
// 1405F1879: variable 'v11' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

