//----- (00000001402D9770) ----------------------------------------------------
int* __fastcall sub_1402D9770(__int64 a1, __int64 a2, _DWORD* a3)
{
	_DWORD* v3; // r9
	int v7; // ebx
	int v8; // edi
	int v9; // esi
	int v10; // ebp
	int v11; // r14d
	int v12; // r15d
	int v13; // r12d
	int* result; // rax
	__int64 v15; // r9
	__int64 v16; // rcx
	__int64 v17; // rdi
	int* v18; // rsi
	char* v19; // rax
	char* v20; // rax
	__int64 v21; // rcx
	char* v22; // rbp

	v3 = *(_DWORD**)(a1 + 16);
	if (v3 == *(_DWORD**)(a1 + 24))
	{
		v15 = (__int64)v3 - *(_QWORD*)(a1 + 8);
		v16 = 2 * (v15 / 28);
		if (!(v15 / 28))
			v16 = 1i64;
		v17 = 7 * (sub_14018A3E0(28 * v16) / 0x1Cui64);
		v18 = sub_14018B280(v17 * 4, 0);
		v19 = sub_1402D9940(*(char**)(a1 + 8), (char*)a2, (char*)v18);
		if (v19)
		{
			*(_DWORD*)v19 = *a3;
			*((_DWORD*)v19 + 1) = a3[1];
			*((_DWORD*)v19 + 2) = a3[2];
			*((_DWORD*)v19 + 3) = a3[3];
			*((_DWORD*)v19 + 4) = a3[4];
			*((_DWORD*)v19 + 5) = a3[5];
			*((_DWORD*)v19 + 6) = a3[6];
		}
		v20 = sub_1402D9940((char*)a2, *(char**)(a1 + 16), v19 + 28);
		v21 = *(_QWORD*)(a1 + 8);
		v22 = v20;
		if (v21)
			sub_14018B900(v21, 0);
		result = &v18[v17];
		*(_QWORD*)(a1 + 8) = v18;
		*(_QWORD*)(a1 + 16) = v22;
		*(_QWORD*)(a1 + 24) = &v18[v17];
	}
	else
	{
		if (v3)
		{
			*v3 = *(v3 - 7);
			v3[1] = *(v3 - 6);
			v3[2] = *(v3 - 5);
			v3[3] = *(v3 - 4);
			v3[4] = *(v3 - 3);
			v3[5] = *(v3 - 2);
			v3[6] = *(v3 - 1);
		}
		*(_QWORD*)(a1 + 16) += 28i64;
		v7 = *a3;
		v8 = a3[1];
		v9 = a3[2];
		v10 = a3[3];
		v11 = a3[4];
		v12 = a3[5];
		v13 = a3[6];
		result = sub_1402D99A0(a2, *(_QWORD*)(a1 + 16) - 56i64, (_DWORD*)(*(_QWORD*)(a1 + 16) - 28i64));
		*(_DWORD*)a2 = v7;
		*(_DWORD*)(a2 + 4) = v8;
		*(_DWORD*)(a2 + 8) = v9;
		*(_DWORD*)(a2 + 12) = v10;
		*(_DWORD*)(a2 + 16) = v11;
		*(_DWORD*)(a2 + 20) = v12;
		*(_DWORD*)(a2 + 24) = v13;
	}
	return result;
}

