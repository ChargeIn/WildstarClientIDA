//----- (0000000140007DB0) ----------------------------------------------------
__int64 __fastcall sub_140007DB0(__int64 a1, __int64* a2, __int64* a3, __int64* a4)
{
	__int64 v5; // r14
	__int64 v6; // rcx
	__int64 v8; // rdi
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 k; // rax
	__int64 v12; // rax
	char v13; // cl
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 i; // rcx
	__int64 v17; // rax
	__int64 j; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64 v22; // rax
	_BYTE* v23; // rax
	_BYTE* v24; // rax
	_BYTE* v25; // rax
	_BYTE* v26; // rax
	_BYTE* v27; // rax
	__int64 v28; // rcx
	__int64 v29; // rax
	__int64 v30; // rax
	_BYTE* v31; // rax
	_BYTE* v32; // rax
	_BYTE* v33; // rax
	_BYTE* v34; // rax
	_BYTE* v35; // rax
	__int64 result; // rax

	v5 = a1;
	v6 = *(_QWORD*)(a1 + 16);
	if (!v6)
	{
		v8 = *(_QWORD*)(v5 + 24);
	LABEL_3:
		v9 = *(_QWORD*)(v5 + 8);
		if (v8)
			*(_QWORD*)(v8 + 8) = v9;
		if (*a2 == a1)
		{
			*a2 = v8;
		}
		else
		{
			v14 = *(_QWORD*)(a1 + 8);
			if (*(_QWORD*)(v14 + 16) == a1)
				*(_QWORD*)(v14 + 16) = v8;
			else
				*(_QWORD*)(v14 + 24) = v8;
		}
		if (*a3 == a1)
		{
			if (*(_QWORD*)(a1 + 24))
			{
				v15 = *(_QWORD*)(v8 + 16);
				for (i = v8; v15; v15 = *(_QWORD*)(v15 + 16))
					i = v15;
				*a3 = i;
			}
			else
			{
				*a3 = *(_QWORD*)(a1 + 8);
			}
		}
		if (*a4 == a1)
		{
			if (*(_QWORD*)(a1 + 16))
			{
				v17 = *(_QWORD*)(v8 + 24);
				for (j = v8; v17; v17 = *(_QWORD*)(v17 + 24))
					j = v17;
				*a4 = j;
			}
			else
			{
				*a4 = *(_QWORD*)(a1 + 8);
			}
		}
		goto LABEL_38;
	}
	v10 = *(_QWORD*)(a1 + 24);
	if (!v10)
	{
		v8 = v6;
		goto LABEL_3;
	}
	v5 = *(_QWORD*)(a1 + 24);
	for (k = *(_QWORD*)(v10 + 16); k; k = *(_QWORD*)(k + 16))
		v5 = k;
	v8 = *(_QWORD*)(v5 + 24);
	if (v5 == a1)
		goto LABEL_3;
	*(_QWORD*)(v6 + 8) = v5;
	*(_QWORD*)(v5 + 16) = *(_QWORD*)(a1 + 16);
	if (v5 == *(_QWORD*)(a1 + 24))
	{
		v9 = v5;
	}
	else
	{
		v9 = *(_QWORD*)(v5 + 8);
		if (v8)
			*(_QWORD*)(v8 + 8) = v9;
		*(_QWORD*)(*(_QWORD*)(v5 + 8) + 16i64) = v8;
		*(_QWORD*)(v5 + 24) = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8i64) = v5;
	}
	if (*a2 == a1)
	{
		*a2 = v5;
	}
	else
	{
		v12 = *(_QWORD*)(a1 + 8);
		if (*(_QWORD*)(v12 + 16) == a1)
			*(_QWORD*)(v12 + 16) = v5;
		else
			*(_QWORD*)(v12 + 24) = v5;
	}
	*(_QWORD*)(v5 + 8) = *(_QWORD*)(a1 + 8);
	v13 = *(_BYTE*)v5;
	*(_BYTE*)v5 = *(_BYTE*)a1;
	*(_BYTE*)a1 = v13;
	v5 = a1;
