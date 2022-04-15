//----- (00000001403706B0) ----------------------------------------------------
_QWORD* __fastcall sub_1403706B0(__int64* a1, __int64 a2, __int64(__fastcall* a3)(__int64, __int64, _QWORD))
{
	__int64 i; // r14
	__int64 v6; // rsi
	int j; // r12d
	__int64 v8; // rbx
	_QWORD* result; // rax
	__int64 v10; // rbp
	__int64 v11; // rdi
	_QWORD* v12; // rdx
	__int64 v13; // r9
	_QWORD* v14; // r8
	__int64* v15; // rax

	for (i = 1i64; ; i *= 2i64)
	{
		v6 = *a1;
		for (j = 1; ; j = 0)
		{
			v8 = v6;
			for (result = (_QWORD*)i; v8; result = (_QWORD*)((char*)result - 1))
			{
				if (!result)
					break;
				v8 = *(_QWORD*)(v8 + 1112);
			}
			v10 = i;
			v11 = i;
			if (!v8)
				break;
			while (v10)
			{
				if (!v11)
					goto LABEL_20;
				result = (_QWORD*)a3(v6, v8, 0i64);
				if ((int)result > 0)
				{
					v12 = (_QWORD*)(v8 + 1104);
					v13 = v8;
					--v11;
					v14 = (_QWORD*)(v8 + 1112);
					**(_QWORD**)(v8 + 1104) = *(_QWORD*)(v8 + 1112);
					v15 = *(__int64**)(v8 + 1104);
					v8 = *v15;
					if (*v15)
						*(_QWORD*)(v8 + 1104) = v15;
					result = *(_QWORD**)(v6 + 1104);
					*v14 = v6;
					*v12 = result;
					*result = v13;
					*(_QWORD*)(v6 + 1104) = v14;
				}
				else
				{
					v6 = *(_QWORD*)(v6 + 1112);
					--v10;
				}
				if (!v8)
					goto LABEL_15;
			}
			while (v11)
			{
				v8 = *(_QWORD*)(v8 + 1112);
				--v11;
				if (!v8)
					goto LABEL_15;
			}
		LABEL_20:
			v6 = v8;
		}
	LABEL_15:
		if (j)
			break;
	}
	return result;
}

