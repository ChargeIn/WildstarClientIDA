//----- (00000001404DD8F0) ----------------------------------------------------
void __fastcall sub_1404DD8F0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
	int* v7; // rax
	unsigned __int64 v8; // r8
	_QWORD* v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // rdx
	int v13; // edi
	__int64* v14; // rbx
	__int64 v15; // rcx
	char v16[8]; // [rsp+30h] [rbp-1F8h] BYREF
	int* v17; // [rsp+38h] [rbp-1F0h]
	int* v18; // [rsp+40h] [rbp-1E8h]
	int* v19; // [rsp+48h] [rbp-1E0h]
	__int64 v20; // [rsp+50h] [rbp-1D8h] BYREF
	__int64 v21; // [rsp+58h] [rbp-1D0h]
	__int64 v22[50]; // [rsp+70h] [rbp-1B8h] BYREF
	char v23; // [rsp+208h] [rbp-20h] BYREF

	sub_140503450((__int64)v22);
	sub_140503600((__int64)v22, *(_DWORD*)(a2 + 8), *(_DWORD*)(a2 + 12), *(_DWORD*)(a2 + 16), *(_DWORD*)(a2 + 20));
	v7 = sub_14018B280(16i64, 0);
	v17 = v7;
	v18 = v7;
	v19 = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	v8 = *(_QWORD*)a2;
	if (a4)
	{
		v9 = sub_1405043E0((__int64)v22, &v20, v8, 1);
		v10 = (__int64)v17;
		v17 = (int*)v9[1];
		v9[1] = v10;
		v11 = (__int64)v18;
		v18 = (int*)v9[2];
		v9[2] = v11;
		v12 = (__int64)v19;
		v19 = (int*)v9[3];
		v9[3] = v12;
		if (v21)
			sub_14018B900(v21, 0);
	}
	else
	{
		sub_140505290((__int64)v22, (__int64)v16, v8, 1);
	}
	(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)a1 + 88i64))(a1, v16);
	if (v17)
		sub_14018B900((__int64)v17, 0);
	v13 = 3;
	v14 = (__int64*)&v23;
	v22[0] = (__int64)off_140B6A420;
	do
	{
		v15 = *(v14 - 6);
		v14 -= 11;
		if (v15)
			sub_14018B900(v15, 0);
		if (*v14)
			sub_14018B900(*v14, 0);
		--v13;
	} while (v13 >= 0);
}
// 140B6A420: using guessed type __int64 (__fastcall *off_140B6A420[3])();
// 1404DD8F0: using guessed type char var_1F8[8];

