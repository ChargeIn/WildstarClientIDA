//----- (0000000140371430) ----------------------------------------------------
_QWORD* __fastcall sub_140371430(__int64* a1, __int64 a2, __int64(__fastcall* a3)(__int64, __int64, _QWORD))
{
	__int64* v5; // rax
	__int64 i; // r15
	__int64 v7; // r14
	int j; // r13d
	__int64 v9; // rbx
	_QWORD* result; // rax
	__int64 v11; // rbp
	__int64 v12; // rdi
	_QWORD* v13; // rdx
	__int64 v14; // r9
	_QWORD* v15; // r8
	__int64* v16; // rax

	v5 = a1;
	for (i = 1i64; ; i *= 2i64)
	{
		v7 = *v5;
		for (j = 1; ; j = 0)
		{
			v9 = v7;
			for (result = (_QWORD*)i; v9; result = (_QWORD*)((char*)result - 1))
			{
				if (!result)
					break;
				v9 = *(_QWORD*)(v9 + a2 + 8);
			}
			v11 = i;
			v12 = i;
			if (!v9)
				break;
			while (v11)
			{
				if (!v12)
					goto LABEL_20;
				result = (_QWORD*)a3(v7, v9, 0i64);
				if ((int)result > 0)
				{
					v13 = (_QWORD*)(v9 + a2);
					v14 = v9;
					v15 = (_QWORD*)(v9 + a2 + 8);
					--v12;
					**(_QWORD**)(v9 + a2) = *v15;
					v16 = *(__int64**)(v9 + a2);
					v9 = *v16;
					if (*v16)
						*(_QWORD*)(v9 + a2) = v16;
					result = *(_QWORD**)(v7 + a2);
					*v15 = v7;
					*v13 = result;
					*result = v14;
					*(_QWORD*)(v7 + a2) = v15;
				}
				else
				{
					v7 = *(_QWORD*)(v7 + a2 + 8);
					--v11;
				}
				if (!v9)
					goto LABEL_15;
			}
			while (v12)
			{
				v9 = *(_QWORD*)(v9 + a2 + 8);
				--v12;
				if (!v9)
					goto LABEL_15;
			}
		LABEL_20:
			v7 = v9;
		}
	LABEL_15:
		if (j)
			break;
		v5 = a1;
	}
	return result;
}

