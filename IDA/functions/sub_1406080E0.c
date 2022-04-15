//----- (00000001406080E0) ----------------------------------------------------
__int64 __fastcall sub_1406080E0(__int64* a1, unsigned int a2)
{
	__int64 v2; // rbx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	int* v7; // rax
	__int64* v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rcx
	int* v12; // rax
	_QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF
	int* v15; // [rsp+40h] [rbp+8h] BYREF
	int* v16; // [rsp+50h] [rbp+18h] BYREF

	v2 = a1[14];
	if (v2)
	{
		v5 = *(_QWORD**)(v2 + 432);
		if (v5)
			*v5 = *(_QWORD*)(v2 + 440);
		v6 = *(_QWORD*)(v2 + 440);
		if (v6)
			*(_QWORD*)(v6 + 432) = *(_QWORD*)(v2 + 432);
		*(_QWORD*)(v2 + 432) = 0i64;
		*(_QWORD*)(v2 + 440) = 0i64;
	}
	else
	{
		v7 = sub_14018B280(448i64, 0);
		if (v7)
			v2 = sub_140609470((__int64)v7, (__int64)a1, a1[10]);
		else
			v2 = 0i64;
	}
	v8 = a1 + 13;
	if (!*(_QWORD*)(v2 + 432))
	{
		*(_QWORD*)(v2 + 432) = v8;
		*(_QWORD*)(v2 + 440) = *v8;
		*v8 = v2;
		v9 = *(_QWORD*)(v2 + 440);
		if (v9)
			*(_QWORD*)(v9 + 432) = v2 + 440;
	}
	sub_140609670(v2, a2);
	v10 = a1[16];
	v11 = *(_QWORD*)(v10 + 8);
	v12 = (int*)v10;
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < a2)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v12 = (int*)v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v12 == (int*)v10 || a2 < v12[8])
	{
		LODWORD(v14[0]) = a2;
		v14[1] = 0i64;
		v15 = v12;
		sub_140055C60((__int64)(a1 + 15), &v16, (__int64*)&v15, v14);
		v12 = v16;
	}
	*((_QWORD*)v12 + 5) = v2;
	return v2;
}

