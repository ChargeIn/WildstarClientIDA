//----- (0000000140552C80) ----------------------------------------------------
__int64 __fastcall sub_140552C80(__int64 a1)
{
	__int64 v2; // rbx
	_QWORD* v3; // r14
	int v4; // r13d
	unsigned int v5; // r15d
	int v6; // r12d
	unsigned int i; // edi
	unsigned int v8; // edx
	unsigned int v9; // r8d
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64* v13; // rcx
	__int64 v15; // [rsp+60h] [rbp+8h] BYREF
	__int64 v16; // [rsp+68h] [rbp+10h] BYREF

	v2 = 212i64;
	v3 = *(_QWORD**)qword_140C65B80;
	v4 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 28i64) & 0x20;
	v5 = 0;
	v6 = 0;
	for (i = 0; i < 3; ++i)
	{
		v8 = *(_DWORD*)(v2 + *(_QWORD*)(a1 + 8));
		if (v8)
		{
			v6 = 1;
			if (!(unsigned int)sub_1405FBC40(v3, v8))
				goto LABEL_16;
			v9 = *(_DWORD*)(v2 + *(_QWORD*)(a1 + 8));
			v10 = v3[5];
			v11 = *(_QWORD*)(v10 + 8);
			v12 = v10;
			while (v11)
			{
				if (*(_DWORD*)(v11 + 32) < v9)
				{
					v11 = *(_QWORD*)(v11 + 24);
				}
				else
				{
					v12 = v11;
					v11 = *(_QWORD*)(v11 + 16);
				}
			}
			if (v12 == v10 || v9 < *(_DWORD*)(v12 + 32))
			{
				v16 = v3[5];
				v13 = &v16;
			}
			else
			{
				v15 = v12;
				v13 = &v15;
			}
			if (*v13 == v10)
			{
				if (!v4)
					return 0i64;
			}
			else
			{
			LABEL_16:
				if (v4)
					return 1i64;
			}
		}
		v2 += 4i64;
	}
	if (!v6 || !v4)
		return 1;
	return v5;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

