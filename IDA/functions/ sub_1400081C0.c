//----- (00000001400081C0) ----------------------------------------------------
_BYTE* __fastcall sub_1400081C0(__int64 a1, _QWORD* a2)
{
	__int64 v3; // rax
	__int64 v4; // r9
	_BYTE* v5; // rdx
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rax
	_QWORD* v9; // rdx
	_QWORD* v10; // r9
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rdx
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rax
	_BYTE* result; // rax

	*(_BYTE*)a1 = 0;
	if (a1 != *a2)
	{
		while (1)
		{
			v3 = *(_QWORD*)(a1 + 8);
			if (*(_BYTE*)v3)
			{
			LABEL_45:
				result = (_BYTE*)*a2;
				*(_BYTE*)*a2 = 1;
				return result;
			}
			v4 = *(_QWORD*)(v3 + 8);
			v5 = *(_BYTE**)(v4 + 16);
			if ((_BYTE*)v3 == v5)
			{
				v5 = *(_BYTE**)(v4 + 24);
				if (!v5 || *v5)
				{
					if (a1 == *(_QWORD*)(v3 + 24))
					{
						v6 = *(_QWORD*)(v3 + 24);
						a1 = *(_QWORD*)(a1 + 8);
						*(_QWORD*)(v3 + 24) = *(_QWORD*)(v6 + 16);
						v7 = *(_QWORD*)(v6 + 16);
						if (v7)
							*(_QWORD*)(v7 + 8) = a1;
						*(_QWORD*)(v6 + 8) = *(_QWORD*)(a1 + 8);
						if (a1 == *a2)
						{
							*a2 = v6;
						}
						else
						{
							v8 = *(_QWORD*)(a1 + 8);
							if (a1 == *(_QWORD*)(v8 + 16))
								*(_QWORD*)(v8 + 16) = v6;
							else
								*(_QWORD*)(v8 + 24) = v6;
						}
						*(_QWORD*)(v6 + 16) = a1;
						*(_QWORD*)(a1 + 8) = v6;
					}
					**(_BYTE**)(a1 + 8) = 1;
					**(_BYTE**)(*(_QWORD*)(a1 + 8) + 8i64) = 0;
					v9 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 8i64);
					v10 = (_QWORD*)v9[2];
					v9[2] = v10[3];
					v11 = v10[3];
					if (v11)
						*(_QWORD*)(v11 + 8) = v9;
					v10[1] = v9[1];
					if (v9 == (_QWORD*)*a2)
					{
						*a2 = v10;
						v10[3] = v9;
					}
					else
					{
						v12 = v9[1];
						if (v9 == *(_QWORD**)(v12 + 24))
							*(_QWORD*)(v12 + 24) = v10;
						else
							*(_QWORD*)(v12 + 16) = v10;
						v10[3] = v9;
					}
				LABEL_43:
					v9[1] = v10;
					goto LABEL_44;
				}
			}
			else if (!v5 || *v5)
			{
				if (a1 == *(_QWORD*)(v3 + 16))
				{
					v13 = *(_QWORD*)(v3 + 16);
					a1 = *(_QWORD*)(a1 + 8);
					*(_QWORD*)(v3 + 16) = *(_QWORD*)(v13 + 24);
					v14 = *(_QWORD*)(v13 + 24);
					if (v14)
						*(_QWORD*)(v14 + 8) = a1;
					*(_QWORD*)(v13 + 8) = *(_QWORD*)(a1 + 8);
					if (a1 == *a2)
					{
						*a2 = v13;
					}
					else
					{
						v15 = *(_QWORD*)(a1 + 8);
						if (a1 == *(_QWORD*)(v15 + 24))
							*(_QWORD*)(v15 + 24) = v13;
						else
							*(_QWORD*)(v15 + 16) = v13;
					}
					*(_QWORD*)(v13 + 24) = a1;
					*(_QWORD*)(a1 + 8) = v13;
				}
				**(_BYTE**)(a1 + 8) = 1;
				**(_BYTE**)(*(_QWORD*)(a1 + 8) + 8i64) = 0;
				v9 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 8i64);
				v10 = (_QWORD*)v9[3];
				v9[3] = v10[2];
				v16 = v10[2];
				if (v16)
					*(_QWORD*)(v16 + 8) = v9;
				v10[1] = v9[1];
				if (v9 == (_QWORD*)*a2)
				{
					*a2 = v10;
				}
				else
				{
					v17 = v9[1];
					if (v9 == *(_QWORD**)(v17 + 16))
						*(_QWORD*)(v17 + 16) = v10;
					else
						*(_QWORD*)(v17 + 24) = v10;
				}
				v10[2] = v9;
				goto LABEL_43;
			}
			*(_BYTE*)v3 = 1;
			*v5 = 1;
			**(_BYTE**)(*(_QWORD*)(a1 + 8) + 8i64) = 0;
			a1 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64);
		LABEL_44:
			if (a1 == *a2)
				goto LABEL_45;
		}
	}
	result = (_BYTE*)*a2;
	*(_BYTE*)*a2 = 1;
	return result;
}

