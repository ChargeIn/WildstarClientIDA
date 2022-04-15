//----- (000000014078F9E0) ----------------------------------------------------
__int64 __fastcall sub_14078F9E0(__int64 a1)
{
	int v1; // edx
	unsigned __int64* v2; // rbx
	signed int v3; // edi
	__int64 v4; // r13
	_QWORD* v5; // rsi
	char v6; // r15
	unsigned __int64* v7; // rax
	unsigned __int64 v8; // r12
	__int64 v9; // r14
	__int64 v10; // rbx
	__int64 v11; // rax
	unsigned __int64 v12; // rbx
	__int64 v13; // rdi
	__int64 v14; // rax
	unsigned __int64* v16; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v17; // [rsp+30h] [rbp-D8h]
	_QWORD* v18; // [rsp+38h] [rbp-D0h]
	unsigned __int64 v19[64]; // [rsp+40h] [rbp-C8h] BYREF
	unsigned __int64 v20; // [rsp+240h] [rbp+138h] BYREF

	v1 = 0;
	v2 = v19;
	v3 = 1;
	v4 = (__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 24)) >> 4;
	v5 = (_QWORD*)a1;
	v18 = (_QWORD*)a1;
	v16 = v19;
	LODWORD(v17) = 0;
	if ((int)v4 >= 1)
	{
		do
		{
			v6 = sub_140056D60(v5, v3);
			v7 = v16;
			if (v16 >= &v20)
			{
				v8 = (char*)v16 - (char*)v19;
				if (v16 != v19)
				{
					v9 = (__int64)v18;
					if (*(_QWORD*)(v18[4] + 120i64) >= *(_QWORD*)(v18[4] + 112i64))
						sub_14005E2C0((__int64)v18);
					v10 = *(_QWORD*)(v9 + 16);
					v11 = sub_140062650(v9, v19, v8);
					*(_DWORD*)(v10 + 8) = 4;
					*(_QWORD*)v10 = v11;
					*(_QWORD*)(v9 + 16) += 16i64;
					LODWORD(v17) = v17 + 1;
					v16 = v19;
					sub_1400575B0((__int64)&v16);
					v7 = v16;
				}
			}
			*(_BYTE*)v7 = v6;
			++v3;
			v2 = (unsigned __int64*)((char*)v16 + 1);
			v16 = (unsigned __int64*)((char*)v16 + 1);
		} while (v3 <= (int)v4);
		v5 = v18;
		v1 = v17;
	}
	v12 = (char*)v2 - (char*)v19;
	if (v12)
	{
		if (*(_QWORD*)(v5[4] + 120i64) >= *(_QWORD*)(v5[4] + 112i64))
			sub_14005E2C0((__int64)v5);
		v13 = v5[2];
		v14 = sub_140062650((__int64)v5, v19, v12);
		*(_DWORD*)(v13 + 8) = 4;
		*(_QWORD*)v13 = v14;
		v5[2] += 16i64;
		v5 = v18;
		v1 = v17 + 1;
		v16 = v19;
		LODWORD(v17) = v17 + 1;
	}
	sub_1400590E0(v5, v1);
	return 1i64;
}
// 14078F9E0: using guessed type unsigned __int64 var_38;

