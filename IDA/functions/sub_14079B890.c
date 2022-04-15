//----- (000000014079B890) ----------------------------------------------------
__int64 __fastcall sub_14079B890(__int64* a1, int* a2, __int64** a3)
{
	__int64 v3; // r13
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdi
	unsigned __int64 v10; // rbx
	__int64 v11; // rax
	__int64 v13; // rax
	bool v14; // zf
	__int64 v15; // rax
	int v16; // [rsp+60h] [rbp+8h] BYREF
	const char* v17; // [rsp+68h] [rbp+10h] BYREF

	v3 = a1[2];
	if (a2)
	{
		v7 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v7;
			while (*((_WORD*)a2 + v7));
		}
		v8 = sub_14018B280(2 * v7 + 18, 0);
		if (v8)
		{
			*((_QWORD*)v8 + 1) = v7;
			*(_QWORD*)v8 = off_140B55060;
		}
		else
		{
			v8 = 0i64;
		}
		v9 = v8 + 4;
		v10 = 2 * v7;
		sub_1407DB590(v8 + 4, a2, v10);
		*(_WORD*)((char*)v9 + v10) = 0;
		a1[2] = (__int64)v9;
	}
	else
	{
		a1[2] = 0i64;
	}
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	v11 = sub_14090F320(a2, 0x201u, &v17, &v16, 0i64);
	*a1 = v11;
	if (v11)
	{
		v13 = sub_140910630(v11, 0, &v17);
		v14 = a1[3] == 0;
		a1[1] = v13;
		if (v14)
		{
			a1[3] = (__int64)a3;
			a1[4] = (__int64)*a3;
			*a3 = a1;
			v15 = a1[4];
			if (v15)
				*(_QWORD*)(v15 + 24) = a1 + 4;
		}
		return 0i64;
	}
	else
	{
		sub_1400035B0();
		return 2147500037i64;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

