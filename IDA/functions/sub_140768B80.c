//----- (0000000140768B80) ----------------------------------------------------
__int64 __fastcall sub_140768B80(__int64 a1)
{
	__int64 v1; // rsi
	int v2; // r14d
	_QWORD* v4; // rax
	__int64 v5; // r15
	unsigned __int64 v6; // r12
	unsigned int v7; // ebp
	__int64 v8; // rsi
	unsigned __int64 v9; // rdi
	_QWORD* v10; // rbx
	unsigned int v11; // edx
	__int64 v12; // r9
	__int64 v13; // r8
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64 v19; // r8
	__int64 v20; // rax
	__int64 v21; // rdx
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64* v24; // rax
	__int64 v25; // rax
	__int64** v26; // rax
	__int64 v27; // rcx
	unsigned __int64 v28; // rcx
	_DWORD* v29; // rax
	char v30; // al
	_DWORD* v31; // rcx
	bool v32; // zf
	__int64 result; // rax
	__int64 v34; // [rsp+20h] [rbp-58h] BYREF
	_QWORD* v35; // [rsp+28h] [rbp-50h]
	unsigned int v36; // [rsp+80h] [rbp+8h] BYREF
	__int64 v37; // [rsp+88h] [rbp+10h] BYREF
	__int64 v38; // [rsp+90h] [rbp+18h] BYREF
	__int64 v39; // [rsp+98h] [rbp+20h] BYREF

	v1 = qword_140C65B70;
	v2 = 0;
	v4 = (_QWORD*)(qword_140C65B70 + 2016);
	v5 = 0i64;
	v6 = *(_QWORD*)(qword_140C65B70 + 2024);
	v35 = (_QWORD*)(qword_140C65B70 + 2016);
	if (v6)
	{
		while (1)
		{
			v7 = *(_DWORD*)(*v4 + 4 * v5);
			v36 = v7;
			v8 = *(_QWORD*)(v1 + 1560);
			v9 = (*(__int64(__fastcall**)(unsigned int*))(v8 + 24))(&v36);
			v10 = *(_QWORD**)(*(_QWORD*)(v8 + 16) + 8 * (v9 % *(_QWORD*)(v8 + 8)));
			if (!v10)
				goto LABEL_6;
			while (v9 != *v10 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v8 + 32))(&v36, v10 + 2))
			{
				v10 = (_QWORD*)v10[1];
				if (!v10)
					goto LABEL_6;
			}
			if (v10 != (_QWORD*)-24i64 && (v16 = v10[3]) != 0 && *(_QWORD*)(v16 + 8))
				v11 = **(_DWORD**)v16;
			else
				LABEL_6:
			v11 = 0;
			v12 = qword_140C65898;
			if (v11)
			{
				if (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898)
				{
					v13 = *(_QWORD*)(qword_140C65898 + 32024);
					v14 = v13;
					v15 = *(_QWORD*)(v13 + 8);
					while (v15)
					{
						if (*(_DWORD*)(v15 + 32) < v11)
						{
							v15 = *(_QWORD*)(v15 + 24);
						}
						else
						{
							v14 = v15;
							v15 = *(_QWORD*)(v15 + 16);
						}
					}
					if (v14 == v13 || v11 < *(_DWORD*)(v14 + 32))
					{
						v38 = *(_QWORD*)(qword_140C65898 + 32024);
						v17 = &v38;
					}
					else
					{
						v37 = v14;
						v17 = &v37;
					}
					v18 = *v17;
					if (v18 != v13)
					{
						v19 = *(_QWORD*)(v18 + 40);
						if (v19)
							goto LABEL_50;
					}
				}
				v20 = sub_1407A0FD0(qword_140C65B70, v11);
				v12 = qword_140C65898;
				v19 = v20;
				if (v20)
				{
				LABEL_50:
					if (!v7)
						break;
					v21 = *(_QWORD*)(v12 + 2728);
					v22 = v21;
					v23 = *(_QWORD*)(v21 + 8);
					while (v23)
					{
						if (*(_DWORD*)(v23 + 32) < v7)
						{
							v23 = *(_QWORD*)(v23 + 24);
						}
						else
						{
							v22 = v23;
							v23 = *(_QWORD*)(v23 + 16);
						}
					}
					if (v22 == v21 || v7 < *(_DWORD*)(v22 + 32))
					{
						v34 = *(_QWORD*)(v12 + 2728);
						v24 = &v34;
					}
					else
					{
						v39 = v22;
						v24 = &v39;
					}
					v25 = *v24;
					if (v25 == v21)
						break;
					v26 = *(__int64***)(v25 + 40);
					if (!v26[1])
						break;
					v27 = **v26;
					if (!v27 || !*(_BYTE*)(v27 + 8))
						break;
				}
			}
		LABEL_43:
			if (++v5 >= v6)
				goto LABEL_46;
			v1 = qword_140C65B70;
			v4 = v35;
		}
		v28 = 0i64;
		v29 = (_DWORD*)(*(_QWORD*)(v19 + 112) + 408i64);
		while (*v29 != 11)
		{
			++v28;
			++v29;
			if (v28 >= 5)
				goto LABEL_43;
		}
		v30 = 0;
	}
	else
	{
	LABEL_46:
		v30 = 1;
	}
	v31 = *(_DWORD**)(a1 + 16);
	v32 = v30 == 0;
	result = 1i64;
	LOBYTE(v2) = !v32;
	v31[2] = 1;
	*v31 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

