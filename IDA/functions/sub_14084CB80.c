//----- (000000014084CB80) ----------------------------------------------------
void __fastcall sub_14084CB80(__int64 a1, __int16 a2, __int64 a3, __int64 a4, char a5)
{
	__int64 v7; // r10
	char v8; // al
	_QWORD* v9; // rax
	_QWORD* v10; // rcx
	__int64* v11; // rax
	__int64 v12; // rax
	_QWORD* v13; // rax
	__int64 v14; // rcx
	_QWORD* v15; // rcx
	_QWORD* v16; // rax
	_QWORD* v17; // rdx
	__int64 v18; // rax
	__int64* v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rcx

	if (a5)
	{
		v7 = *(_QWORD*)(a1 + 56);
		if (v7)
		{
			v8 = *(_BYTE*)(v7 + 80);
			if (a3)
			{
				if ((v8 & 1) == 0 && ((*(_BYTE*)(a1 + 90) & 8) != 0 || !*(_QWORD*)(a1 + 64)))
				{
					v9 = *(_QWORD**)v7;
					v10 = *(_QWORD**)(v7 + 8);
					if (*(_QWORD**)v7 != v10)
					{
						do
						{
							if (*v9 == a3)
								break;
							v9 += 3;
						} while (v9 != v10);
						if (v9 != v10)
						{
							v11 = v9 + 1;
							if (v11)
							{
								v12 = *v11;
								if (v12)
									*(_WORD*)(v12 + 24) = a2;
							}
						}
					}
				}
			}
			else if ((v8 & 1) != 0)
			{
				*(_WORD*)(v7 + 56) = a2;
			}
			else if (a4)
			{
				v15 = *(_QWORD**)v7;
				if (*(_QWORD*)v7 != *(_QWORD*)(v7 + 8))
				{
					do
					{
						v16 = *(_QWORD**)a4;
						v17 = *(_QWORD**)(a4 + 8);
						if (*(_QWORD**)a4 == v17)
						{
						LABEL_26:
							v18 = v15[1];
							if (v18)
								*(_WORD*)(v18 + 24) = a2;
						}
						else
						{
							while (*v16 != *v15)
							{
								if (++v16 == v17)
									goto LABEL_26;
							}
						}
						v15 += 3;
					} while (v15 != *(_QWORD**)(*(_QWORD*)(a1 + 56) + 8i64));
				}
			}
			else
			{
				v13 = *(_QWORD**)v7;
				if (*(_QWORD*)v7 != *(_QWORD*)(v7 + 8))
				{
					do
					{
						v14 = v13[1];
						if (v14)
							*(_WORD*)(v14 + 24) = a2;
						v13 += 3;
					} while (v13 != *(_QWORD**)(*(_QWORD*)(a1 + 56) + 8i64));
				}
			}
		}
	}
	else
	{
		v19 = *(__int64**)(a1 + 56);
		if (v19)
		{
			if ((v19[10] & 1) != 0)
			{
				*((_WORD*)v19 + 28) = a2;
				*(_WORD*)(a1 + 88) = a2;
				return;
			}
			v20 = *v19;
			if (*v19 != v19[1])
			{
				do
				{
					v21 = *(_QWORD*)(v20 + 8);
					if (v21)
						*(_WORD*)(v21 + 24) = a2;
					v20 += 24i64;
				} while (v20 != *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64));
			}
		}
		*(_WORD*)(a1 + 88) = a2;
	}
}

