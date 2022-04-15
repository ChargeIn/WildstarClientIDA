//----- (000000014040D6B0) ----------------------------------------------------
__int64 __fastcall sub_14040D6B0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rdi
	unsigned int v5; // ecx
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // r15d
	int v10; // r13d
	unsigned int v11; // ebx
	unsigned int v12; // r8d
	int v13; // r13d
	unsigned int v14; // ebp
	unsigned int* v15; // r14
	__int64 v16; // rax
	__int64 v17; // rsi
	unsigned int v18; // edi
	unsigned int* v19; // rbx
	__int64 v20; // rax
	unsigned int v21; // ecx
	_DWORD* v22; // rax
	unsigned int v23; // ebx
	_DWORD* v24; // rax
	int v25; // ecx
	int v26; // ecx
	int v27; // ecx
	int v28; // ecx
	__int64 v29; // rax
	__int64 v30; // rdx
	int v31; // ecx
	_DWORD* v32; // rax
	int v33; // ecx
	int v34; // eax
	_DWORD* v35; // rcx
	_QWORD* v36; // rax
	int v37; // r14d
	int v38; // ebp
	unsigned int v39; // ebx
	unsigned int* v40; // rsi
	unsigned int v41; // edi
	__int64 v42; // rax
	unsigned int v43; // ecx
	int v44; // ecx
	unsigned int v45; // [rsp+30h] [rbp-48h] BYREF
	unsigned int v46; // [rsp+34h] [rbp-44h] BYREF
	__int64 v47; // [rsp+38h] [rbp-40h]
	unsigned int v50; // [rsp+98h] [rbp+20h] BYREF

	v3 = a1;
	v5 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 372i64);
	if (!v5)
		return 0i64;
	v7 = sub_14020B060(v5);
	v8 = v7;
	v47 = v7;
	if (!v7)
		return 149i64;
	v9 = 0;
	v10 = 2;
	if (!*(_DWORD*)(v3 + 8))
		goto LABEL_57;
	v11 = 0;
	v12 = 0;
	v50 = 0;
	v13 = 0;
	v14 = 0;
	v15 = (unsigned int*)(v7 + 4);
	v45 = 0;
	while (*v15)
	{
		v16 = sub_14022AA80(*v15);
		v17 = v16;
		if (!v16)
			return 149i64;
		v18 = 0;
		v19 = (unsigned int*)(v16 + 120);
		do
		{
			if (*v19)
			{
				v20 = sub_14022D0C0(*v19);
				if (!v20 || *(_DWORD*)(v20 + 4) == 31)
					return 149i64;
			}
			++v18;
			++v19;
		} while (v18 < 3);
		v21 = 3;
		v22 = (_DWORD*)(v17 + 132);
		do
		{
			if (*v22)
				return 149i64;
			++v21;
			++v22;
		} while (v21 < 6);
		v23 = v15[15];
		if (qword_140C63840)
		{
			v24 = (_DWORD*)qword_140C63840(off_140A6AD38, v23, qword_140C63858);
		}
		else
		{
			if (dword_140C6480C || (int)sub_14020B240() < 0)
			{
			LABEL_39:
				v3 = a1;
				v32 = *(_DWORD**)(a1 + 256);
				if (!v32 || *v32 != 59)
					return 149i64;
				goto LABEL_41;
			}
			v24 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C644D8 + 24i64))(
				qword_140C644D8,
				v23);
		}
		if (!v24)
			goto LABEL_39;
		v25 = v24[1];
		if (!v25)
		{
			v29 = sub_1402479C0(v24[2]);
			if (!v29)
				return 149i64;
			if ((*(_BYTE*)(v29 + 36) & 4) == 0)
				return 149i64;
			v3 = a1;
			v30 = *(_QWORD*)(a1 + 256);
			if (v30)
			{
				v31 = *(_DWORD*)(v29 + 52);
				if (v31)
				{
					if ((v31 & *(_DWORD*)(v30 + 16)) == 0)
						return 149i64;
				}
			}
		LABEL_41:
			v11 = v45;
			goto LABEL_42;
		}
		v26 = v25 - 1;
		if (!v26)
		{
			if (!sub_14040FA40(a3, v24[2]))
				return 149i64;
			v3 = a1;
			goto LABEL_41;
		}
		v27 = v26 - 3;
		if (v27)
		{
			v28 = v27 - 1;
			if (!v28)
			{
				v13 += v24[3];
				v3 = a1;
				goto LABEL_41;
			}
			if (v28 != 1)
				return 149i64;
			v3 = a1;
			v11 = v24[3] + v45;
			v45 = v11;
		LABEL_42:
			v12 = v50;
			goto LABEL_43;
		}
		v11 = v45;
		v3 = a1;
		v12 = v24[3] + v50;
		v50 = v12;
	LABEL_43:
		++v14;
		++v15;
		if (v14 >= 0xF)
			break;
	}
	if (v13 && v13 + *(_DWORD*)(a2 + 4) < 0)
		return 149i64;
	v33 = v12 + *(_DWORD*)a2;
	if (v12)
	{
		if (v33 >= 2)
		{
			v34 = v12 + *(_DWORD*)a2;
			if (v33 > 7)
				v34 = 7;
		}
		else
		{
			v34 = 2;
		}
		if (v33 != v34)
			return 149i64;
	}
	if (v11)
	{
		v35 = *(_DWORD**)(v3 + 16);
		v45 = 0;
		v50 = 0;
		if ((int)sub_14040EFB0(v35, (unsigned int*)a2, &v45, &v50, &v46) < 0 || v11 + v50 > 8)
			return 149i64;
	}
	v8 = v47;
	v10 = 2;
