//----- (000000014082C9D0) ----------------------------------------------------
__int64 __fastcall sub_14082C9D0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax
	_QWORD* v7; // rbx
	int v8; // ecx
	__int64 v9; // rax
	_DWORD* v10; // rax
	_DWORD* v11; // rcx
	int v12; // [rsp+20h] [rbp-49h] BYREF
	__int64 v13; // [rsp+28h] [rbp-41h]
	__int64 v14; // [rsp+30h] [rbp-39h]
	int* v15; // [rsp+38h] [rbp-31h]
	__int64 v16; // [rsp+40h] [rbp-29h]
	int v17; // [rsp+48h] [rbp-21h]
	_DWORD* v18; // [rsp+50h] [rbp-19h]
	int v19; // [rsp+58h] [rbp-11h]
	int v20; // [rsp+60h] [rbp-9h]
	int v21; // [rsp+A4h] [rbp+3Bh]
	__int64 v22; // [rsp+A8h] [rbp+3Fh]
	__int64 v23; // [rsp+B0h] [rbp+47h]
	int v24; // [rsp+B8h] [rbp+4Fh]
	char v25; // [rsp+BCh] [rbp+53h]
	char v26; // [rsp+BDh] [rbp+54h]
	char v27; // [rsp+BEh] [rbp+55h]
	int v28; // [rsp+E8h] [rbp+7Fh] BYREF
	int v29; // [rsp+ECh] [rbp+83h]

	result = sub_140830F00(qword_140C61BA8, a2, 0);
	v7 = (_QWORD*)result;
	if (result)
	{
		v8 = *(_DWORD*)(a4 + 24);
		v13 = result;
		v9 = *(_QWORD*)a4;
		v28 = 0;
		v29 = 4;
		v16 = v9;
		LODWORD(v9) = *(_DWORD*)(a4 + 8);
		v18 = 0i64;
		v17 = v9;
		v10 = *(_DWORD**)(a4 + 16);
		v21 = 0;
		v27 = 0;
		v25 = 0;
		v20 = 0;
		v12 = 0;
		v19 = v8;
		if (v10)
			++* v10;
		v18 = v10;
		v22 = 0i64;
		v23 = 0i64;
		v24 = 0;
		v26 = 1;
		v14 = a3;
		v15 = &v28;
		if ((unsigned int)sub_14084ED10(v7, (__int64)&v12) == 1)
			(*(void(__fastcall**)(_QWORD*, int*))(*v7 + 632i64))(v7, &v12);
		result = (*(__int64(__fastcall**)(_QWORD*))(*v7 + 16i64))(v7);
		if (v18)
			result = sub_140828460(v18);
	}
	v11 = *(_DWORD**)(a4 + 16);
	if (v11)
		return sub_140828460(v11);
	return result;
}

