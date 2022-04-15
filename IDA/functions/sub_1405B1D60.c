//----- (00000001405B1D60) ----------------------------------------------------
int* __fastcall sub_1405B1D60(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
	_QWORD* v3; // rax
	void(__fastcall * **v7)(_QWORD); // rcx
	void(__fastcall * **v8)(_QWORD); // rbx
	int* result; // rax
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // r13
	int* v13; // rax
	void(__fastcall * ***v14)(_QWORD); // rdi
	int* v15; // r12
	int* i; // rbx
	void(__fastcall * **v17)(_QWORD); // rcx
	void(__fastcall * **v18)(_QWORD); // rcx
	void(__fastcall * ***v19)(_QWORD); // rbp
	_QWORD* v20; // rdi
	void(__fastcall * ***v21)(_QWORD); // rbx
	void(__fastcall * **v22)(_QWORD); // rcx
	_QWORD* v23; // rbp
	_QWORD* j; // rbx
	__int64 v25; // rcx

	v3 = (_QWORD*)a1[2];
	if (v3 == (_QWORD*)a1[3])
	{
		v10 = ((__int64)v3 - a1[1]) >> 3;
		v11 = 2 * v10;
		if (!v10)
			v11 = 1i64;
		v12 = 2 * ((unsigned __int64)sub_14018A3E0(8 * v11) >> 3);
		v13 = sub_14018B280(v12 * 4, 0);
		v14 = (void(__fastcall****)(_QWORD))a1[1];
		v15 = v13;
		for (i = v13; v14 != a2; i += 2)
		{
			if (i)
			{
				v17 = *v14;
				*(_QWORD*)i = *v14;
				if (v17)
					(**v17)(v17);
			}
			++v14;
		}
		if (i)
		{
			v18 = (void(__fastcall***)(_QWORD)) * a3;
			*(_QWORD*)i = *a3;
			if (v18)
				(**v18)(v18);
		}
		v19 = (void(__fastcall****)(_QWORD))a1[2];
		v20 = i + 2;
		if (a2 != v19)
		{
			v21 = (void(__fastcall****)(_QWORD))a2;
			do
			{
				if (v20)
				{
					v22 = *v21;
					*v20 = *v21;
					if (v22)
						(**v22)(v22);
				}
				++v21;
				++v20;
			} while (v21 != v19);
		}
		v23 = (_QWORD*)a1[2];
		for (j = (_QWORD*)a1[1]; j != v23; ++j)
		{
			if (*j)
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*j + 8i64))(*j);
		}
		v25 = a1[1];
		if (v25)
			sub_14018B900(v25, 0);
		result = &v15[v12];
		a1[1] = v15;
		a1[2] = v20;
		a1[3] = &v15[v12];
	}
	else
	{
		if (v3)
		{
			v7 = (void(__fastcall***)(_QWORD)) * (v3 - 1);
			*v3 = v7;
			if (v7)
				(**v7)(v7);
		}
		a1[2] += 8i64;
		v8 = (void(__fastcall***)(_QWORD)) * a3;
		if (*a3)
			(**v8)(*a3);
		result = (int*)sub_1405B2180((__int64)a2, a1[2] - 16i64, (_QWORD*)(a1[2] - 8i64));
		if ((void(__fastcall***)(_QWORD)) * a2 != v8)
		{
			if (v8)
				result = (int*)((__int64(__fastcall*)(_QWORD)) * *v8)(v8);
			if (*a2)
				result = (int*)(*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 8i64))(*a2);
			*a2 = v8;
		}
		if (v8)
			return (int*)((__int64(__fastcall*)(_QWORD))(*v8)[1])(v8);
	}
	return result;
}

