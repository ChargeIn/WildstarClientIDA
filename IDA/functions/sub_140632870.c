//----- (0000000140632870) ----------------------------------------------------
int** __fastcall sub_140632870(__int64 a1, int** a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v8; // rcx
	int* v9; // rax
	int* v10; // rbx
	__int64 v11; // rax
	int* v12; // rax
	int* v13; // r14
	void(__fastcall * **v14)(_QWORD); // rcx
	__int64 v15; // rax

	if (a4 == *(_QWORD*)(a1 + 8) || a3 || sub_140631710(a1, a5, a4 + 32))
	{
		v12 = sub_14018B280(56i64, 0);
		v10 = v12;
		v13 = v12 + 8;
		if (v12 != (int*)-32i64)
		{
			sub_14001AF60((__int64)(v12 + 8), a5);
			v14 = *(void(__fastcall****)(_QWORD))(a5 + 16);
			*((_QWORD*)v13 + 2) = v14;
			if (v14)
				(**v14)(v14);
		}
		*(_QWORD*)(a4 + 16) = v10;
		v15 = *(_QWORD*)(a1 + 8);
		if (a4 == v15)
		{
			*(_QWORD*)(v15 + 8) = v10;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v10;
		}
		else if (a4 == *(_QWORD*)(v15 + 16))
		{
			*(_QWORD*)(v15 + 16) = v10;
		}
	}
	else
	{
		v9 = sub_140633160(v8, a5);
		*(_QWORD*)(a4 + 24) = v9;
		v10 = v9;
		v11 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v11 + 24))
			*(_QWORD*)(v11 + 24) = v10;
	}
	*((_QWORD*)v10 + 1) = a4;
	*((_QWORD*)v10 + 2) = 0i64;
	*((_QWORD*)v10 + 3) = 0i64;
	sub_1400081C0((__int64)v10, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v10;
	return a2;
}
// 1406328AE: variable 'v8' is possibly undefined

