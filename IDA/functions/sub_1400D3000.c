//----- (00000001400D3000) ----------------------------------------------------
__int64 __fastcall sub_1400D3000(__int64 a1, unsigned __int8* a2)
{
	int* v4; // rax
	int v5; // r8d
	__int64 v6; // rdx
	__int64 v7; // rbx
	__int64 v8; // rcx
	bool v9; // zf
	__int64* v10; // rcx
	int* v11; // rdi
	int* v12; // rax
	__int64 v13; // r10
	unsigned int v14; // edx
	__int64 v15; // r8
	int* v16; // rax
	__int64 v17; // rcx
	_QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF
	int* v20; // [rsp+50h] [rbp+8h] BYREF
	int* v21; // [rsp+58h] [rbp+10h] BYREF

	v4 = sub_14018B280(224i64, 0);
	if (v4)
	{
		v5 = *(_DWORD*)(a1 + 352);
		v6 = *(_QWORD*)(a1 + 32);
		*(_DWORD*)(a1 + 352) = v5 + 1;
		v7 = sub_14014FEA0((__int64)v4, v6, v5, (__int64)a2);
	}
	else
	{
		v7 = 0i64;
	}
	if (!*(_QWORD*)(v7 + 200))
	{
		v8 = *a2 + 40i64;
		v9 = *(_QWORD*)(a1 + 8 * v8) == 0i64;
		v10 = (__int64*)(a1 + 8 * v8);
		if (!v9)
		{
			do
				v10 = (__int64*)(*v10 + 208);
			while (*v10);
		}
		*(_QWORD*)(v7 + 200) = v10;
		*(_QWORD*)(v7 + 208) = 0i64;
		*v10 = v7;
	}
	if (!*(_QWORD*)(a1 + 344))
	{
		v11 = sub_14018B280(32i64, 0);
		if (v11)
		{
			v12 = sub_14018B280(48i64, 0);
			*((_QWORD*)v11 + 2) = 0i64;
			*((_QWORD*)v11 + 1) = v12;
			*(_BYTE*)v12 = 0;
			*(_QWORD*)(*((_QWORD*)v11 + 1) + 8i64) = 0i64;
			*(_QWORD*)(*((_QWORD*)v11 + 1) + 16i64) = *((_QWORD*)v11 + 1);
			*(_QWORD*)(*((_QWORD*)v11 + 1) + 24i64) = *((_QWORD*)v11 + 1);
		}
		else
		{
			v11 = 0i64;
		}
		*(_QWORD*)(a1 + 344) = v11;
	}
	v13 = *(_QWORD*)(a1 + 344);
	v14 = *(_DWORD*)(v7 + 4);
	v15 = *(_QWORD*)(v13 + 8);
	v16 = (int*)v15;
	v17 = *(_QWORD*)(v15 + 8);
	while (v17)
	{
		if (*(_DWORD*)(v17 + 32) < v14)
		{
			v17 = *(_QWORD*)(v17 + 24);
		}
		else
		{
			v16 = (int*)v17;
			v17 = *(_QWORD*)(v17 + 16);
		}
	}
	if (v16 == (int*)v15 || v14 < v16[8])
	{
		LODWORD(v19[0]) = *(_DWORD*)(v7 + 4);
		v19[1] = 0i64;
		v20 = v16;
		sub_140055C60(v13, &v21, (__int64*)&v20, v19);
		v16 = v21;
	}
	*((_QWORD*)v16 + 5) = v7;
	return *(unsigned int*)(v7 + 4);
}

