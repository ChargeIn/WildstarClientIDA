//----- (0000000140631010) ----------------------------------------------------
__int64 __fastcall sub_140631010(__int64 a1, unsigned int a2, int* a3, __int64 a4)
{
	__int64 v4; // r13
	__int64 v5; // rsi
	__int64 v9; // rdi
	int* v10; // rax
	int* v11; // rbx
	unsigned __int64 v12; // rdi
	__int64 v13; // rdi
	int* v14; // rax
	__int64 v15; // r14
	unsigned __int64 v16; // rdi
	__int64 v17; // rax
	int* v18; // rax
	int* v19; // rbx
	__int64 v20; // rcx
	unsigned int v22; // [rsp+20h] [rbp-58h] BYREF
	__int64 v23; // [rsp+28h] [rbp-50h]
	__int64 v24; // [rsp+30h] [rbp-48h] BYREF
	__int64 v25; // [rsp+38h] [rbp-40h]
	int* v26; // [rsp+40h] [rbp-38h]
	__int64 v27; // [rsp+80h] [rbp+8h] BYREF

	v27 = a1;
	v4 = qword_140C65C18;
	v5 = 0i64;
	if (a3)
	{
		v9 = 0i64;
		if (*(_WORD*)a3)
		{
			do
				++v9;
			while (*((_WORD*)a3 + v9));
		}
		v10 = sub_14018B280(2 * v9 + 18, 0);
		if (v10)
		{
			*(_QWORD*)v10 = off_140B55060;
			*((_QWORD*)v10 + 1) = v9;
		}
		else
		{
			v10 = 0i64;
		}
		v11 = v10 + 4;
		v12 = 2 * v9;
		sub_1407DB590(v10 + 4, a3, v12);
		*(_WORD*)((char*)v11 + v12) = 0;
	}
	else
	{
		v11 = 0i64;
	}
	v22 = a2;
	if (v11)
	{
		v13 = *((_QWORD*)v11 - 1);
		v14 = sub_14018B280(2 * v13 + 18, 0);
		if (v14)
		{
			*(_QWORD*)v14 = off_140B55060;
			*((_QWORD*)v14 + 1) = v13;
		}
		else
		{
			v14 = 0i64;
		}
		v15 = (__int64)(v14 + 4);
		v16 = 2 * v13;
		sub_1407DB590(v14 + 4, v11, v16);
		*(_WORD*)(v16 + v15) = 0;
		v17 = *((_QWORD*)v11 - 2);
		v23 = v15;
		(*(void(__fastcall**)(int*))(v17 + 8))(v11 - 4);
	}
	else
	{
		v15 = 0i64;
		v23 = 0i64;
	}
	sub_140631E70(v4 + 40, &v27, (int*)&v22);
	if (v27 == *(_QWORD*)(v4 + 48))
	{
		v18 = sub_14018B280(56i64, 0);
		if (v18)
			v5 = sub_14062FB50((__int64)v18, a2, a3, a4);
		v19 = sub_140631430(v4 + 40, (__int64)&v22);
		v20 = *(_QWORD*)v19;
		if (*(_QWORD*)v19 != v5)
		{
			if (v20)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
			*(_QWORD*)v19 = v5;
		}
		v24 = a2;
		v26 = a3;
		v25 = a4;
		sub_1403F4740(qword_140C65898, 0x546u, (__int64)&v24);
		v15 = v23;
	}
	else
	{
		v5 = *(_QWORD*)(v27 + 48);
		if (*(_QWORD*)(v5 + 32) != a4)
		{
			v24 = a2;
			v26 = a3;
			v25 = a4;
			sub_1403F4740(qword_140C65898, 0x546u, (__int64)&v24);
			*(_QWORD*)(v5 + 32) = a4;
		}
	}
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
	return v5;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C18: using guessed type __int64 qword_140C65C18;