LABEL_57:
	v36 = *(_QWORD**)(v3 + 176);
	if (v36)
		v36 = (_QWORD*)*v36;
	*(_QWORD*)(a2 + 292) = v36;
	v37 = 0;
	v38 = 0;
	v39 = 0;
	v40 = (unsigned int*)(v8 + 64);
	while (2)
	{
		if (v39 < *(unsigned __int8*)(a2 + 292))
		{
			v41 = *v40;
			if (qword_140C63840)
			{
				v42 = qword_140C63840(off_140A6AD38, v41, qword_140C63858);
				goto LABEL_66;
			}
			if (!dword_140C6480C && (int)sub_14020B240() >= 0)
			{
				v42 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C644D8 + 24i64))(qword_140C644D8, v41);
			LABEL_66:
				if (v42)
				{
					v43 = *(_DWORD*)(v42 + 4);
					if (v43 > 1)
					{
						switch (v43)
						{
						case 4u:
							v9 += *(_DWORD*)(v42 + 12);
							break;
						case 5u:
							v37 += *(_DWORD*)(v42 + 12);
							break;
						case 6u:
							v38 += *(_DWORD*)(v42 + 12);
							break;
						default:
							return 148i64;
						}
					}
				}
			}
			++v39;
			++v40;
			if (v39 >= 0xF)
				break;
			continue;
		}
		break;
	}
	if (v9)
	{
		v44 = v9 + *(_DWORD*)a2;
		if (v44 >= 2)
		{
			v10 = v9 + *(_DWORD*)a2;
			if (v44 > 7)
				v10 = 7;
		}
		*(_DWORD*)a2 = v10;
	}
	if (v38)
		*(_DWORD*)(a2 + 300) += v38;
	if (v37)
	{
		result = sub_14040D060(a1, a2, a3, v37 + *(_DWORD*)(a2 + 4), *(_DWORD*)(a2 + 8));
		if ((_DWORD)result)
			return result;
		return 0i64;
	}
	else
	{
		if (!v9 && !v38)
			return 0i64;
		result = sub_14040CF90(a1, a2);
		if (!(_DWORD)result)
			return 0i64;
	}
	return result;
}
// 140A6AD38: using guessed type wchar_t *off_140A6AD38[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C644D8: using guessed type __int64 qword_140C644D8;
// 140C6480C: using guessed type int dword_140C6480C;

