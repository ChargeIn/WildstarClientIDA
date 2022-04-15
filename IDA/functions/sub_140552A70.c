//----- (0000000140552A70) ----------------------------------------------------
__int64 __fastcall sub_140552A70(__int64 a1)
{
	__int64 v1; // r14
	_QWORD* v2; // rdi
	unsigned int v3; // r15d
	int v4; // r12d
	int v5; // r13d
	unsigned int v6; // esi
	__int64 v7; // rbp
	unsigned __int64 v8; // r8
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64* v12; // rbx
	__int64 v13; // rbx
	__int64* v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64* v18; // rax
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rax
	unsigned int v22; // r9d
	unsigned int v23; // edx
	__int64 v24; // r10
	int v25; // r8d
	__int64 v27; // [rsp+20h] [rbp-58h] BYREF
	__int64 v28; // [rsp+28h] [rbp-50h] BYREF
	__int64 v29; // [rsp+80h] [rbp+8h]
	__int64 v30; // [rsp+90h] [rbp+18h] BYREF
	__int64 v31; // [rsp+98h] [rbp+20h] BYREF

	v29 = a1;
	v1 = 32i64;
	v2 = *(_QWORD**)qword_140C65B80;
	v3 = 0;
	v4 = 0;
	v5 = 0;
	v6 = 0;
	v7 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 28i64) & 1;
	while (1)
	{
		v8 = *(unsigned int*)(v1 + *(_QWORD*)(a1 + 8));
		if ((_DWORD)v8)
			break;
	LABEL_42:
		++v6;
		v1 += 4i64;
		if (v6 >= 3)
		{
			if (!v5 || v4)
				return 1;
			return v3;
		}
	}
	v9 = v2[1];
	v5 = 1;
	v10 = *(_QWORD*)(v9 + 8);
	v11 = v9;
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < (unsigned int)v8)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v11 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v11 == v9 || (unsigned int)v8 < *(_DWORD*)(v11 + 32))
	{
		v31 = v2[1];
		v12 = &v31;
	}
	else
	{
		v30 = v11;
		v12 = &v30;
	}
	v13 = *v12;
	if (v13 != v9)
	{
		v20 = *(unsigned int*)(v13 + 48);
		if ((_DWORD)v20 == 1)
		{
			v21 = sub_1405A8A40(v20, v8);
			if (v21)
			{
				v22 = *(_DWORD*)(v21 + 16);
				v23 = 0;
				if (v22)
				{
					v24 = v21 + 24;
					do
					{
						if (*(_QWORD*)v24)
						{
							if (((*(_DWORD*)(*(_QWORD*)v24 + 8i64) >> 5) & 1) == 0)
							{
								if (v23 >= 6)
									break;
								v25 = 1 << (v23 + 2);
								if (!v25 || (v25 & *(_DWORD*)(v13 + 108)) == 0)
									break;
							}
						}
						++v23;
						v24 += 8i64;
					} while (v23 < v22);
				}
			}
			goto LABEL_40;
		}
		goto LABEL_27;
	}
	v14 = *(__int64**)(v2[14] + 8 * (v8 % ((__int64)(v2[15] - v2[14]) >> 3)));
	if (v14)
	{
		while (*((_DWORD*)v14 + 2) != (_DWORD)v8)
		{
			v14 = (__int64*)*v14;
			if (!v14)
				goto LABEL_16;
		}
	LABEL_28:
		v4 = 1;
		if (v7)
			return 1;
		goto LABEL_41;
	}
LABEL_16:
	v15 = v2[5];
	v16 = v15;
	v17 = *(_QWORD*)(v15 + 8);
	while (v17)
	{
		if (*(_DWORD*)(v17 + 32) < (unsigned int)v8)
		{
			v17 = *(_QWORD*)(v17 + 24);
		}
		else
		{
			v16 = v17;
			v17 = *(_QWORD*)(v17 + 16);
		}
	}
	if (v16 == v15 || (unsigned int)v8 < *(_DWORD*)(v16 + 32))
	{
		v28 = v2[5];
		v18 = &v28;
	}
	else
	{
		v27 = v16;
		v18 = &v27;
	}
	v19 = *v18;
	if (v19 != v15)
	{
		LODWORD(v20) = *(_DWORD*)(v19 + 36);
	LABEL_27:
		if ((_DWORD)v20 == 3)
			goto LABEL_28;
	}
LABEL_40:
	if (v7)
	{
	LABEL_41:
		a1 = v29;
		goto LABEL_42;
	}
	return 0i64;
}
// 140552BEF: conditional instruction was optimized away because r9d.4!=0
// 140C65B80: using guessed type __int64 qword_140C65B80;

