//----- (000000014068BB80) ----------------------------------------------------
__int64 __fastcall sub_14068BB80(_QWORD* a1)
{
	char v1; // bp
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned int v5; // eax
	__int64 v6; // rbx
	int v7; // eax
	__int64 v8; // r14
	_DWORD* v9; // rax
	int v10; // r15d
	__int64 v11; // r14
	void(__fastcall * **v12)(_QWORD); // rbx
	int* v13; // r12
	_QWORD* v14; // rax
	__int64 v15; // rax
	unsigned int v16; // edi
	__int64 result; // rax
	__int64 v18; // [rsp+40h] [rbp-48h] BYREF
	__int64 v19; // [rsp+48h] [rbp-40h]

	v1 = 0;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 8) + 32i64))(*(_QWORD*)(v4 + 8)),
			(v6 = sub_140498A40(qword_140C65980, v5, 0)) != 0))
	{
		v7 = sub_140056D60(a1, 2u) - 1;
		if (v7 < 0 || (v8 = v7, (unsigned __int64)v7 >= *(_QWORD*)(v6 + 456)))
		{
			result = 1i64;
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		else
		{
			v9 = (_DWORD*)(a1[3] + 32i64);
			if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
				v10 = 3;
			else
				v10 = sub_140056D60(a1, 3u);
			v11 = *(_QWORD*)(v6 + 448) + 224 * v8;
			v12 = 0i64;
			v13 = sub_14018B280(104i64, 0);
			if (v13)
			{
				v1 = 1;
				v14 = sub_1405F1540(&v18, (__int64*)(v11 + 8));
				v15 = sub_14073E140((__int64)v13, (int*)v14[1], 0i64, v10, 7, *(unsigned int*)(v11 + 4), (_QWORD*)(v11 + 8));
				if (v15)
					v12 = (void(__fastcall***)(_QWORD))v15;
			}
			if ((v1 & 1) != 0 && v19)
				sub_14018B900(v19, 0);
			v16 = sub_14073EB30(a1, v12);
			if (v12)
				(*v12)[1](v12);
			return v16;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

