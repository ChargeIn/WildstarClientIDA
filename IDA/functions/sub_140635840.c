//----- (0000000140635840) ----------------------------------------------------
_QWORD* __fastcall sub_140635840(_QWORD* a1)
{
	int v1; // edi
	int** v3; // rbx
	int v4; // ebp
	int* v5; // rax
	int* v6; // rax
	int v7; // ecx
	_QWORD* v8; // rax
	int v9; // edx
	_DWORD* v10; // rax
	__int64 v11; // rcx

	v1 = 6;
	v3 = (int**)(a1 + 1);
	v4 = 6;
	do
	{
		v5 = sub_14018B280(48i64, 0);
		--v4;
		v3[1] = 0i64;
		*v3 = v5;
		*(_BYTE*)v5 = 0;
		*((_QWORD*)*v3 + 1) = 0i64;
		v6 = *v3;
		v3 += 4;
		*((_QWORD*)v6 + 2) = v6;
		*((_QWORD*)*(v3 - 4) + 3) = *(v3 - 4);
	} while (v4 >= 0);
	sub_1400522F0(a1 + 35);
	v7 = dword_140C636A8;
	a1[41] = 0i64;
	a1[40] = 0i64;
	v8 = a1 + 43;
	do
	{
		--v1;
		*(_QWORD*)((char*)v8 - 4) = 0i64;
		*((_DWORD*)v8 + 1) = 1;
		*((_DWORD*)v8 - 2) = v7;
		*((_DWORD*)v8 + 2) = 1;
		v8 = (_QWORD*)((char*)v8 + 20);
	} while (v1 >= 0);
	v9 = v7 - 1000;
	v10 = a1 + 43;
	v11 = 7i64;
	do
	{
		*(v10 - 1) = 0;
		*v10 = 1000;
		v10[1] = 1;
		*(v10 - 2) = v9;
		v10[2] = 1000;
		v10 += 5;
		--v11;
	} while (v11);
	return a1;
}
// 140C636A8: using guessed type int dword_140C636A8;

