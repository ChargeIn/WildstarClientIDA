//----- (00000001403B7D40) ----------------------------------------------------
__int64 __fastcall sub_1403B7D40(__int64 a1, __int64 a2, int a3)
{
	__int64 result; // rax
	_QWORD* v6; // rdi
	int v7; // r8d
	__int64 v8; // rax
	unsigned int v9; // edx
	__int64 v10; // rax
	__int64 v11; // rdx
	unsigned int v12; // ecx
	__int64 v13; // rbx
	int* v14; // rax
	void(__fastcall * v15)(__int64, _WORD*); // [rsp+20h] [rbp-18h] BYREF
	int v16; // [rsp+28h] [rbp-10h]
	char v17; // [rsp+40h] [rbp+8h] BYREF

	result = sub_1403ACBB0(a1 + 160, a2);
	v6 = (_QWORD*)result;
	if (result)
	{
		v7 = 1;
		if (*(_DWORD*)(result + 120))
			v7 = *(_DWORD*)(result + 120);
		sub_1403B8250(a1, **(_DWORD**)(result + 64), v7, a3);
		v8 = v6[10];
		if (!v8)
			v8 = v6[8] + 156i64;
		v9 = *(_DWORD*)(v8 + 128);
		if (v9 && sub_1403ACD90(qword_140C65B70, v9, *(_QWORD*)(qword_140C65898 + 120)))
		{
			v10 = v6[10];
			v11 = 0i64;
			if (!v10)
				v10 = v6[8] + 156i64;
			v12 = *(_DWORD*)(v10 + 128);
			if (v12)
				v11 = sub_1403ACD90(qword_140C65B70, v12, *(_QWORD*)(qword_140C65898 + 120));
			v16 = 0;
			v15 = sub_1405A5EA0;
			if (v11)
				sub_1405A5FE0(a1, v11, (__int64)&v15);
		}
		v13 = qword_140C65898;
		v14 = (int*)(*(__int64(__fastcall**)(_QWORD*, char*))(*v6 + 32i64))(v6, &v17);
		sub_1403D2E10(v13 + 160, v14, 0i64);
		result = qword_140C65898;
		*(_DWORD*)(qword_140C65898 + 28568) = 1;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