LABEL_38:
	if (!*(_BYTE*)v5)
		return v5;
	if (v8 != *a2)
	{
		while (!v8 || *(_BYTE*)v8 == 1)
		{
			v19 = *(_QWORD*)(v9 + 16);
			if (v8 == v19)
			{
				v19 = *(_QWORD*)(v9 + 24);
				if (!*(_BYTE*)v19)
				{
					*(_BYTE*)v19 = 1;
					v20 = *(_QWORD*)(v9 + 24);
					*(_BYTE*)v9 = 0;
					*(_QWORD*)(v9 + 24) = *(_QWORD*)(v20 + 16);
					v21 = *(_QWORD*)(v20 + 16);
					if (v21)
						*(_QWORD*)(v21 + 8) = v9;
					*(_QWORD*)(v20 + 8) = *(_QWORD*)(v9 + 8);
					if (v9 == *a2)
					{
						*a2 = v20;
					}
					else
					{
						v22 = *(_QWORD*)(v9 + 8);
						if (v9 == *(_QWORD*)(v22 + 16))
							*(_QWORD*)(v22 + 16) = v20;
						else
							*(_QWORD*)(v22 + 24) = v20;
					}
					*(_QWORD*)(v20 + 16) = v9;
					*(_QWORD*)(v9 + 8) = v20;
					v19 = *(_QWORD*)(v9 + 24);
				}
				v23 = *(_BYTE**)(v19 + 16);
				if (v23 && *v23 != 1 || (v24 = *(_BYTE**)(v19 + 24)) != 0i64 && *v24 != 1)
				{
					v25 = *(_BYTE**)(v19 + 24);
					if (!v25 || *v25 == 1)
					{
						v26 = *(_BYTE**)(v19 + 16);
						if (v26)
							*v26 = 1;
						*(_BYTE*)v19 = 0;
						sub_140008100(v19, a2);
						v19 = *(_QWORD*)(v9 + 24);
					}
					*(_BYTE*)v19 = *(_BYTE*)v9;
					*(_BYTE*)v9 = 1;
					v27 = *(_BYTE**)(v19 + 24);
					if (v27)
						*v27 = 1;
					sub_140008160(v9, a2);
					break;
				}
			}
			else
			{
				if (!*(_BYTE*)v19)
				{
					*(_BYTE*)v19 = 1;
					v28 = *(_QWORD*)(v9 + 16);
					*(_BYTE*)v9 = 0;
					*(_QWORD*)(v9 + 16) = *(_QWORD*)(v28 + 24);
					v29 = *(_QWORD*)(v28 + 24);
					if (v29)
						*(_QWORD*)(v29 + 8) = v9;
					*(_QWORD*)(v28 + 8) = *(_QWORD*)(v9 + 8);
					if (v9 == *a2)
					{
						*a2 = v28;
					}
					else
					{
						v30 = *(_QWORD*)(v9 + 8);
						if (v9 == *(_QWORD*)(v30 + 24))
							*(_QWORD*)(v30 + 24) = v28;
						else
							*(_QWORD*)(v30 + 16) = v28;
					}
					*(_QWORD*)(v28 + 24) = v9;
					*(_QWORD*)(v9 + 8) = v28;
					v19 = *(_QWORD*)(v9 + 16);
				}
				v31 = *(_BYTE**)(v19 + 24);
				if (v31 && *v31 != 1 || (v32 = *(_BYTE**)(v19 + 16)) != 0i64 && *v32 != 1)
				{
					v33 = *(_BYTE**)(v19 + 16);
					if (!v33 || *v33 == 1)
					{
						v34 = *(_BYTE**)(v19 + 24);
						if (v34)
							*v34 = 1;
						*(_BYTE*)v19 = 0;
						sub_140008160(v19, a2);
						v19 = *(_QWORD*)(v9 + 16);
					}
					*(_BYTE*)v19 = *(_BYTE*)v9;
					*(_BYTE*)v9 = 1;
					v35 = *(_BYTE**)(v19 + 16);
					if (v35)
						*v35 = 1;
					sub_140008100(v9, a2);
					break;
				}
			}
			v8 = v9;
			*(_BYTE*)v19 = 0;
			v9 = *(_QWORD*)(v9 + 8);
			if (v8 == *a2)
				break;
		}
	}
	result = v5;
	if (v8)
		*(_BYTE*)v8 = 1;
	return result;
}

