//----- (0000000140724340) ----------------------------------------------------
void __fastcall sub_140724340(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // r14
	int v4; // ebx
	int v5; // ebp
	int v6; // ebx
	int v7; // ebx
	_QWORD** v8; // rbx
	_QWORD* v9; // rcx
	_QWORD* v10; // rsi
	_QWORD* v11; // rax
	_QWORD** v12; // rbx
	_QWORD* v13; // rcx
	_QWORD* v14; // rsi
	_QWORD* v15; // rax
	_QWORD** v16; // rbx
	_QWORD* v17; // rcx
	_QWORD* v18; // rsi
	_QWORD* v19; // rax
	_QWORD** v20; // rbx
	_QWORD* v21; // rcx
	_QWORD* v22; // rsi
	_QWORD* v23; // rax
	int v24; // ebp
	int v25; // ebp
	__int64 v26; // rbx
	int* v27; // rax

	v2 = (_QWORD*)qword_140C665D8;
	v4 = (*(__int64(__fastcall**)(_QWORD*))(*a2 + 192i64))(a2);
	sub_140787D10(a2);
	v5 = (*(__int64(__fastcall**)(_QWORD*))(*a2 + 192i64))(a2);
	if (v4 != v5)
	{
		if (v4)
		{
			v6 = v4 - 1;
			if (v6)
			{
				v7 = v6 - 1;
				if (v7)
				{
					if (v7 == 1)
					{
						v8 = (_QWORD**)v2[9];
						v9 = *v8;
						if (*v8 != v8)
						{
							do
							{
								v10 = (_QWORD*)*v9;
								if ((_QWORD*)v9[2] == a2)
								{
									v11 = (_QWORD*)v9[1];
									*v11 = v10;
									v10[1] = v11;
									sub_14018B900((__int64)v9, 0);
								}
								v9 = v10;
							} while (v10 != v8);
						}
					}
				}
				else
				{
					v12 = (_QWORD**)v2[7];
					v13 = *v12;
					if (*v12 != v12)
					{
						do
						{
							v14 = (_QWORD*)*v13;
							if ((_QWORD*)v13[2] == a2)
							{
								v15 = (_QWORD*)v13[1];
								*v15 = v14;
								v14[1] = v15;
								sub_14018B900((__int64)v13, 0);
							}
							v13 = v14;
						} while (v14 != v12);
					}
				}
			}
			else
			{
				v16 = (_QWORD**)v2[11];
				v17 = *v16;
				if (*v16 != v16)
				{
					do
					{
						v18 = (_QWORD*)*v17;
						if ((_QWORD*)v17[2] == a2)
						{
							v19 = (_QWORD*)v17[1];
							*v19 = v18;
							v18[1] = v19;
							sub_14018B900((__int64)v17, 0);
						}
						v17 = v18;
					} while (v18 != v16);
				}
			}
		}
		else
		{
			v20 = (_QWORD**)v2[13];
			v21 = *v20;
			if (*v20 != v20)
			{
				do
				{
					v22 = (_QWORD*)*v21;
					if ((_QWORD*)v21[2] == a2)
					{
						v23 = (_QWORD*)v21[1];
						*v23 = v22;
						v22[1] = v23;
						sub_14018B900((__int64)v21, 0);
					}
					v21 = v22;
				} while (v22 != v20);
			}
		}
		if (v5)
		{
			v24 = v5 - 1;
			if (v24)
			{
				v25 = v24 - 1;
				if (v25)
				{
					if (v25 != 1)
						return;
					v26 = v2[9];
				}
				else
				{
					v26 = v2[7];
				}
			}
			else
			{
				v26 = v2[11];
			}
		}
		else
		{
			v26 = v2[13];
		}
		v27 = sub_14018B280(24i64, 0);
		if (v27 != (int*)-16i64)
			*((_QWORD*)v27 + 2) = a2;
		*(_QWORD*)v27 = v26;
		*((_QWORD*)v27 + 1) = *(_QWORD*)(v26 + 8);
		**(_QWORD**)(v26 + 8) = v27;
		*(_QWORD*)(v26 + 8) = v27;
	}
}
// 140C665D8: using guessed type __int64 qword_140C665D8;

